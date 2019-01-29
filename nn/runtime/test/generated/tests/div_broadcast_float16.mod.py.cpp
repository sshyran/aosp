// clang-format off
// Generated file (from: div_broadcast_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace div_broadcast_float16 {
// Generated div_broadcast_float16 test
#include "generated/examples/div_broadcast_float16.example.cpp"
// Generated model constructor
#include "generated/models/div_broadcast_float16.model.cpp"
} // namespace div_broadcast_float16

TEST_F(GeneratedTests, div_broadcast_float16) {
    execute(div_broadcast_float16::CreateModel,
            div_broadcast_float16::is_ignored,
            div_broadcast_float16::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, div_broadcast_float16_dynamic_output_shape) {
    execute(div_broadcast_float16::CreateModel_dynamic_output_shape,
            div_broadcast_float16::is_ignored_dynamic_output_shape,
            div_broadcast_float16::get_examples_dynamic_output_shape());
}

#endif
