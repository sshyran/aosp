// clang-format off
// Generated file (from: fully_connected_float_weights_as_inputs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float_weights_as_inputs {
// Generated fully_connected_float_weights_as_inputs test
#include "generated/examples/fully_connected_float_weights_as_inputs.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float_weights_as_inputs.model.cpp"
} // namespace fully_connected_float_weights_as_inputs

TEST_F(GeneratedTests, fully_connected_float_weights_as_inputs) {
    execute(fully_connected_float_weights_as_inputs::CreateModel,
            fully_connected_float_weights_as_inputs::is_ignored,
            fully_connected_float_weights_as_inputs::examples);
}

