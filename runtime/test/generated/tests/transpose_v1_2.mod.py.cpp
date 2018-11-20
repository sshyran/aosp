// clang-format off
// Generated file (from: transpose_v1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace transpose_v1_2 {
// Generated transpose_v1_2 test
#include "generated/examples/transpose_v1_2.example.cpp"
// Generated model constructor
#include "generated/models/transpose_v1_2.model.cpp"
} // namespace transpose_v1_2

TEST_F(GeneratedTests, transpose_v1_2) {
    execute(transpose_v1_2::CreateModel,
            transpose_v1_2::is_ignored,
            transpose_v1_2::get_examples());
}

TEST_F(GeneratedTests, transpose_v1_2_relaxed) {
    execute(transpose_v1_2::CreateModel_relaxed,
            transpose_v1_2::is_ignored_relaxed,
            transpose_v1_2::get_examples_relaxed());
}

TEST_F(GeneratedTests, transpose_v1_2_quant8) {
    execute(transpose_v1_2::CreateModel_quant8,
            transpose_v1_2::is_ignored_quant8,
            transpose_v1_2::get_examples_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, transpose_v1_2_dynamic_output_shape) {
    execute(transpose_v1_2::CreateModel_dynamic_output_shape,
            transpose_v1_2::is_ignored_dynamic_output_shape,
            transpose_v1_2::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, transpose_v1_2_dynamic_output_shape_relaxed) {
    execute(transpose_v1_2::CreateModel_dynamic_output_shape_relaxed,
            transpose_v1_2::is_ignored_dynamic_output_shape_relaxed,
            transpose_v1_2::get_examples_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, transpose_v1_2_dynamic_output_shape_quant8) {
    execute(transpose_v1_2::CreateModel_dynamic_output_shape_quant8,
            transpose_v1_2::is_ignored_dynamic_output_shape_quant8,
            transpose_v1_2::get_examples_dynamic_output_shape_quant8());
}

#endif
