// clang-format off
// Generated file (from: add_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace add_float16 {
// Generated add_float16 test
#include "generated/examples/add_float16.example.cpp"
// Generated model constructor
#include "generated/models/add_float16.model.cpp"
} // namespace add_float16

TEST_F(GeneratedTests, add_float16) {
    execute(add_float16::CreateModel,
            add_float16::is_ignored,
            add_float16::get_examples());
}

TEST_F(DynamicOutputShapeTest, add_float16_dynamic_output_shape) {
    execute(add_float16::CreateModel_dynamic_output_shape,
            add_float16::is_ignored_dynamic_output_shape,
            add_float16::get_examples_dynamic_output_shape());
}

