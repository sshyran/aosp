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
  model = Model().Operation("RANK", input0).To(output0)
  quant8 = DataTypeConverter().Identify({
      input0: ("TENSOR_QUANT8_ASYMM", 0.1, 128),
  })
  quant8_signed = DataTypeConverter().Identify({
      input0: ("TENSOR_QUANT8_ASYMM_SIGNED", 0.1, 0),
  })
  example = Example({
      input0: input0_data,
      output0: output0_data,
  }, model=model, name=name).AddVariations("int32", "float16", quant8, quant8_signed)

test(
    name="1d",
    input0=Input("input0", "TENSOR_FLOAT32", "{3}"),
    output0=Output("output0", "INT32", "{}"),
    input0_data=[5, 7, 10],
    output0_data=[1],
)

test(
    name="1d",
    input0=Input("input0", "TENSOR_FLOAT32", "{2, 3}"),
    output0=Output("output0", "INT32", "{}"),
    input0_data=[1, 2, 3, 4, 5, 6],
    output0_data=[2],
)
