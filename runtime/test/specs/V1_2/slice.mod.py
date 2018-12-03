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
import collections

TestCase = collections.namedtuple("TestCase", [
    "inp", "inp_data", "begin", "begin_data", "size", "size_data", "output",
    "output_data"
])

test_cases = [
    TestCase(
        inp=Input("input", "TENSOR_FLOAT32", "{4}"),
        inp_data=[1, 2, 3, 4],
        begin=Input("begin", "TENSOR_INT32", "{1}"),
        begin_data=[1],
        size=Input("size", "TENSOR_INT32", "{1}"),
        size_data=[2],
        output=Output("output", "TENSOR_FLOAT32", "{2}"),
        output_data=[2, 3]),
    TestCase(
        inp=Input("input", "TENSOR_FLOAT32", "{2,3}"),
        inp_data=[1, 2, 3, 4, 5, 6],
        begin=Input("begin", "TENSOR_INT32", "{2}"),
        begin_data=[1, 0],
        size=Input("size", "TENSOR_INT32", "{2}"),
        size_data=[1, 2],
        output=Output("output", "TENSOR_FLOAT32", "{1, 2}"),
        output_data=[4, 5]),
    TestCase(
        inp=Input("input", "TENSOR_FLOAT32", "{2,3,2}"),
        inp_data=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12],
        begin=Input("begin", "TENSOR_INT32", "{3}"),
        begin_data=[0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{3}"),
        size_data=[2, 3, 2],
        output=Output("output", "TENSOR_FLOAT32", "{2, 3, 2}"),
        output_data=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]),
    TestCase(
        inp=Input("input", "TENSOR_FLOAT32", "{4, 1, 1, 1}"),
        inp_data=[1, 2, 3, 4],
        begin=Input("begin", "TENSOR_INT32", "{4}"),
        begin_data=[1, 0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{4}"),
        size_data=[3, 1, 1, 1],
        output=Output("output", "TENSOR_FLOAT32", "{3, 1, 1, 1}"),
        output_data=[2, 3, 4]),
    TestCase(
        inp=Input("input", "TENSOR_INT32", "{3, 2, 3, 1}"),
        inp_data=[1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6],
        begin=Input("begin", "TENSOR_INT32", "{4}"),
        begin_data=[1, 0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{4}"),
        size_data=[1, 1, 3, 1],
        output=Output("output", "TENSOR_INT32", "{1, 1, 3, 1}"),
        output_data=[3, 3, 3]),
    TestCase(
        inp=Input("input", "TENSOR_INT32", "{3, 2, 3, 1}"),
        inp_data=[1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6],
        begin=Input("begin", "TENSOR_INT32", "{4}"),
        begin_data=[1, 0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{4}"),
        size_data=[2, 1, 3, 1],
        output=Output("output", "TENSOR_INT32", "{2, 1, 3, 1}"),
        output_data=[3, 3, 3, 5, 5, 5]),
    TestCase(
        inp=Input("input", "TENSOR_QUANT8_ASYMM", "{3, 2, 3, 1}, 2.0, 128"),
        inp_data=[1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6],
        begin=Input("begin", "TENSOR_INT32", "{4}"),
        begin_data=[1, 0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{4}"),
        size_data=[2, 1, 3, 1],
        output=Output("output", "TENSOR_QUANT8_ASYMM", "{2, 1, 3, 1}, 2.0, 128"),
        output_data=[3, 3, 3, 5, 5, 5]),
    TestCase(
        inp=Input("input", "TENSOR_INT32", "{3, 2, 3, 1}"),
        inp_data=[1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6],
        begin=Input("begin", "TENSOR_INT32", "{4}"),
        begin_data=[1, 0, 0, 0],
        size=Input("size", "TENSOR_INT32", "{4}"),
        size_data=[2, 1, -1, 1],
        output=Output("output", "TENSOR_INT32", "{2, 1, 3, 1}"),
        output_data=[3, 3, 3, 5, 5, 5]),
]

for test_case in test_cases:
  model = Model().Operation("SLICE", test_case.inp, test_case.begin,
                            test_case.size).To(test_case.output)
  Example({
      test_case.inp: test_case.inp_data,
      test_case.begin: test_case.begin_data,
      test_case.size: test_case.size_data,
      test_case.output: test_case.output_data,
  },
          model=model).AddVariations("relaxed", "float16")
