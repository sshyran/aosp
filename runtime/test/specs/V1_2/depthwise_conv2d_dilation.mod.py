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

# TEST 1: dilation set to 1 (default)
i1 = Input("op1", "TENSOR_FLOAT32", "{1, 3, 3, 2}")
f1 = Parameter("op2", "TENSOR_FLOAT32", "{1, 2, 2, 4}", [.25, 0., .2, 0., .25, 0., 0., .3, .25, 0., 0., 0., .25, .1, 0., 0.])
b1 = Parameter("op3", "TENSOR_FLOAT32", "{4}", [1, 2, 3, 4])
o1 = Output("op4", "TENSOR_FLOAT32", "{1, 2, 2, 4}")
Model().Operation("DEPTHWISE_CONV_2D", i1, f1, b1, 0, 0, 0, 0, 1, 1, 2, 0, layout, 1, 1).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    f1: ("TENSOR_QUANT8_ASYMM", 0.01, 0),
    b1: ("TENSOR_INT32", 0.005, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.1, 0)
})

# Instantiate an example
example = Example({
    i1: [10, 21, 10, 22, 10, 23,
         10, 24, 10, 25, 10, 26,
         10, 27, 10, 28, 10, 29],
    o1: [11, 3, 7.2, 10.6,
         11, 3, 7.4, 10.9,
         11, 3, 7.8, 11.5,
         11, 3, 8.0, 11.8]
}).AddNchw(i1, o1, layout).AddInput(f1, b1).AddVariations("relaxed", "float16", quant8)


# TEST 2: dilation set to 2
i2 = Input("op1", "TENSOR_FLOAT32", "{1, 4, 4, 2}")
f2 = Parameter("op2", "TENSOR_FLOAT32", "{1, 2, 2, 4}", [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
b2 = Parameter("op3", "TENSOR_FLOAT32", "{4}", [0,0,0,0])
o2 = Output("op4", "TENSOR_FLOAT32", "{1, 2, 2, 4}")
Model().Operation("DEPTHWISE_CONV_2D", i2, f2, b2, 0, 0, 0, 0, 1, 1, 2, 0, layout, 2, 2).To(o2)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i2: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    f2: ("TENSOR_QUANT8_ASYMM", 0.01, 0),
    b2: ("TENSOR_INT32", 0.005, 0),
    o2: ("TENSOR_QUANT8_ASYMM", 0.1, 0)
})

# Instantiate an example
example = Example({
    i2: [0, 0, 0, 0, 0, 0, 0, 0,
         0, 0, 0, 1, 1, 0, 0, 0,
         0, 0, 0, 1, 1, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0,],
    o2: [13, 14, 0, 0,
         0, 0, 11, 12,
         5, 6, 0, 0,
         0, 0, 3, 4]
}).AddNchw(i2, o2, layout).AddInput(f2, b2)
