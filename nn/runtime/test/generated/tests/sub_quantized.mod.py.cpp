// clang-format off
// Generated file (from: sub_quantized.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_quantized {
// Generated sub_quantized test
#include "generated/examples/sub_quantized.example.cpp"
// Generated model constructor
#include "generated/models/sub_quantized.model.cpp"
} // namespace sub_quantized

TEST_F(GeneratedTests, sub_quantized) {
    execute(sub_quantized::CreateModel,
            sub_quantized::is_ignored,
            sub_quantized::get_examples());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_dynamic_output_shape) {
    execute(sub_quantized::CreateModel_dynamic_output_shape,
            sub_quantized::is_ignored_dynamic_output_shape,
            sub_quantized::get_examples_dynamic_output_shape());
}

