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

# TEST 1: L2_POOL_2D_NCHW_1, pad = 0, stride = 1, filter = 1, act = none
i1 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
o1 = Output("op4", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
Model().Operation("L2_POOL_2D", i1, 0, 0, 0, 0, 1, 1, 1, 1, 0, layout).To(o1)

# Instantiate an example
example = Example({
    i1: [1.0, 2.0, 3.0, 4.0],
    o1: [1.0, 2.0, 3.0, 4.0]
}).AddNchw(i1, o1, layout).AddRelaxed()


# TEST 2: L2_POOL_2D_NCHW_2, pad = same, stride = 2, filter = 2, act = none
i2 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 4, 1}")
o2 = Output("op4", "TENSOR_FLOAT32", "{1, 1, 2, 1}")
Model().Operation("L2_POOL_2D", i2, 1, 2, 2, 2, 2, 0, layout).To(o2)

# Instantiate an example
example = Example({
    i2: [0, 6, 2, 4, 3, 2, 10, 7],
    o2: [3.5, 6.5]
}).AddNchw(i2, o2, layout).AddRelaxed()


# TEST 3: L2_POOL_2D_NCHW_LARGE, pad = 0, stride = 1, filter = 2, act = none
i3 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 3}")
o3 = Output("op4", "TENSOR_FLOAT32", "{1, 1, 1, 3}")
Model("large").Operation("L2_POOL_2D", i3, 0, 0, 0, 0, 1, 1, 2, 2, 0, layout).To(o3)

# Instantiate an example
example = Example({
    i3: [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0],
    o3: [6.442049503326416, 7.3143692016601562, 8.2158384323120117]
}).AddNchw(i3, o3, layout).AddRelaxed()
