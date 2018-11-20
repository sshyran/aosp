// clang-format off
// Generated file (from: depthwise_conv2d_dilation.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depthwise_conv2d_dilation {
// Generated depthwise_conv2d_dilation test
#include "generated/examples/depthwise_conv2d_dilation.example.cpp"
// Generated model constructor
#include "generated/models/depthwise_conv2d_dilation.model.cpp"
} // namespace depthwise_conv2d_dilation

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc,
            depthwise_conv2d_dilation::is_ignored_nhwc,
            depthwise_conv2d_dilation::get_examples_nhwc());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_relaxed,
            depthwise_conv2d_dilation::is_ignored_nhwc_relaxed,
            depthwise_conv2d_dilation::get_examples_nhwc_relaxed());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_float16,
            depthwise_conv2d_dilation::is_ignored_nhwc_float16,
            depthwise_conv2d_dilation::get_examples_nhwc_float16());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_quant8,
            depthwise_conv2d_dilation::is_ignored_nhwc_quant8,
            depthwise_conv2d_dilation::get_examples_nhwc_quant8());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_weight_as_input) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_weight_as_input,
            depthwise_conv2d_dilation::is_ignored_nhwc_weight_as_input,
            depthwise_conv2d_dilation::get_examples_nhwc_weight_as_input());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_weight_as_input_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_weight_as_input_relaxed,
            depthwise_conv2d_dilation::is_ignored_nhwc_weight_as_input_relaxed,
            depthwise_conv2d_dilation::get_examples_nhwc_weight_as_input_relaxed());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_weight_as_input_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_weight_as_input_float16,
            depthwise_conv2d_dilation::is_ignored_nhwc_weight_as_input_float16,
            depthwise_conv2d_dilation::get_examples_nhwc_weight_as_input_float16());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_weight_as_input_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_weight_as_input_quant8,
            depthwise_conv2d_dilation::is_ignored_nhwc_weight_as_input_quant8,
            depthwise_conv2d_dilation::get_examples_nhwc_weight_as_input_quant8());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw,
            depthwise_conv2d_dilation::is_ignored_nchw,
            depthwise_conv2d_dilation::get_examples_nchw());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_relaxed,
            depthwise_conv2d_dilation::is_ignored_nchw_relaxed,
            depthwise_conv2d_dilation::get_examples_nchw_relaxed());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_float16,
            depthwise_conv2d_dilation::is_ignored_nchw_float16,
            depthwise_conv2d_dilation::get_examples_nchw_float16());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_quant8,
            depthwise_conv2d_dilation::is_ignored_nchw_quant8,
            depthwise_conv2d_dilation::get_examples_nchw_quant8());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_weight_as_input) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_weight_as_input,
            depthwise_conv2d_dilation::is_ignored_nchw_weight_as_input,
            depthwise_conv2d_dilation::get_examples_nchw_weight_as_input());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_weight_as_input_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_weight_as_input_relaxed,
            depthwise_conv2d_dilation::is_ignored_nchw_weight_as_input_relaxed,
            depthwise_conv2d_dilation::get_examples_nchw_weight_as_input_relaxed());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_weight_as_input_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_weight_as_input_float16,
            depthwise_conv2d_dilation::is_ignored_nchw_weight_as_input_float16,
            depthwise_conv2d_dilation::get_examples_nchw_weight_as_input_float16());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_weight_as_input_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_weight_as_input_quant8,
            depthwise_conv2d_dilation::is_ignored_nchw_weight_as_input_quant8,
            depthwise_conv2d_dilation::get_examples_nchw_weight_as_input_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_relaxed,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_relaxed,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_float16,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_float16,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_quant8,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_quant8,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_quant8());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_weight_as_input) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_weight_as_input,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_weight_as_input,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_weight_as_input());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_weight_as_input_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_weight_as_input_relaxed,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_weight_as_input_relaxed,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_weight_as_input_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_weight_as_input_float16,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_weight_as_input_float16,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_weight_as_input_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_weight_as_input_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_weight_as_input_quant8,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_weight_as_input_quant8,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_relaxed,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_relaxed,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_float16,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_float16,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_quant8,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_quant8,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_quant8());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_weight_as_input) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_weight_as_input,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_weight_as_input,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_weight_as_input());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_weight_as_input_relaxed) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_weight_as_input_relaxed,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_weight_as_input_relaxed,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_weight_as_input_float16) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_weight_as_input_float16,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_weight_as_input_float16,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_weight_as_input_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_weight_as_input_quant8) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_weight_as_input_quant8,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_weight_as_input_quant8,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_weight_as_input_quant8());
}

#endif
TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_2) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_2,
            depthwise_conv2d_dilation::is_ignored_nhwc_2,
            depthwise_conv2d_dilation::get_examples_nhwc_2());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nhwc_weight_as_input_2) {
    execute(depthwise_conv2d_dilation::CreateModel_nhwc_weight_as_input_2,
            depthwise_conv2d_dilation::is_ignored_nhwc_weight_as_input_2,
            depthwise_conv2d_dilation::get_examples_nhwc_weight_as_input_2());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_2) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_2,
            depthwise_conv2d_dilation::is_ignored_nchw_2,
            depthwise_conv2d_dilation::get_examples_nchw_2());
}

TEST_F(GeneratedTests, depthwise_conv2d_dilation_nchw_weight_as_input_2) {
    execute(depthwise_conv2d_dilation::CreateModel_nchw_weight_as_input_2,
            depthwise_conv2d_dilation::is_ignored_nchw_weight_as_input_2,
            depthwise_conv2d_dilation::get_examples_nchw_weight_as_input_2());
}

#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_2) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_2,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_2,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nhwc_weight_as_input_2) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nhwc_weight_as_input_2,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nhwc_weight_as_input_2,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nhwc_weight_as_input_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_2) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_2,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_2,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, depthwise_conv2d_dilation_dynamic_output_shape_nchw_weight_as_input_2) {
    execute(depthwise_conv2d_dilation::CreateModel_dynamic_output_shape_nchw_weight_as_input_2,
            depthwise_conv2d_dilation::is_ignored_dynamic_output_shape_nchw_weight_as_input_2,
            depthwise_conv2d_dilation::get_examples_dynamic_output_shape_nchw_weight_as_input_2());
}

#endif
