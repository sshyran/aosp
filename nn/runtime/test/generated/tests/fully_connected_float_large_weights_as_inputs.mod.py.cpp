// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace fully_connected_float_large_weights_as_inputs {
std::vector<MixedTypedExample> examples = {
// Generated fully_connected_float_large_weights_as_inputs test
#include "generated/examples/fully_connected_float_large_weights_as_inputs.example.cpp"
};
// Generated model constructor
#include "generated/models/fully_connected_float_large_weights_as_inputs.model.cpp"
} // namespace fully_connected_float_large_weights_as_inputs
TEST_F(GeneratedTests, fully_connected_float_large_weights_as_inputs) {
    execute(fully_connected_float_large_weights_as_inputs::CreateModel,
            fully_connected_float_large_weights_as_inputs::is_ignored,
            fully_connected_float_large_weights_as_inputs::examples);
}
