// clang-format off
// Generated file (from: resize_bilinear_v1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace resize_bilinear_v1_2 {
// Generated resize_bilinear_v1_2 test
#include "generated/examples/resize_bilinear_v1_2.example.cpp"
// Generated model constructor
#include "generated/models/resize_bilinear_v1_2.model.cpp"
} // namespace resize_bilinear_v1_2

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc,
            resize_bilinear_v1_2::is_ignored_nhwc,
            resize_bilinear_v1_2::get_examples_nhwc());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_relaxed) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_relaxed,
            resize_bilinear_v1_2::is_ignored_nhwc_relaxed,
            resize_bilinear_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_float16) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_float16,
            resize_bilinear_v1_2::is_ignored_nhwc_float16,
            resize_bilinear_v1_2::get_examples_nhwc_float16());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_quant8,
            resize_bilinear_v1_2::is_ignored_nhwc_quant8,
            resize_bilinear_v1_2::get_examples_nhwc_quant8());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw) {
    execute(resize_bilinear_v1_2::CreateModel_nchw,
            resize_bilinear_v1_2::is_ignored_nchw,
            resize_bilinear_v1_2::get_examples_nchw());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_relaxed) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_relaxed,
            resize_bilinear_v1_2::is_ignored_nchw_relaxed,
            resize_bilinear_v1_2::get_examples_nchw_relaxed());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_float16) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_float16,
            resize_bilinear_v1_2::is_ignored_nchw_float16,
            resize_bilinear_v1_2::get_examples_nchw_float16());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_quant8,
            resize_bilinear_v1_2::is_ignored_nchw_quant8,
            resize_bilinear_v1_2::get_examples_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_relaxed) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_relaxed,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_relaxed,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_float16) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_float16,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_float16,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_quant8,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_quant8,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_relaxed) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_relaxed,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_relaxed,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_float16) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_float16,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_float16,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_quant8,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_quant8,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_quant8());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_2) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_2,
            resize_bilinear_v1_2::is_ignored_nhwc_2,
            resize_bilinear_v1_2::get_examples_nhwc_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_relaxed_2) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_relaxed_2,
            resize_bilinear_v1_2::is_ignored_nhwc_relaxed_2,
            resize_bilinear_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_float16_2) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_float16_2,
            resize_bilinear_v1_2::is_ignored_nhwc_float16_2,
            resize_bilinear_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nhwc_quant8_2) {
    execute(resize_bilinear_v1_2::CreateModel_nhwc_quant8_2,
            resize_bilinear_v1_2::is_ignored_nhwc_quant8_2,
            resize_bilinear_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_2) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_2,
            resize_bilinear_v1_2::is_ignored_nchw_2,
            resize_bilinear_v1_2::get_examples_nchw_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_relaxed_2) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_relaxed_2,
            resize_bilinear_v1_2::is_ignored_nchw_relaxed_2,
            resize_bilinear_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_float16_2) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_float16_2,
            resize_bilinear_v1_2::is_ignored_nchw_float16_2,
            resize_bilinear_v1_2::get_examples_nchw_float16_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_nchw_quant8_2) {
    execute(resize_bilinear_v1_2::CreateModel_nchw_quant8_2,
            resize_bilinear_v1_2::is_ignored_nchw_quant8_2,
            resize_bilinear_v1_2::get_examples_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_relaxed_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_relaxed_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_float16_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_float16_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_float16_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nhwc_quant8_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nhwc_quant8_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nhwc_quant8_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_relaxed_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_relaxed_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_relaxed_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_float16_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_float16_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_float16_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_nchw_quant8_2) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_nchw_quant8_2,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_nchw_quant8_2,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_float16) {
    execute(resize_bilinear_v1_2::CreateModel_float16,
            resize_bilinear_v1_2::is_ignored_float16,
            resize_bilinear_v1_2::get_examples_float16());
}

TEST_F(GeneratedTests, resize_bilinear_v1_2_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_quant8,
            resize_bilinear_v1_2::is_ignored_quant8,
            resize_bilinear_v1_2::get_examples_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_float16) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_float16,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_float16,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_dynamic_output_shape_quant8) {
    execute(resize_bilinear_v1_2::CreateModel_dynamic_output_shape_quant8,
            resize_bilinear_v1_2::is_ignored_dynamic_output_shape_quant8,
            resize_bilinear_v1_2::get_examples_dynamic_output_shape_quant8());
}

