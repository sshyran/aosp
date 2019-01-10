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
def test(name, input_indices, output_shape, input_values, default_value, output,
         input_indices_data, output_shape_data, input_values_data, output_data):
  model = Model().Operation("SPARSE_TO_DENSE", input_indices, output_shape,
                            input_values, default_value).To(output)
  example = Example({
      input_indices: input_indices_data,
      output_shape: output_shape_data,
      input_values: input_values_data,
      output: output_data,
  }, model=model, name=name).AddVariations("relaxed")


test(
    name="one_dim_float32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_FLOAT32", "{3}"),
    default_value=Float32Scalar("default_value", 0),
    output=Output("output", "TENSOR_FLOAT32", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[0, 2, 0, 4, 0, 6, 0],
)

test(
    name="two_dim_float32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3, 3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{3}"),
    input_values=Input("input_values", "TENSOR_FLOAT32", "{3}"),
    default_value=Float32Scalar("default_value", 0),
    output=Output("output", "TENSOR_FLOAT32", "{3, 3, 3}"),
    input_indices_data=[0, 0, 0,
                        1, 2, 1,
                        2, 0, 1],
    output_shape_data=[3, 3, 3],
    input_values_data=[2, 4, 6],
    output_data=[2, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 4, 0,
                 0, 6, 0, 0, 0, 0, 0, 0, 0],
)

test(
    name="default_value_float32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_FLOAT32", "{3}"),
    default_value=Float32Scalar("default_value", -1),
    output=Output("output", "TENSOR_FLOAT32", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[-1, 2, -1, 4, -1, 6, -1],
)

test(
    name="one_dim_int32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_INT32", "{3}"),
    default_value=Int32Scalar("default_value", 0),
    output=Output("output", "TENSOR_INT32", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[0, 2, 0, 4, 0, 6, 0],
)

test(
    name="two_dim_int32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3, 3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{3}"),
    input_values=Input("input_values", "TENSOR_INT32", "{3}"),
    default_value=Int32Scalar("default_value", 0),
    output=Output("output", "TENSOR_INT32", "{3, 3, 3}"),
    input_indices_data=[0, 0, 0,
                        1, 2, 1,
                        2, 0, 1],
    output_shape_data=[3, 3, 3],
    input_values_data=[2, 4, 6],
    output_data=[2, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 4, 0,
                 0, 6, 0, 0, 0, 0, 0, 0, 0],
)

test(
    name="default_value_int32",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_INT32", "{3}"),
    default_value=Int32Scalar("default_value", -1),
    output=Output("output", "TENSOR_INT32", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[-1, 2, -1, 4, -1, 6, -1],
)

test(
    name="one_dim_float16",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_FLOAT16", "{3}"),
    default_value=Float16Scalar("default_value", 0),
    output=Output("output", "TENSOR_FLOAT16", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[0, 2, 0, 4, 0, 6, 0],
)

test(
    name="two_dim_float16",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3, 3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{3}"),
    input_values=Input("input_values", "TENSOR_FLOAT16", "{3}"),
    default_value=Float16Scalar("default_value", 0),
    output=Output("output", "TENSOR_FLOAT16", "{3, 3, 3}"),
    input_indices_data=[0, 0, 0,
                        1, 2, 1,
                        2, 0, 1],
    output_shape_data=[3, 3, 3],
    input_values_data=[2, 4, 6],
    output_data=[2, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 4, 0,
                 0, 6, 0, 0, 0, 0, 0, 0, 0],
)

test(
    name="default_value_float16",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_FLOAT16", "{3}"),
    default_value=Float16Scalar("default_value", -1),
    output=Output("output", "TENSOR_FLOAT16", "{7}"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[2, 4, 6],
    output_data=[-1, 2, -1, 4, -1, 6, -1],
)

test(
    name="one_dim_quant8",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_QUANT8_ASYMM", "{3}, 1.0, 128"),
    default_value=Int32Scalar("default_value", 128),
    output=Output("output", "TENSOR_QUANT8_ASYMM", "{7}, 1.0, 128"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[130, 132, 134],
    output_data=[128, 130, 128, 132, 128, 134, 128],
)

test(
    name="two_dim_quant8",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3, 3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{3}"),
    input_values=Input("input_values", "TENSOR_QUANT8_ASYMM", "{3}, 1.0, 128"),
    default_value=Int32Scalar("default_value", 128),
    output=Output("output", "TENSOR_QUANT8_ASYMM", "{3, 3, 3}, 1.0, 128"),
    input_indices_data=[0, 0, 0,
                        1, 2, 1,
                        2, 0, 1],
    output_shape_data=[3, 3, 3],
    input_values_data=[130, 132, 134],
    output_data=[130, 128, 128, 128, 128, 128, 128, 128, 128,
                 128, 128, 128, 128, 128, 128, 128, 132, 128,
                 128, 134, 128, 128, 128, 128, 128, 128, 128],
)

test(
    name="default_value_quant8",
    input_indices=Input("input_indices", "TENSOR_INT32", "{3}"),
    output_shape=Input("output_shape", "TENSOR_INT32", "{1}"),
    input_values=Input("input_values", "TENSOR_QUANT8_ASYMM", "{3}, 1.0, 128"),
    default_value=Int32Scalar("default_value", 127),
    output=Output("output", "TENSOR_QUANT8_ASYMM", "{7}, 1.0, 128"),
    input_indices_data=[1, 3, 5],
    output_shape_data=[7],
    input_values_data=[130, 132, 134],
    output_data=[127, 130, 127, 132, 127, 134, 127],
)
