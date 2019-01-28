// clang-format off
// Generated file (from: logical_or.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logical_or {
// Generated logical_or test
#include "generated/examples/logical_or.example.cpp"
// Generated model constructor
#include "generated/models/logical_or.model.cpp"
} // namespace logical_or

TEST_F(GeneratedTests, logical_or_simple) {
    execute(logical_or::CreateModel,
            logical_or::is_ignored,
            logical_or::get_examples_simple());
}

#if 0
TEST_F(DynamicOutputShapeTests, logical_or_simple_dynamic_output_shape) {
    execute(logical_or::CreateModel_dynamic_output_shape,
            logical_or::is_ignored_dynamic_output_shape,
            logical_or::get_examples_simple_dynamic_output_shape());
}

#endif
TEST_F(GeneratedTests, logical_or_broadcast) {
    execute(logical_or::CreateModel_2,
            logical_or::is_ignored_2,
            logical_or::get_examples_broadcast());
}

#if 0
TEST_F(DynamicOutputShapeTests, logical_or_broadcast_dynamic_output_shape) {
    execute(logical_or::CreateModel_dynamic_output_shape_2,
            logical_or::is_ignored_dynamic_output_shape_2,
            logical_or::get_examples_broadcast_dynamic_output_shape());
}

#endif
