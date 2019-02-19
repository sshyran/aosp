// clang-format off
// Generated file (from: dequantize_1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace dequantize_1_2 {
// Generated dequantize_1_2 test
#include "generated/examples/dequantize_1_2.example.cpp"
// Generated model constructor
#include "generated/models/dequantize_1_2.model.cpp"
} // namespace dequantize_1_2

TEST_F(GeneratedTests, dequantize_1_2_1d_quant8_asymm) {
    execute(dequantize_1_2::CreateModel,
            dequantize_1_2::is_ignored,
            dequantize_1_2::get_examples_1d_quant8_asymm());
}

TEST_F(GeneratedTests, dequantize_1_2_1d_quant8_asymm_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed,
            dequantize_1_2::is_ignored_relaxed,
            dequantize_1_2::get_examples_1d_quant8_asymm_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_1d_quant8_asymm_float16) {
    execute(dequantize_1_2::CreateModel_float16,
            dequantize_1_2::is_ignored_float16,
            dequantize_1_2::get_examples_1d_quant8_asymm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_1d_quant8_asymm_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape,
            dequantize_1_2::is_ignored_dynamic_output_shape,
            dequantize_1_2::get_examples_1d_quant8_asymm_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_1d_quant8_asymm_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed,
            dequantize_1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_1d_quant8_asymm_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16,
            dequantize_1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_float16());
}

TEST_F(GeneratedTests, dequantize_1_2_2d_quant8_asymm) {
    execute(dequantize_1_2::CreateModel_2,
            dequantize_1_2::is_ignored_2,
            dequantize_1_2::get_examples_2d_quant8_asymm());
}

TEST_F(GeneratedTests, dequantize_1_2_2d_quant8_asymm_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed_2,
            dequantize_1_2::is_ignored_relaxed_2,
            dequantize_1_2::get_examples_2d_quant8_asymm_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_2d_quant8_asymm_float16) {
    execute(dequantize_1_2::CreateModel_float16_2,
            dequantize_1_2::is_ignored_float16_2,
            dequantize_1_2::get_examples_2d_quant8_asymm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_2d_quant8_asymm_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_2,
            dequantize_1_2::is_ignored_dynamic_output_shape_2,
            dequantize_1_2::get_examples_2d_quant8_asymm_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_2d_quant8_asymm_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed_2,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed_2,
            dequantize_1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_2d_quant8_asymm_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16_2,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16_2,
            dequantize_1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_float16());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_quant8_symm) {
    execute(dequantize_1_2::CreateModel_3,
            dequantize_1_2::is_ignored_3,
            dequantize_1_2::get_examples_3d_quant8_symm());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_quant8_symm_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed_3,
            dequantize_1_2::is_ignored_relaxed_3,
            dequantize_1_2::get_examples_3d_quant8_symm_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_quant8_symm_float16) {
    execute(dequantize_1_2::CreateModel_float16_3,
            dequantize_1_2::is_ignored_float16_3,
            dequantize_1_2::get_examples_3d_quant8_symm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_quant8_symm_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_3,
            dequantize_1_2::is_ignored_dynamic_output_shape_3,
            dequantize_1_2::get_examples_3d_quant8_symm_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_quant8_symm_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed_3,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed_3,
            dequantize_1_2::get_examples_3d_quant8_symm_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_quant8_symm_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16_3,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16_3,
            dequantize_1_2::get_examples_3d_quant8_symm_dynamic_output_shape_float16());
}

TEST_F(GeneratedTests, dequantize_1_2_4d_quant8_symm) {
    execute(dequantize_1_2::CreateModel_4,
            dequantize_1_2::is_ignored_4,
            dequantize_1_2::get_examples_4d_quant8_symm());
}

TEST_F(GeneratedTests, dequantize_1_2_4d_quant8_symm_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed_4,
            dequantize_1_2::is_ignored_relaxed_4,
            dequantize_1_2::get_examples_4d_quant8_symm_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_4d_quant8_symm_float16) {
    execute(dequantize_1_2::CreateModel_float16_4,
            dequantize_1_2::is_ignored_float16_4,
            dequantize_1_2::get_examples_4d_quant8_symm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_4d_quant8_symm_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_4,
            dequantize_1_2::is_ignored_dynamic_output_shape_4,
            dequantize_1_2::get_examples_4d_quant8_symm_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_4d_quant8_symm_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed_4,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed_4,
            dequantize_1_2::get_examples_4d_quant8_symm_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_4d_quant8_symm_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16_4,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16_4,
            dequantize_1_2::get_examples_4d_quant8_symm_dynamic_output_shape_float16());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_first_dim) {
    execute(dequantize_1_2::CreateModel_5,
            dequantize_1_2::is_ignored_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_first_dim_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed_5,
            dequantize_1_2::is_ignored_relaxed_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_first_dim_float16) {
    execute(dequantize_1_2::CreateModel_float16_5,
            dequantize_1_2::is_ignored_float16_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_first_dim_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_5,
            dequantize_1_2::is_ignored_dynamic_output_shape_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_first_dim_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed_5,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_first_dim_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16_5,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16_5,
            dequantize_1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_second_dim) {
    execute(dequantize_1_2::CreateModel_6,
            dequantize_1_2::is_ignored_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_second_dim_relaxed) {
    execute(dequantize_1_2::CreateModel_relaxed_6,
            dequantize_1_2::is_ignored_relaxed_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim_relaxed());
}

TEST_F(GeneratedTests, dequantize_1_2_3d_per_channel_second_dim_float16) {
    execute(dequantize_1_2::CreateModel_float16_6,
            dequantize_1_2::is_ignored_float16_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_second_dim_dynamic_output_shape) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_6,
            dequantize_1_2::is_ignored_dynamic_output_shape_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_second_dim_dynamic_output_shape_relaxed) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_relaxed_6,
            dequantize_1_2::is_ignored_dynamic_output_shape_relaxed_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_1_2_3d_per_channel_second_dim_dynamic_output_shape_float16) {
    execute(dequantize_1_2::CreateModel_dynamic_output_shape_float16_6,
            dequantize_1_2::is_ignored_dynamic_output_shape_float16_6,
            dequantize_1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16());
}

