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

# TEST 1: MAX_POOL_2D_NCHW_1, pad = 0, stride = 1, filter = 1, act = none
i1 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
o1 = Output("op4", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
Model().Operation("MAX_POOL_2D", i1, 0, 0, 0, 0, 1, 1, 1, 1, 0, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.5, 0)
})

# Instantiate an example
example = Example({
    i1: [1.0, 2.0, 3.0, 4.0],
    o1: [1.0, 2.0, 3.0, 4.0]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8)


# TEST 2: MAX_POOL_2D_NCHW_2, act = none
bat = 5
row = 50
col = 70
chn = 3
std = 20
flt = 20
pad = 0
output_row = (row + 2 * pad - flt + std) // std
output_col = (col + 2 * pad - flt + std) // std

i2 = Input("op1", ("TENSOR_FLOAT32", [bat, row, col, chn]))
o2 = Output("op4", ("TENSOR_FLOAT32", [bat, output_row, output_col, chn]))
Model().Operation("MAX_POOL_2D", i2, pad, pad, pad, pad, std, std, flt, flt, 0, layout).To(o2)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i2: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    o2: ("TENSOR_QUANT8_ASYMM", 0.5, 0)
})

# Instantiate an example
example = Example({
    i2: [x % std + 1 for x in range(bat * row * col * chn)],
    o2: [std for _ in range(bat * output_row * output_col * chn)]
}).AddNchw(i2, o2, layout).AddVariations("relaxed", quant8)


# TEST 3: MAX_POOL_2D_NCHW_3, act = relu6
bat = 5
row = 50
col = 70
chn = 3
std = 20
flt = 20
pad = 0
output_row = (row + 2 * pad - flt + std) // std
output_col = (col + 2 * pad - flt + std) // std

i3 = Input("op1", ("TENSOR_FLOAT32", [bat, row, col, chn]))
o3 = Output("op4", ("TENSOR_FLOAT32", [bat, output_row, output_col, chn]))
Model().Operation("MAX_POOL_2D", i3, pad, pad, pad, pad, std, std, flt, flt, 3, layout).To(o3)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i3: ("TENSOR_QUANT8_ASYMM", 0.25, 0),
    o3: ("TENSOR_QUANT8_ASYMM", 0.25, 0)
})

# Instantiate an example
example = Example({
    i3: [x % std + 1 for x in range(bat * row * col * chn)],
    o3: [6 for _ in range(bat * output_row * output_col * chn)]
}).AddNchw(i3, o3, layout).AddVariations("relaxed", quant8)


# TEST 4: MAX_POOL_2D_NCHW_4, pad = same, stride = 2, filter = 2, act = none
i4 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 4, 1}")
o4 = Output("op4", "TENSOR_FLOAT32", "{1, 1, 2, 1}")
Model().Operation("MAX_POOL_2D", i4, 1, 2, 2, 2, 2, 0, layout).To(o4)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i4: ("TENSOR_QUANT8_ASYMM", 0.25, 0),
    o4: ("TENSOR_QUANT8_ASYMM", 0.25, 0)
})

# Instantiate an example
example = Example({
    i4: [0, 6, 2, 4, 3, 2, 10, 7],
    o4: [6, 10]
}).AddNchw(i4, o4, layout).AddVariations("relaxed", quant8)
