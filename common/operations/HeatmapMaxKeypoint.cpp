/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "CpuOperationUtils.h"
#include "Operations.h"

#include <cfloat>
#include <cmath>

#include "Tracing.h"

namespace android {
namespace nn {

// This function uses Taylor expansion up to the quatratic term to approximate bicubic
// upscaling result.
// 2nd order Taylor expansion: D(x) = D - b'x + 1/2 * x'Ax
// where D = grid[1][1], Taylor expansion center, the original score,
//       x = delta, the correction on max keypoint position,
//       D(x) = deltaScore, the accuracy score after correction
static void solveForDelta(const float grid[3][3], float* delta, float* deltaScore) {
    // b: negative 1st order derivative at center
    // A: Hessian matrix at center (2nd order derivative)
    float A[2][2], b[2];
    b[0] = -(grid[1][2] - grid[1][0]) / 2.0f;
    b[1] = -(grid[2][1] - grid[0][1]) / 2.0f;
    A[0][0] = grid[1][0] - 2.0f * grid[1][1] + grid[1][2];
    A[0][1] = (grid[2][2] - grid[2][0] - grid[0][2] + grid[0][0]) / 4.0f;
    A[1][0] = A[0][1];
    A[1][1] = grid[0][1] - 2.0f * grid[1][1] + grid[2][1];

    // solve Ax=b, where x=delta -> delta = inv(A) * b
    float crossProd1 = A[0][0] * A[1][1], crossProd2 = A[0][1] * A[1][0];
    float detA = crossProd1 - crossProd2;
    // check if A is invertible
    if (std::abs(detA) < std::max(1e-5f, 1e-5f * crossProd1)) return;
    delta[0] = (A[1][1] * b[0] - A[0][1] * b[1]) / detA;
    delta[1] = (A[0][0] * b[1] - A[1][0] * b[0]) / detA;

    // clip out of range delta, i.e. delta > 3/2
    if (std::abs(delta[0]) > 1.5f || std::abs(delta[1]) > 1.5f) {
        float scale = 1.5f / std::max(std::abs(delta[0]), std::abs(delta[1]));
        delta[0] *= scale;
        delta[1] *= scale;
    }

    *deltaScore = grid[1][1] - b[0] * delta[0] - b[1] * delta[1] +
                  ((A[0][0] * delta[0] + A[0][1] * delta[1]) * delta[0] +
                   (A[1][0] * delta[0] + A[1][1] * delta[1]) * delta[1]) /
                          2.0f;
}

bool heatmapMaxKeypoint(const float* heatmap, const Shape& heatmapShape, const float* boxes,
                        const Shape& boxesShape, float* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("HeatmapMaxKeypoint");

    uint32_t numBoxes = getSizeOfDimension(heatmapShape, 0);
    uint32_t heatmapSize = getSizeOfDimension(heatmapShape, 1);
    uint32_t numKeypoints = getSizeOfDimension(heatmapShape, 3);
    uint32_t boxInfoLength = getSizeOfDimension(boxesShape, 1);
    uint32_t outputInfoLength = getSizeOfDimension(outputShape, 1);

    const float* heatmapBase = heatmap;
    const float* boxInfoBase = boxes;
    float* outputBase = outputData;
    for (uint32_t i = 0; i < numBoxes; i++) {
        for (uint32_t j = 0; j < numKeypoints; j++) {
            // find max score and its index
            uint32_t maxIndex = 0;
            float maxScore = -FLT_MAX;
            for (uint32_t k = 0; k < heatmapSize * heatmapSize; k++) {
                float val = heatmapBase[k * numKeypoints + j];
                if (maxScore < val) {
                    maxScore = val;
                    maxIndex = k;
                }
            }

            uint32_t maxIndexWidth = maxIndex % heatmapSize;
            uint32_t maxIndexHeight = maxIndex / heatmapSize;

            // get local 3x3 grid
            float localGrid[3][3];
            for (int32_t dh = -1; dh <= 1; dh++) {
                for (int32_t dw = -1; dw <= 1; dw++) {
                    // cast uint32_t to int32_t
                    int32_t h = static_cast<int32_t>(maxIndexHeight) + dh;
                    int32_t w = static_cast<int32_t>(maxIndexWidth) + dw;

                    // use mirroring for out of bound indexing
                    // need to ensure heatmapSize >= 2
                    h = h < 0 ? 1 : (h >= heatmapSize ? heatmapSize - 2 : h);
                    w = w < 0 ? 1 : (w >= heatmapSize ? heatmapSize - 2 : w);

                    uint32_t heatmapIndex = static_cast<uint32_t>(h) * heatmapSize * numKeypoints +
                                            static_cast<uint32_t>(w) * numKeypoints + j;
                    localGrid[dh + 1][dw + 1] = heatmapBase[heatmapIndex];
                }
            }

            float delta[2] = {0.0f, 0.0f}, deltaScore = maxScore;
            solveForDelta(localGrid, delta, &deltaScore);

            float wRoiStart = boxInfoBase[0];
            float hRoiStart = boxInfoBase[1];
            float wRoiEnd = boxInfoBase[2];
            float hRoiEnd = boxInfoBase[3];
            float roiWidth = wRoiEnd - wRoiStart;
            float roiHeight = hRoiEnd - hRoiStart;
            float wRelativePos = (static_cast<float>(maxIndexWidth) + delta[0] + 0.5f) /
                                 static_cast<float>(heatmapSize);
            float hRelativePos = (static_cast<float>(maxIndexHeight) + delta[1] + 0.5f) /
                                 static_cast<float>(heatmapSize);
            outputBase[j] = wRelativePos * roiWidth + wRoiStart;
            outputBase[numKeypoints + j] = hRelativePos * roiHeight + hRoiStart;
            outputBase[numKeypoints * 2 + j] = deltaScore;
        }
        boxInfoBase += boxInfoLength;
        heatmapBase += heatmapSize * heatmapSize * numKeypoints;
        outputBase += numKeypoints * outputInfoLength;
    }

    return true;
}

}  // namespace nn
}  // namespace android
