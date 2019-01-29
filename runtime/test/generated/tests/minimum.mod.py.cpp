// clang-format off
// Generated file (from: minimum.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace minimum {
// Generated minimum test
#include "generated/examples/minimum.example.cpp"
// Generated model constructor
#include "generated/models/minimum.model.cpp"
} // namespace minimum

TEST_F(GeneratedTests, minimum_simple) {
    execute(minimum::CreateModel,
            minimum::is_ignored,
            minimum::get_examples_simple());
}

TEST_F(GeneratedTests, minimum_simple_relaxed) {
    execute(minimum::CreateModel_relaxed,
            minimum::is_ignored_relaxed,
            minimum::get_examples_simple_relaxed());
}

TEST_F(GeneratedTests, minimum_simple_float16) {
    execute(minimum::CreateModel_float16,
            minimum::is_ignored_float16,
            minimum::get_examples_simple_float16());
}

TEST_F(GeneratedTests, minimum_simple_int32) {
    execute(minimum::CreateModel_int32,
            minimum::is_ignored_int32,
            minimum::get_examples_simple_int32());
}

TEST_F(GeneratedTests, minimum_simple_quant8) {
    execute(minimum::CreateModel_quant8,
            minimum::is_ignored_quant8,
            minimum::get_examples_simple_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, minimum_simple_dynamic_output_shape) {
    execute(minimum::CreateModel_dynamic_output_shape,
            minimum::is_ignored_dynamic_output_shape,
            minimum::get_examples_simple_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_simple_dynamic_output_shape_relaxed) {
    execute(minimum::CreateModel_dynamic_output_shape_relaxed,
            minimum::is_ignored_dynamic_output_shape_relaxed,
            minimum::get_examples_simple_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_simple_dynamic_output_shape_float16) {
    execute(minimum::CreateModel_dynamic_output_shape_float16,
            minimum::is_ignored_dynamic_output_shape_float16,
            minimum::get_examples_simple_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_simple_dynamic_output_shape_int32) {
    execute(minimum::CreateModel_dynamic_output_shape_int32,
            minimum::is_ignored_dynamic_output_shape_int32,
            minimum::get_examples_simple_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_simple_dynamic_output_shape_quant8) {
    execute(minimum::CreateModel_dynamic_output_shape_quant8,
            minimum::is_ignored_dynamic_output_shape_quant8,
            minimum::get_examples_simple_dynamic_output_shape_quant8());
}

#endif
TEST_F(GeneratedTests, minimum_broadcast) {
    execute(minimum::CreateModel_2,
            minimum::is_ignored_2,
            minimum::get_examples_broadcast());
}

TEST_F(GeneratedTests, minimum_broadcast_relaxed) {
    execute(minimum::CreateModel_relaxed_2,
            minimum::is_ignored_relaxed_2,
            minimum::get_examples_broadcast_relaxed());
}

TEST_F(GeneratedTests, minimum_broadcast_float16) {
    execute(minimum::CreateModel_float16_2,
            minimum::is_ignored_float16_2,
            minimum::get_examples_broadcast_float16());
}

TEST_F(GeneratedTests, minimum_broadcast_int32) {
    execute(minimum::CreateModel_int32_2,
            minimum::is_ignored_int32_2,
            minimum::get_examples_broadcast_int32());
}

TEST_F(GeneratedTests, minimum_broadcast_quant8) {
    execute(minimum::CreateModel_quant8_2,
            minimum::is_ignored_quant8_2,
            minimum::get_examples_broadcast_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, minimum_broadcast_dynamic_output_shape) {
    execute(minimum::CreateModel_dynamic_output_shape_2,
            minimum::is_ignored_dynamic_output_shape_2,
            minimum::get_examples_broadcast_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_broadcast_dynamic_output_shape_relaxed) {
    execute(minimum::CreateModel_dynamic_output_shape_relaxed_2,
            minimum::is_ignored_dynamic_output_shape_relaxed_2,
            minimum::get_examples_broadcast_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_broadcast_dynamic_output_shape_float16) {
    execute(minimum::CreateModel_dynamic_output_shape_float16_2,
            minimum::is_ignored_dynamic_output_shape_float16_2,
            minimum::get_examples_broadcast_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_broadcast_dynamic_output_shape_int32) {
    execute(minimum::CreateModel_dynamic_output_shape_int32_2,
            minimum::is_ignored_dynamic_output_shape_int32_2,
            minimum::get_examples_broadcast_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, minimum_broadcast_dynamic_output_shape_quant8) {
    execute(minimum::CreateModel_dynamic_output_shape_quant8_2,
            minimum::is_ignored_dynamic_output_shape_quant8_2,
            minimum::get_examples_broadcast_dynamic_output_shape_quant8());
}

#endif
