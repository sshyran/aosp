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

input0 = Input("input0", "TENSOR_FLOAT16", "{1, 2, 2, 1}")
output0 = Output("output0", "TENSOR_FLOAT16", "{1, 2, 2, 1}")

model = Model().Operation("TANH", input0).To(output0)

Example({
    input0: [-1, 0, 1, 10],
    output0: [-.761594156, 0, .761594156, 0.999999996],
})
