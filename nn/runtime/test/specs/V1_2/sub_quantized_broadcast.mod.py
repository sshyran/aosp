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

input0 = Input("input0", "TENSOR_QUANT8_ASYMM", "{1, 2}, 1.0, 0")
input1 = Input("input1", "TENSOR_QUANT8_ASYMM", "{2, 2}, 1.0, 0")
activation = 0
output0 = Output("output0", "TENSOR_QUANT8_ASYMM", "{2, 2}, 1.0, 0")

model = Model().Operation("SUB", input0, input1, activation).To(output0)

input0_values = [100, 200]
input1_values = [1, 2,
                 3, 4]
output_values = [99, 198,
                 97, 196]

Example({
    input0: input0_values,
    input1: input1_values,
    output0: output_values,
})
