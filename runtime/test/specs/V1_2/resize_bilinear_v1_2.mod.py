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

layout = BoolScalar("layout", False) # NHWC

# TEST 1: RESIZE_BILINEAR_NCHW_1, h = 3, w = 3
i1 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
o1 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 3, 1}")
Model().Operation("RESIZE_BILINEAR", i1, 3, 3, layout).To(o1)

# Instantiate an example
example = Example({
    i1: [1.0, 1.0, 2.0, 2.0],
    o1: [1.0, 1.0, 1.0,
         1.666666667, 1.666666667, 1.666666667,
         2.0, 2.0, 2.0]
}).AddNchw(i1, o1, layout).AddRelaxed()


# TEST 2: RESIZE_BILINEAR_NCHW_2, h = 3, w = 3
i2 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 2}")
o2 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 3, 2}")
Model().Operation("RESIZE_BILINEAR", i2, 3, 3, layout).To(o2)

# Instantiate an example
example = Example({
    i2: [3, 4, 6, 10, 9, 10, 12, 16],
    o2: [3, 4, 5, 8, 6, 10,
         7, 8, 9, 12, 10, 14,
         9, 10, 11, 14, 12, 16,]
}).AddNchw(i2, o2, layout).AddRelaxed()
