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

i = Input("op1", "TENSOR_FLOAT32", "{2, 2, 2, 5}") # input 0
o = Output("op2", "TENSOR_FLOAT32", "{2, 2, 2, 5}") # output 0
axis = Int32Scalar("axis", -1) # last axis

# Additional data type
quant8 = DataTypeConverter().Identify({
    i: ("TENSOR_QUANT8_ASYMM", 0.25, 128),
    o: ("TENSOR_QUANT8_ASYMM", 1./256, 0)
})

example1 = {
    i: [1., 2., 3., 4., 5., -1., -2., -3., -4., -5.] * 4,
    o: [0.011656231, 0.031684921, 0.086128544, 0.234121657, 0.636408647,
         0.636408647, 0.234121657, 0.086128544, 0.031684921, 0.011656231] * 4
}
example2 = {
    i: [1., 2., 3., 4., 5., -1., -2., -3., -4., -5.] * 4,
    o: [0.2] * 40
}

# TEST1: All dimensions other than 2 or 4, without axis parameter
# beta = 1.0
Model().Operation("SOFTMAX", i, 1.0).To(o)
Example(example1).AddVariations("relaxed", quant8).AddDims([1, 3], i, o)
# beta = 0.000001
Model().Operation("SOFTMAX", i, 0.000001).To(o)
Example(example2).AddVariations("relaxed", quant8).AddDims([1, 3], i, o)

# TEST2: All dimensions, with all possible axis parameter
# beta = 1.0
Model("axis").Operation("SOFTMAX", i, 1.0, axis).To(o)
Example(example1).AddVariations("relaxed", quant8).AddAllDimsAndAxis(i, o, axis)
# beta = 0.000001
Model("axis").Operation("SOFTMAX", i, 0.000001, axis).To(o)
Example(example2).AddVariations("relaxed", quant8).AddAllDimsAndAxis(i, o, axis)
