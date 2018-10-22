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

input_scale, input_offset = 0.05, 100
output_scale, output_offset = 1.0 / 128, 128  # Required.

def dequantize(x):
  return (x - input_offset) * input_scale

def quantize(x):
  return max(0, min(255, int(round(x / output_scale)) + output_offset))

input0 = Input("input0", "TENSOR_QUANT8_ASYMM", "{256}, %g, %d" % (input_scale, input_offset))
output0 = Output("output0", "TENSOR_QUANT8_ASYMM", "{256}, %g, %d" % (output_scale, output_offset))

model = Model().Operation("TANH", input0).To(output0)

input_values = list(range(256))
output_values = [quantize(math.tanh(dequantize(x))) for x in input_values]

Example({
    input0: input_values,
    output0: output_values,
})
