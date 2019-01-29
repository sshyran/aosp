// clang-format off
// Generated file (from: split_int32_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_int32_3 {
// Generated split_int32_3 test
#include "generated/examples/split_int32_3.example.cpp"
// Generated model constructor
#include "generated/models/split_int32_3.model.cpp"
} // namespace split_int32_3

TEST_F(GeneratedTests, split_int32_3) {
    execute(split_int32_3::CreateModel,
            split_int32_3::is_ignored,
            split_int32_3::get_examples());
}

TEST_F(GeneratedTests, split_int32_3_relaxed) {
    execute(split_int32_3::CreateModel_relaxed,
            split_int32_3::is_ignored_relaxed,
            split_int32_3::get_examples_relaxed());
}

#if 0
TEST_F(DynamicOutputShapeTests, split_int32_3_dynamic_output_shape) {
    execute(split_int32_3::CreateModel_dynamic_output_shape,
            split_int32_3::is_ignored_dynamic_output_shape,
            split_int32_3::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, split_int32_3_dynamic_output_shape_relaxed) {
    execute(split_int32_3::CreateModel_dynamic_output_shape_relaxed,
            split_int32_3::is_ignored_dynamic_output_shape_relaxed,
            split_int32_3::get_examples_dynamic_output_shape_relaxed());
}

#endif