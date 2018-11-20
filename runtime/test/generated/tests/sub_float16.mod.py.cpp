// clang-format off
// Generated file (from: sub_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_float16 {
// Generated sub_float16 test
#include "generated/examples/sub_float16.example.cpp"
// Generated model constructor
#include "generated/models/sub_float16.model.cpp"
} // namespace sub_float16

TEST_F(GeneratedTests, sub_float16) {
    execute(sub_float16::CreateModel,
            sub_float16::is_ignored,
            sub_float16::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, sub_float16_dynamic_output_shape) {
    execute(sub_float16::CreateModel_dynamic_output_shape,
            sub_float16::is_ignored_dynamic_output_shape,
            sub_float16::get_examples_dynamic_output_shape());
}

#endif
