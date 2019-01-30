// clang-format off
// Generated file (from: depthwise_conv.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depthwise_conv {
// Generated depthwise_conv test
#include "generated/examples/depthwise_conv.example.cpp"
// Generated model constructor
#include "generated/models/depthwise_conv.model.cpp"
} // namespace depthwise_conv

TEST_F(GeneratedTests, depthwise_conv) {
    execute(depthwise_conv::CreateModel,
            depthwise_conv::is_ignored,
            depthwise_conv::get_examples());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv_dynamic_output_shape) {
    execute(depthwise_conv::CreateModel_dynamic_output_shape,
            depthwise_conv::is_ignored_dynamic_output_shape,
            depthwise_conv::get_examples_dynamic_output_shape());
}

TEST_F(GeneratedTests, depthwise_conv_2) {
    execute(depthwise_conv::CreateModel_2,
            depthwise_conv::is_ignored_2,
            depthwise_conv::get_examples_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv_dynamic_output_shape_2) {
    execute(depthwise_conv::CreateModel_dynamic_output_shape_2,
            depthwise_conv::is_ignored_dynamic_output_shape_2,
            depthwise_conv::get_examples_dynamic_output_shape_2());
}

