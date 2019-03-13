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
model_shape = Model("shape").Operation("RESIZE_BILINEAR", i1, 3, 3, layout).To(o1)
model_scale = Model("scale").Operation("RESIZE_BILINEAR", i1, 1.5, 1.5, layout).To(o1)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.01, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.01, 0)
})

test1 = {
    i1: [1.0, 1.0, 2.0, 2.0],
    o1: [1.0, 1.0, 1.0,
         1.666666667, 1.666666667, 1.666666667,
         2.0, 2.0, 2.0]
}

# Instantiate an example
Example(test1, model=model_shape).AddNchw(i1, o1, layout).AddVariations("relaxed", "float16", quant8)
Example(test1, model=model_scale).AddNchw(i1, o1, layout).AddVariations("relaxed", "float16", quant8)


# TEST 2: RESIZE_BILINEAR_NCHW_2, h = 3, w = 3
i2 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 2}")
o2 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 3, 2}")
model_shape = Model("shape").Operation("RESIZE_BILINEAR", i2, 3, 3, layout).To(o2)
model_scale = Model("scale").Operation("RESIZE_BILINEAR", i2, 1.6, 1.6, layout).To(o2)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i2: ("TENSOR_QUANT8_ASYMM", 0.25, 0),
    o2: ("TENSOR_QUANT8_ASYMM", 0.25, 0)
})

test2 = {
    i2: [3, 4, 6, 10, 9, 10, 12, 16],
    o2: [3, 4, 5, 8, 6, 10,
         7, 8, 9, 12, 10, 14,
         9, 10, 11, 14, 12, 16,]
}

# Instantiate an example
Example(test2, model=model_shape).AddNchw(i2, o2, layout).AddVariations("relaxed", "float16", quant8)
Example(test2, model=model_scale).AddNchw(i2, o2, layout).AddVariations("relaxed", "float16", quant8)


# TEST 3: RESIZE_BILINEAR, h = 3, w = 3
i3 = Input("op1", "TENSOR_FLOAT32", "{1, 2, 2, 1}")
o3 = Output("op4", "TENSOR_FLOAT32", "{1, 3, 3, 1}")
model_shape = Model("shape").Operation("RESIZE_BILINEAR", i3, 3, 3).To(o3)
model_scale = Model("scale").Operation("RESIZE_BILINEAR", i3, 1.8, 1.8).To(o3)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i3: ("TENSOR_QUANT8_ASYMM", 0.01, 0),
    o3: ("TENSOR_QUANT8_ASYMM", 0.01, 0)
})

test3 = {
    i3: [1.0, 1.0, 2.0, 2.0],
    o3: [1.0, 1.0, 1.0,
         1.666666667, 1.666666667, 1.666666667,
         2.0, 2.0, 2.0]
}

# Instantiate an example
Example(test3, model=model_shape).AddVariations("float16", quant8, includeDefault=False)
Example(test3, model=model_scale).AddVariations("float16", quant8, includeDefault=False)
