// clang-format off
// Generated file (from: reshape_quant8_weights_as_inputs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reshape_quant8_weights_as_inputs {
// Generated reshape_quant8_weights_as_inputs test
#include "generated/examples/reshape_quant8_weights_as_inputs.example.cpp"
// Generated model constructor
#include "generated/models/reshape_quant8_weights_as_inputs.model.cpp"
} // namespace reshape_quant8_weights_as_inputs

TEST_F(GeneratedTests, reshape_quant8_weights_as_inputs) {
    execute(reshape_quant8_weights_as_inputs::CreateModel,
            reshape_quant8_weights_as_inputs::is_ignored,
            reshape_quant8_weights_as_inputs::examples);
}

