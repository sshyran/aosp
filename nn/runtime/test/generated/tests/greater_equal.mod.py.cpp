// clang-format off
// Generated file (from: greater_equal.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace greater_equal {
// Generated greater_equal test
#include "generated/examples/greater_equal.example.cpp"
// Generated model constructor
#include "generated/models/greater_equal.model.cpp"
} // namespace greater_equal

TEST_F(GeneratedTests, greater_equal_simple) {
    execute(greater_equal::CreateModel,
            greater_equal::is_ignored,
            greater_equal::get_examples_simple());
}

TEST_F(GeneratedTests, greater_equal_simple_int32) {
    execute(greater_equal::CreateModel_int32,
            greater_equal::is_ignored_int32,
            greater_equal::get_examples_simple_int32());
}

TEST_F(GeneratedTests, greater_equal_simple_float16) {
    execute(greater_equal::CreateModel_float16,
            greater_equal::is_ignored_float16,
            greater_equal::get_examples_simple_float16());
}

TEST_F(GeneratedTests, greater_equal_simple_relaxed) {
    execute(greater_equal::CreateModel_relaxed,
            greater_equal::is_ignored_relaxed,
            greater_equal::get_examples_simple_relaxed());
}

#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_simple_dynamic_output_shape) {
    execute(greater_equal::CreateModel_dynamic_output_shape,
            greater_equal::is_ignored_dynamic_output_shape,
            greater_equal::get_examples_simple_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_simple_dynamic_output_shape_int32) {
    execute(greater_equal::CreateModel_dynamic_output_shape_int32,
            greater_equal::is_ignored_dynamic_output_shape_int32,
            greater_equal::get_examples_simple_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_simple_dynamic_output_shape_float16) {
    execute(greater_equal::CreateModel_dynamic_output_shape_float16,
            greater_equal::is_ignored_dynamic_output_shape_float16,
            greater_equal::get_examples_simple_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_simple_dynamic_output_shape_relaxed) {
    execute(greater_equal::CreateModel_dynamic_output_shape_relaxed,
            greater_equal::is_ignored_dynamic_output_shape_relaxed,
            greater_equal::get_examples_simple_dynamic_output_shape_relaxed());
}

#endif
TEST_F(GeneratedTests, greater_equal_broadcast) {
    execute(greater_equal::CreateModel_2,
            greater_equal::is_ignored_2,
            greater_equal::get_examples_broadcast());
}

TEST_F(GeneratedTests, greater_equal_broadcast_int32) {
    execute(greater_equal::CreateModel_int32_2,
            greater_equal::is_ignored_int32_2,
            greater_equal::get_examples_broadcast_int32());
}

TEST_F(GeneratedTests, greater_equal_broadcast_float16) {
    execute(greater_equal::CreateModel_float16_2,
            greater_equal::is_ignored_float16_2,
            greater_equal::get_examples_broadcast_float16());
}

TEST_F(GeneratedTests, greater_equal_broadcast_relaxed) {
    execute(greater_equal::CreateModel_relaxed_2,
            greater_equal::is_ignored_relaxed_2,
            greater_equal::get_examples_broadcast_relaxed());
}

#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_broadcast_dynamic_output_shape) {
    execute(greater_equal::CreateModel_dynamic_output_shape_2,
            greater_equal::is_ignored_dynamic_output_shape_2,
            greater_equal::get_examples_broadcast_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_broadcast_dynamic_output_shape_int32) {
    execute(greater_equal::CreateModel_dynamic_output_shape_int32_2,
            greater_equal::is_ignored_dynamic_output_shape_int32_2,
            greater_equal::get_examples_broadcast_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_broadcast_dynamic_output_shape_float16) {
    execute(greater_equal::CreateModel_dynamic_output_shape_float16_2,
            greater_equal::is_ignored_dynamic_output_shape_float16_2,
            greater_equal::get_examples_broadcast_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_broadcast_dynamic_output_shape_relaxed) {
    execute(greater_equal::CreateModel_dynamic_output_shape_relaxed_2,
            greater_equal::is_ignored_dynamic_output_shape_relaxed_2,
            greater_equal::get_examples_broadcast_dynamic_output_shape_relaxed());
}

#endif
TEST_F(GeneratedTests, greater_equal_quantized_different_scale) {
    execute(greater_equal::CreateModel_3,
            greater_equal::is_ignored_3,
            greater_equal::get_examples_quantized_different_scale());
}

#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_quantized_different_scale_dynamic_output_shape) {
    execute(greater_equal::CreateModel_dynamic_output_shape_3,
            greater_equal::is_ignored_dynamic_output_shape_3,
            greater_equal::get_examples_quantized_different_scale_dynamic_output_shape());
}

#endif
TEST_F(GeneratedTests, greater_equal_quantized_different_zero_point) {
    execute(greater_equal::CreateModel_4,
            greater_equal::is_ignored_4,
            greater_equal::get_examples_quantized_different_zero_point());
}

#if 0
TEST_F(DynamicOutputShapeTests, greater_equal_quantized_different_zero_point_dynamic_output_shape) {
    execute(greater_equal::CreateModel_dynamic_output_shape_4,
            greater_equal::is_ignored_dynamic_output_shape_4,
            greater_equal::get_examples_quantized_different_zero_point_dynamic_output_shape());
}

#endif
