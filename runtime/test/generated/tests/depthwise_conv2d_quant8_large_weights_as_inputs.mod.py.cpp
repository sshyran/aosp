// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace depthwise_conv2d_quant8_large_weights_as_inputs {
std::vector<MixedTypedExample> examples = {
// Generated depthwise_conv2d_quant8_large_weights_as_inputs test
#include "generated/examples/depthwise_conv2d_quant8_large_weights_as_inputs.example.cpp"
};
// Generated model constructor
#include "generated/models/depthwise_conv2d_quant8_large_weights_as_inputs.model.cpp"
} // namespace depthwise_conv2d_quant8_large_weights_as_inputs
TEST_F(GeneratedTests, depthwise_conv2d_quant8_large_weights_as_inputs) {
    execute(depthwise_conv2d_quant8_large_weights_as_inputs::CreateModel,
            depthwise_conv2d_quant8_large_weights_as_inputs::is_ignored,
            depthwise_conv2d_quant8_large_weights_as_inputs::examples);
}
