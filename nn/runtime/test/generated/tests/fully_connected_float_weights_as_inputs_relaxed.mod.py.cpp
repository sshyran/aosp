// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace fully_connected_float_weights_as_inputs_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated fully_connected_float_weights_as_inputs_relaxed test
#include "generated/examples/fully_connected_float_weights_as_inputs_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/fully_connected_float_weights_as_inputs_relaxed.model.cpp"
} // namespace fully_connected_float_weights_as_inputs_relaxed
TEST_F(GeneratedTests, fully_connected_float_weights_as_inputs_relaxed) {
    execute(fully_connected_float_weights_as_inputs_relaxed::CreateModel,
            fully_connected_float_weights_as_inputs_relaxed::is_ignored,
            fully_connected_float_weights_as_inputs_relaxed::examples);
}
