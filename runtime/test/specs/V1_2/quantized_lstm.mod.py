#
# Copyright (C) 2017 The Android Open Source Project
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
# limitations under the License.  #

# LSTM Test: No Cifg, No Peephole, No Projection, and No Clipping.

model = Model()

n_batch = 2
n_input = 2
n_cell = 4
n_output = n_cell

input_ = Input("input", ("TENSOR_QUANT8_ASYMM", (n_batch, n_input), 1 / 128, 128))
prev_output = Input("prevOutput", ("TENSOR_QUANT8_ASYMM", (n_batch, n_output), 1 / 128, 128))
weights_scale = 0.00408021
weights = Input("weights", ("TENSOR_QUANT8_ASYMM", (4 * n_cell, n_input + n_output), 0.00408021, 100))
bias = Input("bias", ("TENSOR_INT32", (4 * n_cell,), weights_scale / 128, 0))
prev_cell_state = Input("prevCellState", ("TENSOR_QUANT16_ASYMM", (n_batch, n_cell), 1 / 2048, 0))

concat_temp = IgnoredOutput("concatTemp", ("TENSOR_QUANT8_ASYMM", (n_batch, n_input + n_output), 1 / 128, 128))
activation_temp = IgnoredOutput("activationTemp", ("TENSOR_QUANT16_ASYMM", (n_batch, 4 * n_cell), 1 / 128, 128))
output_state_out = Output("outputStateOut", ("TENSOR_QUANT8_ASYMM", (n_batch, n_output), 1 / 128, 128))
cell_state_out = Output("cellStateOut", ("TENSOR_QUANT16_ASYMM", (n_batch, n_cell), 1 / 2048, 0))
output = Output("output", ("TENSOR_QUANT8_ASYMM", (n_batch, n_output), 1 / 128, 128))


model = model.Operation("QUANTIZED_16BIT_LSTM",
                        input_,
                        prev_output,
                        weights,
                        bias,
                        prev_cell_state
).To([concat_temp, activation_temp, output_state_out, cell_state_out, output])

input_dict = {
    input_: [166, 179, 50,  150],
    prev_output: [136, 150, 140, 115, 135, 152, 138, 112],
    weights: [254, 206, 77,  168, 146, 250,
              71,  20,  215, 6,   235, 171,
              223, 7,   118, 225, 10,  218,
              59,  130, 174, 26,  171, 108,
              172, 60,  205, 65,  133, 34,
              14,  0,   140, 168, 29,  49,
              240, 223, 133, 56,  206, 109,
              142, 64,  246, 216, 54,  183,
              137, 240, 103, 52,  24,  50,
              68,  51,  237, 112, 132, 179,
              0,   220, 89,  23,  158, 110,
              69,  4,   207, 253, 3,   169,
              106, 214, 67,  23,  195, 187,
              59,  158, 45,  3,   11,  99,
              119, 132, 49,  205, 109, 10,
              129, 218, 11,  98,  218, 48],
    bias: [-7876, 13488, -726, 32839, 39481, 48624, 48976, -21419, 9206, -46884, -11693,
           -38724, -58999, -17050, -41852, -40538],
    prev_cell_state: [876, 1034, 955, -909, 761, 1029, 796, -1036]
}

golden_output = [140, 151, 146, 112, 136, 156, 142, 112]
output_dict = {
    concat_temp: [0] * (n_batch * (n_input + n_output)),
    activation_temp: [0] * (n_batch * 4 * n_cell),
    output_state_out: golden_output,
    cell_state_out: [1485, 1177, 1373, -1023, 1019, 1355, 1097, -1235],
    output: golden_output
}
Example((input_dict, output_dict), model=model)
