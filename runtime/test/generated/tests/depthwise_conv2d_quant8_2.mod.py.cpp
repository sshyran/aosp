// clang-format off
// Generated file (from: depthwise_conv2d_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depthwise_conv2d_quant8_2 {
// Generated depthwise_conv2d_quant8_2 test
#include "generated/examples/depthwise_conv2d_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/depthwise_conv2d_quant8_2.model.cpp"
} // namespace depthwise_conv2d_quant8_2

TEST_F(GeneratedTests, depthwise_conv2d_quant8_2) {
    execute(depthwise_conv2d_quant8_2::CreateModel,
            depthwise_conv2d_quant8_2::is_ignored,
            depthwise_conv2d_quant8_2::examples);
}

