#
# Copyright (C) 2019 The Android Open Source Project
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


def test(name, input0, output0, input0_data, output0_data):
  model = Model().Operation("DEQUANTIZE", input0).To(output0)
  example = Example({
      input0: input0_data,
      output0: output0_data,
  },
                    model=model,
                    name=name).AddVariations("relaxed", "float16")


test(
    name="1d_quant8_asymm",
    input0=Input("input0", "TENSOR_QUANT8_ASYMM", "{10}, 0.5, 127"),
    output0=Output("output0", "TENSOR_FLOAT32", "{10}"),
    input0_data=[0, 1, 2, 3, 4, 251, 252, 253, 254, 255],
    output0_data=[-63.5, -63, -62.5, -62, -61.5, 62, 62.5, 63, 63.5, 64],
)

test(
    name="2d_quant8_asymm",
    input0=Input("input0", "TENSOR_QUANT8_ASYMM", "{2, 5}, 0.5, 127"),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 5}"),
    input0_data=[0, 1, 2, 3, 4, 251, 252, 253, 254, 255],
    output0_data=[-63.5, -63, -62.5, -62, -61.5, 62, 62.5, 63, 63.5, 64],
)

test(
    name="3d_quant8_symm",
    input0=Input("input0", "TENSOR_QUANT8_SYMM", "{2, 2, 2}, 0.5, 0"),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 2, 2}"),
    input0_data=[-128, -127, -126, -125, 124, 125, 126, 127],
    output0_data=[-64, -63.5, -63, -62.5, 62, 62.5, 63, 63.5],
)

test(
    name="4d_quant8_symm",
    input0=Input("input0", "TENSOR_QUANT8_SYMM", "{2, 1, 2, 2}, 0.5, 0"),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 1, 2, 2}"),
    input0_data=[-128, -127, -126, -125, 124, 125, 126, 127],
    output0_data=[-64, -63.5, -63, -62.5, 62, 62.5, 63, 63.5],
)

test(
    name="3d_per_channel_first_dim",
    input0=Input(
        "input0", ("TENSOR_QUANT8_SYMM_PER_CHANNEL", [2, 3, 4], 0, 0),
        extraParams=SymmPerChannelQuantParams(channelDim=0, scales=[2., 0.5])),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 3, 4}"),
    input0_data=[
        -128, -127, -126, -125, -124, -123, -122, -121, -120, -119, -118, -117,
        116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127
    ],
    output0_data=[
        -256, -254, -252, -250, -248, -246, -244, -242, -240, -238, -236, -234,
        58., 58.5, 59., 59.5, 60., 60.5, 61., 61.5, 62., 62.5, 63., 63.5
    ],
)

test(
    name="3d_per_channel_second_dim",
    input0=Input(
        "input0", ("TENSOR_QUANT8_SYMM_PER_CHANNEL", [2, 3, 4], 0, 0),
        extraParams=SymmPerChannelQuantParams(
            channelDim=1, scales=[2., 1., 0.5])),
    output0=Output("output0", "TENSOR_FLOAT32", "{2, 3, 4}"),
    input0_data=[
        -128, -127, -126, -125, -124, -123, -122, -121, -120, -119, -118, -117,
        116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127
    ],
    output0_data=[
        -256., -254., -252., -250., -124., -123., -122., -121., -60., -59.5,
        -59., -58.5, 232., 234., 236., 238., 120., 121., 122., 123., 62., 62.5,
        63., 63.5
    ],
)
