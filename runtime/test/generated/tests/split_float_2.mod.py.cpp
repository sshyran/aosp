// clang-format off
// Generated file (from: split_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_2 {
// Generated split_float_2 test
#include "generated/examples/split_float_2.example.cpp"
// Generated model constructor
#include "generated/models/split_float_2.model.cpp"
} // namespace split_float_2

TEST_F(GeneratedTests, split_float_2) {
    execute(split_float_2::CreateModel,
            split_float_2::is_ignored,
            split_float_2::get_examples());
}

TEST_F(GeneratedTests, split_float_2_relaxed) {
    execute(split_float_2::CreateModel_relaxed,
            split_float_2::is_ignored_relaxed,
            split_float_2::get_examples_relaxed());
}

TEST_F(GeneratedTests, split_float_2_float16) {
    execute(split_float_2::CreateModel_float16,
            split_float_2::is_ignored_float16,
            split_float_2::get_examples_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, split_float_2_dynamic_output_shape) {
    execute(split_float_2::CreateModel_dynamic_output_shape,
            split_float_2::is_ignored_dynamic_output_shape,
            split_float_2::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, split_float_2_dynamic_output_shape_relaxed) {
    execute(split_float_2::CreateModel_dynamic_output_shape_relaxed,
            split_float_2::is_ignored_dynamic_output_shape_relaxed,
            split_float_2::get_examples_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, split_float_2_dynamic_output_shape_float16) {
    execute(split_float_2::CreateModel_dynamic_output_shape_float16,
            split_float_2::is_ignored_dynamic_output_shape_float16,
            split_float_2::get_examples_dynamic_output_shape_float16());
}

#endif
