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

# TEST 1: RESIZE_NEAREST_NEIGHBOR_1, h = 1, w = 1
i1 = Input("in", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 1, 1, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 1, 1, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 128),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 128)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [1]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 2: RESIZE_NEAREST_NEIGHBOR_2, h = 3, w = 3
i1 = Input("in", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 3, 3, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 3, 3, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 0)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [1, 1, 2, 1, 1, 2, 3, 3, 4]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 3: RESIZE_NEAREST_NEIGHBOR_3, h = 2, w = 2
i1 = Input("in", "TENSOR_FLOAT32", "{1, 3, 3, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 2, 2, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 2, 3, 4, 5, 6, 7, 8, 9],
    o1: [1, 2, 4, 5]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 4: RESIZE_NEAREST_NEIGHBOR_4, h = 2, w = 5
i1 = Input("in", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 2, 5, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 2, 5, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [1, 1, 1, 2, 2, 3, 3, 3, 4, 4]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 5: RESIZE_NEAREST_NEIGHBOR_5, h = 3, w = 3
i1 = Input("in", "TENSOR_FLOAT32", "{1, 4, 4, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 3, 3, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 3, 3, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16],
    o1: [1, 2, 3, 5, 6, 7, 9, 10, 11]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 6: RESIZE_NEAREST_NEIGHBOR_6, h = 5, w = 2
i1 = Input("in", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 5, 2, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 5, 2, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [1, 2, 1, 2, 1, 2, 3, 4, 3, 4]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 7: RESIZE_NEAREST_NEIGHBOR_7, h = 4, w = 4
i1 = Input("in", "TENSOR_FLOAT32", "{1, 2, 2, 1}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{1, 4, 4, 1}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 4, 4, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 2, 3, 4],
    o1: [1, 1, 2, 2, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")


# TEST 8: RESIZE_NEAREST_NEIGHBOR_8, h = 3, w = 3
i1 = Input("in", "TENSOR_FLOAT32", "{2, 2, 2, 2}") # input 0
o1 = Output("out", "TENSOR_FLOAT32", "{2, 3, 3, 2}") # output 0
Model().Operation("RESIZE_NEAREST_NEIGHBOR", i1, 3, 3, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.25, 100),
    o1: ("TENSOR_QUANT8_ASYMM", 0.25, 100)
})

Example({
    i1: [1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8],
    o1: [1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2,
         3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6,
         5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8]
}).AddNchw(i1, o1, layout).AddVariations("relaxed", quant8, "float16")
