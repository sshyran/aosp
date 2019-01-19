// clang-format off
// Generated file (from: lstm3_state.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_state {
// Generated lstm3_state test
#include "generated/examples/lstm3_state.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_state.model.cpp"
} // namespace lstm3_state

TEST_F(GeneratedTests, lstm3_state) {
    execute(lstm3_state::CreateModel,
            lstm3_state::is_ignored,
            lstm3_state::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, lstm3_state_dynamic_output_shape) {
    execute(lstm3_state::CreateModel_dynamic_output_shape,
            lstm3_state::is_ignored_dynamic_output_shape,
            lstm3_state::get_examples_dynamic_output_shape());
}

#endif
