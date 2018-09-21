// clang-format off
// Generated file (from: conv_quant8_weights_as_inputs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_quant8_weights_as_inputs {
// Generated conv_quant8_weights_as_inputs test
#include "generated/examples/conv_quant8_weights_as_inputs.example.cpp"
// Generated model constructor
#include "generated/models/conv_quant8_weights_as_inputs.model.cpp"
} // namespace conv_quant8_weights_as_inputs

TEST_F(GeneratedTests, conv_quant8_weights_as_inputs) {
    execute(conv_quant8_weights_as_inputs::CreateModel,
            conv_quant8_weights_as_inputs::is_ignored,
            conv_quant8_weights_as_inputs::examples);
}

