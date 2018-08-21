#
# Copyright (C) 2018 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# TEST 1: AXIS_ALIGNED_BBOX_TRANSFORM, weight = [2, 2, .5, .5], applyScale = false
# TEST 2: AXIS_ALIGNED_BBOX_TRANSFORM, weight = [2, 2, .5, .5], applyScale = true
r1 = Input("roi", "TENSOR_FLOAT32", "{5, 5}")
d1 = Input("bboxDeltas", "TENSOR_FLOAT32", "{5, 8}")
i1 = Input("imageInfo", "TENSOR_FLOAT32", "{5, 3}")
o1 = Output("out", "TENSOR_FLOAT32", "{5, 8}")
b1 = Output("batchSplit", "TENSOR_INT32", "{5}")
model1 = Model().Operation("AXIS_ALIGNED_BBOX_TRANSFORM", r1, d1, i1, [2., 2., 0.5, 0.5], False).To([o1, b1])
model2 = Model().Operation("AXIS_ALIGNED_BBOX_TRANSFORM", r1, d1, i1, [2., 2., 0.5, 0.5], True).To([o1, b1])

inputs = {
    r1: [0, 100, 150, 400, 430,
         1, 120, 60, 122, 61,
         2, 10, 20, 20, 50,
         2, 50, 120, 150, 250,
         3, 400, 100, 1000, 2000],
    d1: [0.2, 0.2, 0.1, 0.1,
         0.3, -0.1, -0.2, 0.1,
         -0.5, 0.2, 0.2, -0.5,
         -0.1, -0.1, 2.5, 3,
         -0.5, -0.5, 1, 1,
         0.5, 0.5, -1.5, -1.2,
         0.2, 0.2, -3, -4,
         1, -0.5, 0.3, 0.5,
         0.3, -0.2, 1.1, -0.8,
         0.1, 0.05, -0.5, -0.5],
    i1: [512, 512, 1,
         128, 256, 0.5,
         256, 256, 0.7,
         1024, 512, 2,
         1024, 512, 2]
}

Example((inputs, {
    o1: [96.778885, 146.992920, 463.421143, 489.207092,
         194.766830, 104.842926, 395.533142, 447.057098,
         237.520432, 121.248184, 243.979568, 121.351822,
         85.999985, 27.599991, 397.500000, 214.100006,
         0.000000, 0.000000, 73.580643, 200.567169,
         25.369484, 59.474972,25.130516, 62.453602,
         157.564560, 283.425812, 156.921158, 282.488434,
         84.223312, 0.000000, 345.348145, 365.000000,
         0.000000, 334.398193, 255.000000, 511.000000,
         255.000000, 374.348328, 255.000000, 511.000000],
    b1: [1, 1, 2, 1, 0]
}), model=model1).AddVariations("relaxed")

Example((inputs, {
    o1: [96.778885, 146.992920, 463.421143, 489.207092,
         194.766830, 104.842926, 395.533142, 447.057098,
         118.760216, 60.624092, 121.989784, 60.675911,
         42.999992, 13.799995, 198.750000, 107.050003,
         0.000000, 0.000000, 51.506451, 140.397018,
         17.758638, 41.632481, 17.591360, 43.717522,
         110.295189, 198.398071, 109.844810, 197.741898,
         58.956318, 0.000000, 241.743698, 255.500000,
         0.000000, 668.796387, 510.000000, 1022.000000,
         510.000000, 748.696655, 510.000000, 1022.000000],
    b1: [1, 1, 2, 1, 0]
}), model=model2).AddVariations("relaxed")


# TEST 3: AXIS_ALIGNED_BBOX_TRANSFORM_SINGLE_BATCH, weight = [2, 2, .5, .5], applyScale = true
r3 = Input("roi", "TENSOR_FLOAT32", "{2, 4}")
d3 = Input("bboxDeltas", "TENSOR_FLOAT32", "{2, 8}")
i3 = Input("imageInfo", "TENSOR_FLOAT32", "{1, 3}")
o3 = Output("out", "TENSOR_FLOAT32", "{2, 8}")
b3 = Output("batchSplit", "TENSOR_INT32", "{1}")
Model("single_batch").Operation("AXIS_ALIGNED_BBOX_TRANSFORM", r3, d3, i3, [2., 2., 0.5, 0.5], True).To([o3, b3])

Example({
    r3: [10, 20, 20, 50,
         50, 120, 150, 250],
    d3: [-0.5, -0.5, 1, 1,
         0.5, 0.5, -1.5, -1.2,
         0.2, 0.2, -3, -4,
         1, -0.5, 0.3, 0.5],
    i3: [256, 256, 0.7],
    o3: [0.000000, 0.000000, 51.506451, 140.397018,
         17.758638, 41.632481, 17.591360, 43.717522,
         110.295189, 198.398071, 109.844810, 197.741898,
         58.956318, 0.000000, 241.743698, 255.500000],
    b3: [2]
}).AddVariations("relaxed")
