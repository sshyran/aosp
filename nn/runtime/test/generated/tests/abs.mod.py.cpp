// clang-format off
// Generated file (from: abs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace abs {
// Generated abs test
#include "generated/examples/abs.example.cpp"
// Generated model constructor
#include "generated/models/abs.model.cpp"
} // namespace abs

TEST_F(GeneratedTests, abs) {
    execute(abs::CreateModel,
            abs::is_ignored,
            abs::get_examples());
}

TEST_F(GeneratedTests, abs_relaxed) {
    execute(abs::CreateModel_relaxed,
            abs::is_ignored_relaxed,
            abs::get_examples_relaxed());
}

TEST_F(GeneratedTests, abs_float16) {
    execute(abs::CreateModel_float16,
            abs::is_ignored_float16,
            abs::get_examples_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, abs_dynamic_output_shape) {
    execute(abs::CreateModel_dynamic_output_shape,
            abs::is_ignored_dynamic_output_shape,
            abs::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, abs_dynamic_output_shape_relaxed) {
    execute(abs::CreateModel_dynamic_output_shape_relaxed,
            abs::is_ignored_dynamic_output_shape_relaxed,
            abs::get_examples_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, abs_dynamic_output_shape_float16) {
    execute(abs::CreateModel_dynamic_output_shape_float16,
            abs::is_ignored_dynamic_output_shape_float16,
            abs::get_examples_dynamic_output_shape_float16());
}

#endif
