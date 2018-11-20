// clang-format off
// Generated file (from: add.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace add {
// Generated add test
#include "generated/examples/add.example.cpp"
// Generated model constructor
#include "generated/models/add.model.cpp"
} // namespace add

TEST_F(GeneratedTests, add) {
    execute(add::CreateModel,
            add::is_ignored,
            add::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, add_dynamic_output_shape) {
    execute(add::CreateModel_dynamic_output_shape,
            add::is_ignored_dynamic_output_shape,
            add::get_examples_dynamic_output_shape());
}

#endif
