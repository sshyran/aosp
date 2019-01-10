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

import itertools
import math

def generate_input_3d(shape):
  if len(shape) != 3:
    raise ValueError("generate_input_3d got non 3d shape")
  out = []
  for a, b, c in itertools.product(range(shape[0]), range(shape[1]), range(shape[2])):
    out.append(a + b / 10 + c / 100)
  return out


def test(name, lookup_ids, indices, dense_shape, weights, combiner, values, output,
         lookup_ids_data, indices_data,  dense_shape_data, weights_data, values_data, output_data):
  model = Model().Operation("EMBEDDING_LOOKUP_SPARSE", lookup_ids, indices, dense_shape, weights, combiner, values).To(output)
  example = Example({
      lookup_ids: lookup_ids_data,
      indices: indices_data,
      dense_shape: dense_shape_data,
      weights: weights_data,
      values: values_data,
      output: output_data,
  }, model=model, name=name).AddVariations("relaxed", "float16")


test(
    name="simple_sum",
    lookup_ids=Input("lookup_ids", "TENSOR_INT32", "{3}"),
    indices=Input("indices", "TENSOR_INT32", "{3, 2}"),
    dense_shape=Input("dense_shape", "TENSOR_INT32", "{2}"),
    weights=Input("weights", "TENSOR_FLOAT32", "{3}"),
    combiner=Int32Scalar("combiner", 0),
    values=Input("values", "TENSOR_FLOAT32", "{4, 3, 2}"),
    output=Output("output", "TENSOR_FLOAT32", "{3, 3, 2}"),
    lookup_ids_data=[1, 3, 0],
    indices_data=[0, 0, 2, 0, 2, 1],
    dense_shape_data=[3, 2],
    weights_data=[1.0, 2.0, 4.0],
    values_data=generate_input_3d([4, 3, 2]),
    output_data=[1.00, 1.01, 1.10, 1.11, 1.20, 1.21,
                 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
                 6.00, 6.06, 6.60, 6.66, 7.20, 7.26],
)

test(
    name="simple_mean",
    lookup_ids=Input("lookup_ids", "TENSOR_INT32", "{3}"),
    indices=Input("indices", "TENSOR_INT32", "{3, 2}"),
    dense_shape=Input("dense_shape", "TENSOR_INT32", "{2}"),
    weights=Input("weights", "TENSOR_FLOAT32", "{3}"),
    combiner=Int32Scalar("combiner", 1),
    values=Input("values", "TENSOR_FLOAT32", "{4, 3, 2}"),
    output=Output("output", "TENSOR_FLOAT32", "{3, 3, 2}"),
    lookup_ids_data=[1, 3, 0],
    indices_data=[0, 0, 2, 0, 2, 1],
    dense_shape_data=[3, 2],
    weights_data=[1.0, 2.0, 4.0],
    values_data=generate_input_3d([4, 3, 2]),
    output_data=[1.00, 1.01, 1.10, 1.11, 1.20, 1.21,
                 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
                 1.00, 1.01, 1.10, 1.11, 1.20, 1.21],
)

test(
    name="simple_sqrtn",
    lookup_ids=Input("lookup_ids", "TENSOR_INT32", "{3}"),
    indices=Input("indices", "TENSOR_INT32", "{3, 2}"),
    dense_shape=Input("dense_shape", "TENSOR_INT32", "{2}"),
    weights=Input("weights", "TENSOR_FLOAT32", "{3}"),
    combiner=Int32Scalar("combiner", 2),
    values=Input("values", "TENSOR_FLOAT32", "{4, 3, 2}"),
    output=Output("output", "TENSOR_FLOAT32", "{3, 3, 2}"),
    lookup_ids_data=[1, 3, 0],
    indices_data=[0, 0, 2, 0, 2, 1],
    dense_shape_data=[3, 2],
    weights_data=[1.0, 2.0, 4.0],
    values_data=generate_input_3d([4, 3, 2]),
    output_data=[1.00, 1.01, 1.10, 1.11, 1.20, 1.21,
                 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
                 6.00 / math.sqrt(20.0), 6.06 / math.sqrt(20.0),
                 6.60 / math.sqrt(20.0), 6.66 / math.sqrt(20.0),
                 7.20 / math.sqrt(20.0), 7.26 / math.sqrt(20.0)],
)

test(
    name="3d_indices",
    lookup_ids=Input("lookup_ids", "TENSOR_INT32", "{3}"),
    indices=Input("indices", "TENSOR_INT32", "{3, 3}"),
    dense_shape=Input("dense_shape", "TENSOR_INT32", "{3}"),
    weights=Input("weights", "TENSOR_FLOAT32", "{3}"),
    combiner=Int32Scalar("combiner", 0),
    values=Input("values", "TENSOR_FLOAT32", "{4, 3, 2}"),
    output=Output("output", "TENSOR_FLOAT32", "{3, 2, 3, 2}"),
    lookup_ids_data=[1, 3, 0],
    indices_data=[0, 0, 0, 2, 0, 0, 2, 0, 1],
    dense_shape_data=[3, 2, 2],
    weights_data=[1.0, 2.0, 4.0],
    values_data=generate_input_3d([4, 3, 2]),
    output_data=[1.00, 1.01, 1.10, 1.11, 1.20, 1.21, 0.00, 0.00, 0.00,
                 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
                 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 6.00, 6.06, 6.60,
                 6.66, 7.20, 7.26, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00],
)
