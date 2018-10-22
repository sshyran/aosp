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

import random

random.seed(0)

shape = "{2, 4, 16, 2}, 0.5, 0"
input0 = Input("input0", "TENSOR_QUANT8_ASYMM", shape)
input1 = Input("input1", "TENSOR_QUANT8_ASYMM", shape)
activation = 0
output0 = Output("output0", "TENSOR_QUANT8_ASYMM", shape)

model = Model().Operation("SUB", input0, input1, activation).To(output0)

input0_values = list(range(256))
input1_values = list(input0_values)
random.shuffle(input1_values)
output_values = [max(0, a - b) for a, b in zip(input0_values, input1_values)]

Example({
    input0: input0_values,
    input1: input1_values,
    output0: output_values,
})
