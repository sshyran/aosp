// clang-format off
// Generated file (from: batch_to_space_v1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace batch_to_space_v1_2 {
// Generated batch_to_space_v1_2 test
#include "generated/examples/batch_to_space_v1_2.example.cpp"
// Generated model constructor
#include "generated/models/batch_to_space_v1_2.model.cpp"
} // namespace batch_to_space_v1_2

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc) {
    execute(batch_to_space_v1_2::CreateModel_nhwc,
            batch_to_space_v1_2::is_ignored_nhwc,
            batch_to_space_v1_2::get_examples_nhwc());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_relaxed,
            batch_to_space_v1_2::is_ignored_nhwc_relaxed,
            batch_to_space_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_float16) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_float16,
            batch_to_space_v1_2::is_ignored_nhwc_float16,
            batch_to_space_v1_2::get_examples_nhwc_float16());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_quant8) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_quant8,
            batch_to_space_v1_2::is_ignored_nhwc_quant8,
            batch_to_space_v1_2::get_examples_nhwc_quant8());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw) {
    execute(batch_to_space_v1_2::CreateModel_nchw,
            batch_to_space_v1_2::is_ignored_nchw,
            batch_to_space_v1_2::get_examples_nchw());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_nchw_relaxed,
            batch_to_space_v1_2::is_ignored_nchw_relaxed,
            batch_to_space_v1_2::get_examples_nchw_relaxed());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_float16) {
    execute(batch_to_space_v1_2::CreateModel_nchw_float16,
            batch_to_space_v1_2::is_ignored_nchw_float16,
            batch_to_space_v1_2::get_examples_nchw_float16());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_quant8) {
    execute(batch_to_space_v1_2::CreateModel_nchw_quant8,
            batch_to_space_v1_2::is_ignored_nchw_quant8,
            batch_to_space_v1_2::get_examples_nchw_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_relaxed,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_relaxed,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_float16) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_float16,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_float16,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_quant8) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_quant8,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_quant8,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_quant8());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_relaxed,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_relaxed,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_float16) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_float16,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_float16,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_quant8) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_quant8,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_quant8,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_quant8());
}

#endif
TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_2,
            batch_to_space_v1_2::is_ignored_nhwc_2,
            batch_to_space_v1_2::get_examples_nhwc_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_relaxed_2,
            batch_to_space_v1_2::is_ignored_nhwc_relaxed_2,
            batch_to_space_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_float16_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_float16_2,
            batch_to_space_v1_2::is_ignored_nhwc_float16_2,
            batch_to_space_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_quant8_2,
            batch_to_space_v1_2::is_ignored_nhwc_quant8_2,
            batch_to_space_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_2,
            batch_to_space_v1_2::is_ignored_nchw_2,
            batch_to_space_v1_2::get_examples_nchw_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_relaxed_2,
            batch_to_space_v1_2::is_ignored_nchw_relaxed_2,
            batch_to_space_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_float16_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_float16_2,
            batch_to_space_v1_2::is_ignored_nchw_float16_2,
            batch_to_space_v1_2::get_examples_nchw_float16_2());
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_quant8_2,
            batch_to_space_v1_2::is_ignored_nchw_quant8_2,
            batch_to_space_v1_2::get_examples_nchw_quant8_2());
}

#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_relaxed_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_relaxed_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_float16_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_float16_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_float16_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nhwc_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nhwc_quant8_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nhwc_quant8_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_relaxed_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_relaxed_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_float16_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_float16_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_float16_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_float16_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, batch_to_space_v1_2_dynamic_output_shape_nchw_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_dynamic_output_shape_nchw_quant8_2,
            batch_to_space_v1_2::is_ignored_dynamic_output_shape_nchw_quant8_2,
            batch_to_space_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2());
}

#endif
