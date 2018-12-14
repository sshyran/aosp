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

# TEST 1: No layout param specified
i1 = Input("op1", "TENSOR_QUANT8_ASYMM", "{1, 3, 1, 2}, 0.5f, 128")
f1 = Parameter("op2", "TENSOR_QUANT8_SYMM_PER_CHANNEL", "{3, 1, 1, 2}, 0.0f, 0",
               [1, 2, 1, 2, 1, 2], extraParams = SymmPerChannelQuantParams(channelDim=0, scales=[0.5, 0.75, 1.0]))
b1 = Parameter("op3", "TENSOR_INT32", "{3}", [4, 4, 4])
o1 = Output("op4", "TENSOR_QUANT8_ASYMM", "{1, 3, 1, 3}, 1.f, 128")
Model().Operation("CONV_2D", i1, f1, b1, 0, 0, 0, 0, 1, 1, 0).To(o1)

# Instantiate an example
Example({
    i1: [138, 138, 138, 138, 138, 138],
    o1: [137, 141, 145, 137, 141, 145, 137, 141, 145]
})

# TEST 2: layout param, NHWC/NCHW layouts
layout = BoolScalar("layout", False) # NHWC
i2 = Input("op1", "TENSOR_QUANT8_ASYMM", "{1, 3, 1, 2}, 0.5f, 128")
f2 = Parameter("op2", "TENSOR_QUANT8_SYMM_PER_CHANNEL", "{3, 1, 1, 2}, 0.0f, 0",
               [1, 2, 1, 2, 1, 2], extraParams = SymmPerChannelQuantParams(channelDim=0, scales=[0.5, 0.75, 1.0]))
b2 = Parameter("op3", "TENSOR_INT32", "{3}", [4, 4, 4])
o2 = Output("op4", "TENSOR_QUANT8_ASYMM", "{1, 3, 1, 3}, 1.f, 128")
Model("layouts").Operation("CONV_2D", i2, f2, b2, 0, 0, 0, 0, 1, 1, 0, layout).To(o2)

# Instantiate an example
Example({
    i2: [138, 108, 138, 108, 138, 108],
    o2: [121, 118, 115, 121, 118, 115, 121, 118, 115]
}).AddNchw(i2, o2, layout)
