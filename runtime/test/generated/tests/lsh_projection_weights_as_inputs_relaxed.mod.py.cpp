// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace lsh_projection_weights_as_inputs_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated lsh_projection_weights_as_inputs_relaxed test
#include "generated/examples/lsh_projection_weights_as_inputs_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/lsh_projection_weights_as_inputs_relaxed.model.cpp"
} // namespace lsh_projection_weights_as_inputs_relaxed
TEST_F(GeneratedTests, lsh_projection_weights_as_inputs_relaxed) {
    execute(lsh_projection_weights_as_inputs_relaxed::CreateModel,
            lsh_projection_weights_as_inputs_relaxed::is_ignored,
            lsh_projection_weights_as_inputs_relaxed::examples);
}
