// clang-format off
// Generated file (from: logical_and.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logical_and {
// Generated logical_and test
#include "generated/examples/logical_and.example.cpp"
// Generated model constructor
#include "generated/models/logical_and.model.cpp"
} // namespace logical_and

TEST_F(GeneratedTests, logical_and_simple) {
    execute(logical_and::CreateModel,
            logical_and::is_ignored,
            logical_and::get_examples_simple());
}

#if 0
TEST_F(DynamicOutputShapeTests, logical_and_simple_dynamic_output_shape) {
    execute(logical_and::CreateModel_dynamic_output_shape,
            logical_and::is_ignored_dynamic_output_shape,
            logical_and::get_examples_simple_dynamic_output_shape());
}

#endif
TEST_F(GeneratedTests, logical_and_broadcast) {
    execute(logical_and::CreateModel_2,
            logical_and::is_ignored_2,
            logical_and::get_examples_broadcast());
}

#if 0
TEST_F(DynamicOutputShapeTests, logical_and_broadcast_dynamic_output_shape) {
    execute(logical_and::CreateModel_dynamic_output_shape_2,
            logical_and::is_ignored_dynamic_output_shape_2,
            logical_and::get_examples_broadcast_dynamic_output_shape());
}

#endif
