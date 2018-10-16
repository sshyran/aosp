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

# TEST 1: TRANSPOSE_CONV2D, pad = valid, stride = 2
i1 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
w1 = Parameter("op2", "TENSOR_FLOAT32", "{2, 3, 3, 1}", [1, 3, 5, 7, 9, 11, 13, 15, 17, 2, 4, 6, 8, 10, 12, 14, 16, 18]) # weight
b1 = Parameter("op3", "TENSOR_FLOAT32", "{2}", [-1.5, -2]) # bias
s1 = Int32Vector("shape", [1, 5, 5, 2]) # output shape
act = Int32Scalar("act", 0) # act = none
o1 = Output("op4", "TENSOR_FLOAT32", "{1, 5, 5, 2}") # output
Model().Operation("TRANSPOSE_CONV_2D", i1, w1, b1, s1, 2, 2, 2, act, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    w1: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    b1: ("TENSOR_INT32", 0.25, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.5, 0)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [-0.5,  0,  1.5,  2,   5.5,   8,  4.5,  6,  8.5, 10,
          5.5,  6,  7.5,  8,  23.5,  26, 16.5, 18, 20.5, 22,
         14.5, 18, 22.5, 26,  60.5,  70, 40.5, 46, 52.5, 58,
         19.5, 22, 25.5, 28,  59.5,  66, 34.5, 38, 42.5, 46,
         37.5, 40, 43.5, 46, 101.5, 108, 58.5, 62, 66.5, 70]
}).AddNchw(i1, o1, s1, layout).AddAllActivations(o1, act).AddVariations("relaxed", quant8).AddInput(w1, b1)


# TEST 2: TRANSPOSE_CONV2D_LARGE, pad = same, stride = 3, act = relu
i2 = Input("op1", "TENSOR_FLOAT32", "{1, 1, 2, 1}") # input 0
w2 = Parameter("op2", "TENSOR_FLOAT32", "{1, 3, 3, 1}", [9, 5, 6, 9, 8, 5, 3, 1, 4]) # weight
b2 = Parameter("op3", "TENSOR_FLOAT32", "{1}", [-1000]) # bias
s2 = Int32Vector("shape", [1, 3, 4, 1]) # output shape
o2 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 4, 1}") # output
Model().Operation("TRANSPOSE_CONV_2D", i2, w2, b2, s2, 1, 3, 3, 1, layout).To(o2)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i2: ("TENSOR_QUANT8_ASYMM", 2.0, 0),
    w2: ("TENSOR_QUANT8_ASYMM", 0.25, 128),
    b2: ("TENSOR_INT32", 0.5, 0),
    o2: ("TENSOR_QUANT8_ASYMM", 20.0, 50)
})

Example({
    i2: [300, 500],
    o2: [500.,  800.,  3500., 1500.,
         1400., 500.,  3500., 3000.,
         0.,    200.,  500.,  0.]
}).AddNchw(i2, o2, s2, layout).AddVariations("relaxed", quant8).AddInput(w2, b2)


# TEST 3: TRANSPOSE_CONV2D_SAME, outputShape = [1, 4, 4, 1], pad = same, stride = 1, act = none
i3 = Input("op1", "TENSOR_FLOAT32", "{1, 4, 4, 2}") # input 0
w3 = Parameter("op2", "TENSOR_FLOAT32", "{1, 3, 3, 2}", [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18]) # weight
b3 = Parameter("op3", "TENSOR_FLOAT32", "{1}", [0]) # bias
s3 = Int32Vector("shape", [1, 4, 4, 1]) # output shape
o3 = Output("op4", "TENSOR_FLOAT32", "{1, 4, 4, 1}") # output
Model().Operation("TRANSPOSE_CONV_2D", i3, w3, b3, s3, 1, 1, 1, 0, layout).To(o3)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i3: ("TENSOR_QUANT8_ASYMM", 0.5, 100),
    w3: ("TENSOR_QUANT8_ASYMM", 0.5, 128),
    b3: ("TENSOR_INT32", 0.25, 0),
    o3: ("TENSOR_QUANT8_ASYMM", 16.0, 0)
})

Example({
    i3: [1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16,
         17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32],
    o3: [184,  412,  568,  528,
         678,  1347, 1689, 1434,
         1494, 2715, 3057, 2442,
         1968, 3352, 3652, 2760]
}).AddNchw(i3, o3, s3, layout).AddVariations("relaxed", quant8).AddInput(w3, b3)


# TEST 4: TRANSPOSE_CONV2D_VALID, outputShape = [1, 6, 6, 1], pad = valid, stride = 1, act = none
i4 = Input("op1", "TENSOR_FLOAT32", "{1, 4, 4, 2}") # input 0
w4 = Parameter("op2", "TENSOR_FLOAT32", "{1, 3, 3, 2}", [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18]) # weight
b4 = Parameter("op3", "TENSOR_FLOAT32", "{1}", [0]) # bias
s4 = Int32Vector("shape", [1, 6, 6, 1]) # output shape
o4 = Output("op4", "TENSOR_FLOAT32", "{1, 6, 6, 1}") # output
Model().Operation("TRANSPOSE_CONV_2D", i4, w4, b4, s4, 2, 1, 1, 0, layout).To(o4)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i4: ("TENSOR_QUANT8_ASYMM", 0.25, 10),
    w4: ("TENSOR_QUANT8_ASYMM", 0.5, 128),
    b4: ("TENSOR_INT32", 0.125, 0),
    o4: ("TENSOR_QUANT8_ASYMM", 32.0, 80)
})

Example({
    i4: [1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16,
         17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32],
    o4: [5,    22,   59,   101,  114,  83,
         52,   184,  412,  568,  528,  344,
         237,  678,  1347, 1689, 1434, 879,
         597,  1494, 2715, 3057, 2442, 1431,
         856,  1968, 3352, 3652, 2760, 1548,
         689,  1534, 2543, 2729, 2010, 1103]
}).AddNchw(i4, o4, s4, layout).AddVariations("relaxed", quant8).AddInput(w4, b4)


# TEST 5: TRANSPOSE_CONV2D_EXPLICIT, pad = [1, 2, 2, 1], stride = 1, act = none
i5 = Input("op1", "TENSOR_FLOAT32", "{1, 4, 4, 2}") # input 0
w5 = Parameter("op2", "TENSOR_FLOAT32", "{1, 3, 3, 2}", [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18]) # weight
b5 = Parameter("op3", "TENSOR_FLOAT32", "{1}", [0]) # bias
o5 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 3, 1}") # output
Model().Operation("TRANSPOSE_CONV_2D", i5, w5, b5, 1, 2, 2, 1, 1, 1, 0, layout).To(o5)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i5: ("TENSOR_QUANT8_ASYMM", 0.5, 100),
    w5: ("TENSOR_QUANT8_ASYMM", 0.25, 128),
    b5: ("TENSOR_INT32", 0.125, 0),
    o5: ("TENSOR_QUANT8_ASYMM", 20.0, 50)
})

Example({
    i5: [1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16,
         17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32],
    o5: [678,  1347, 1689,
         1494, 2715, 3057,
         1968, 3352, 3652]
}).AddNchw(i5, o5, layout).AddVariations("relaxed", quant8).AddInput(w5, b5)
