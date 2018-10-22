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

import numpy as np

num_values = 300
values = list(np.linspace(-10, 10, num_values))

for scale, offset in [(1.0, 0),
                      (1.0, 1),
                      (0.01, 120),
                      (10.0, 120)]:
  input0 = Input("input0", "TENSOR_FLOAT32", "{%d}" % num_values)
  output0 = Output("output0", "TENSOR_FLOAT32", "{%d}" % num_values)

  model = Model().Operation("QUANTIZE", input0).To(output0)

  quantizeOutput = DataTypeConverter().Identify({
      output0: ["TENSOR_QUANT8_ASYMM", scale, offset],
  })

  Example({
      input0: values,
      output0: values,
  }).AddVariations(quantizeOutput, includeDefault=False)
