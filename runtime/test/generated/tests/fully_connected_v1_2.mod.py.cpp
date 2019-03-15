// clang-format off
// Generated file (from: fully_connected_v1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_v1_2 {
// Generated fully_connected_v1_2 test
#include "generated/examples/fully_connected_v1_2.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_v1_2.model.cpp"
} // namespace fully_connected_v1_2

TEST_F(GeneratedTests, fully_connected_v1_2) {
    execute(fully_connected_v1_2::CreateModel,
            fully_connected_v1_2::is_ignored,
            fully_connected_v1_2::get_examples());
}

TEST_F(GeneratedTests, fully_connected_v1_2_relaxed) {
    execute(fully_connected_v1_2::CreateModel_relaxed,
            fully_connected_v1_2::is_ignored_relaxed,
            fully_connected_v1_2::get_examples_relaxed());
}

TEST_F(GeneratedTests, fully_connected_v1_2_float16) {
    execute(fully_connected_v1_2::CreateModel_float16,
            fully_connected_v1_2::is_ignored_float16,
            fully_connected_v1_2::get_examples_float16());
}

TEST_F(GeneratedTests, fully_connected_v1_2_quant8_mult_gt_1) {
    execute(fully_connected_v1_2::CreateModel_quant8_mult_gt_1,
            fully_connected_v1_2::is_ignored_quant8_mult_gt_1,
            fully_connected_v1_2::get_examples_quant8_mult_gt_1());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape) {
    execute(fully_connected_v1_2::CreateModel_dynamic_output_shape,
            fully_connected_v1_2::is_ignored_dynamic_output_shape,
            fully_connected_v1_2::get_examples_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_relaxed) {
    execute(fully_connected_v1_2::CreateModel_dynamic_output_shape_relaxed,
            fully_connected_v1_2::is_ignored_dynamic_output_shape_relaxed,
            fully_connected_v1_2::get_examples_dynamic_output_shape_relaxed());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_float16) {
    execute(fully_connected_v1_2::CreateModel_dynamic_output_shape_float16,
            fully_connected_v1_2::is_ignored_dynamic_output_shape_float16,
            fully_connected_v1_2::get_examples_dynamic_output_shape_float16());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_quant8_mult_gt_1) {
    execute(fully_connected_v1_2::CreateModel_dynamic_output_shape_quant8_mult_gt_1,
            fully_connected_v1_2::is_ignored_dynamic_output_shape_quant8_mult_gt_1,
            fully_connected_v1_2::get_examples_dynamic_output_shape_quant8_mult_gt_1());
}

