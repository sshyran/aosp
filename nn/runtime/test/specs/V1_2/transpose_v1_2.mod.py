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

# model
model = Model()
i1 = Input("input", "TENSOR_FLOAT32", "{2, 2}")
perms = Input("perms", "TENSOR_INT32", "{0}")
output = Output("output", "TENSOR_FLOAT32", "{2, 2}")

model = model.Operation("TRANSPOSE", i1, perms).To(output)

# Additional data type
quant8 = DataTypeConverter().Identify({
    i1: ("TENSOR_QUANT8_ASYMM", 0.5, 0),
    output: ("TENSOR_QUANT8_ASYMM", 0.5, 0)
})

# Instantiate an example
Example({
    i1: [1.0, 2.0,
         3.0, 4.0],
    perms: [],
    output: [1.0, 3.0,
             2.0, 4.0]
}).AddVariations("relaxed", quant8)

