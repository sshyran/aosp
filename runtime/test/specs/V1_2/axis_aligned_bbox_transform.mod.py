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

# TEST 1: AXIS_ALIGNED_BBOX_TRANSFORM
r1 = Input("roi", "TENSOR_FLOAT32", "{5, 4}")
d1 = Input("bboxDeltas", "TENSOR_FLOAT32", "{5, 8}")
b1 = Input("batchSplit", "TENSOR_INT32", "{4}")
i1 = Input("imageInfo", "TENSOR_FLOAT32", "{4, 3}")
o1 = Output("out", "TENSOR_FLOAT32", "{5, 8}")
model1 = Model().Operation("AXIS_ALIGNED_BBOX_TRANSFORM", r1, d1, b1, i1).To(o1)

inputs = {
    r1: [100, 150, 400, 430,
         120, 60, 122, 61,
         10, 20, 20, 50,
         50, 120, 150, 250,
         400, 100, 1000, 2000],
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
    b1: [1, 1, 2, 1],
    i1: [512, 512, 1,
         128, 256, 0.5,
         256, 256, 0.7,
         1024, 512, 2]
}

Example((inputs, {
    o1: [144.224350, 191.276062, 475.775635, 500.723938,
         217.190384, 107.276062, 462.809631, 416.723938,
         59.389297, 30.198368, 60.610703, 30.501633,
         54.308754, 25.178616, 66.491249, 35.221386,
         0.000000, 0.000000, 16.513985, 42.541958,
         13.219045, 31.837460, 14.780955, 38.162540,
         82.257446, 146.866638, 85.742546, 148.533356,
         92.754936, 8.983186, 179.199997, 159.016800,
         0.000000, 486.274963, 1024.000000, 2048.000000,
         1024.000000, 1137.591675, 1024.000000, 2048.000000]
}), model=model1).AddVariations("relaxed", "float16")


# TEST 2: AXIS_ALIGNED_BBOX_TRANSFORM_ZERO_BATCH
r2 = Input("roi", "TENSOR_FLOAT32", "{5, 4}")
d2 = Input("bboxDeltas", "TENSOR_FLOAT32", "{5, 8}")
b2 = Input("batchSplit", "TENSOR_INT32", "{7}")
i2 = Input("imageInfo", "TENSOR_FLOAT32", "{7, 3}")
o2 = Output("out", "TENSOR_FLOAT32", "{5, 8}")
model2 = Model().Operation("AXIS_ALIGNED_BBOX_TRANSFORM", r2, d2, b2, i2).To(o2)

inputs = {
    r2: [100, 150, 400, 430,
         120, 60, 122, 61,
         10, 20, 20, 50,
         50, 120, 150, 250,
         400, 100, 1000, 2000],
    d2: [0.2, 0.2, 0.1, 0.1,
         0.3, -0.1, -0.2, 0.1,
         -0.5, 0.2, 0.2, -0.5,
         -0.1, -0.1, 2.5, 3,
         -0.5, -0.5, 1, 1,
         0.5, 0.5, -1.5, -1.2,
         0.2, 0.2, -3, -4,
         1, -0.5, 0.3, 0.5,
         0.3, -0.2, 1.1, -0.8,
         0.1, 0.05, -0.5, -0.5],
    b2: [1, 0, 1, 0, 0, 2, 1],
    i2: [512, 512, 1,
         32, 32, 0.1,
         128, 256, 0.5,
         32, 32, 0.1,
         32, 32, 0.1,
         256, 256, 0.7,
         1024, 512, 2]
}

Example((inputs, {
    o2: [144.224350, 191.276062, 475.775635, 500.723938,
         217.190384, 107.276062, 462.809631, 416.723938,
         59.389297, 30.198368, 60.610703, 30.501633,
         54.308754, 25.178616, 66.491249, 35.221386,
         0.000000, 0.000000, 16.513985, 42.541958,
         13.219045, 31.837460, 14.780955, 38.162540,
         82.257446, 146.866638, 85.742546, 148.533356,
         92.754936, 8.983186, 179.199997, 159.016800,
         0.000000, 486.274963, 1024.000000, 2048.000000,
         1024.000000, 1137.591675, 1024.000000, 2048.000000]
}), model=model2).AddVariations("relaxed", "float16")
