// clang-format off
// Generated file (from: depthwise_conv2d_float_weights_as_inputs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depthwise_conv2d_float_weights_as_inputs {
// Generated depthwise_conv2d_float_weights_as_inputs test
#include "generated/examples/depthwise_conv2d_float_weights_as_inputs.example.cpp"
// Generated model constructor
#include "generated/models/depthwise_conv2d_float_weights_as_inputs.model.cpp"
} // namespace depthwise_conv2d_float_weights_as_inputs

TEST_F(GeneratedTests, depthwise_conv2d_float_weights_as_inputs) {
    execute(depthwise_conv2d_float_weights_as_inputs::CreateModel,
            depthwise_conv2d_float_weights_as_inputs::is_ignored,
            depthwise_conv2d_float_weights_as_inputs::examples);
}

