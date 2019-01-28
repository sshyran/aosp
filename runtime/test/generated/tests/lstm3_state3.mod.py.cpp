// clang-format off
// Generated file (from: lstm3_state3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_state3 {
// Generated lstm3_state3 test
#include "generated/examples/lstm3_state3.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_state3.model.cpp"
} // namespace lstm3_state3

TEST_F(GeneratedTests, lstm3_state3) {
    execute(lstm3_state3::CreateModel,
            lstm3_state3::is_ignored,
            lstm3_state3::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, lstm3_state3_dynamic_output_shape) {
    execute(lstm3_state3::CreateModel_dynamic_output_shape,
            lstm3_state3::is_ignored_dynamic_output_shape,
            lstm3_state3::get_examples_dynamic_output_shape());
}

#endif
