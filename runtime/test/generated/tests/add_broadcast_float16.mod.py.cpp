// clang-format off
// Generated file (from: add_broadcast_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace add_broadcast_float16 {
// Generated add_broadcast_float16 test
#include "generated/examples/add_broadcast_float16.example.cpp"
// Generated model constructor
#include "generated/models/add_broadcast_float16.model.cpp"
} // namespace add_broadcast_float16

TEST_F(GeneratedTests, add_broadcast_float16) {
    execute(add_broadcast_float16::CreateModel,
            add_broadcast_float16::is_ignored,
            add_broadcast_float16::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, add_broadcast_float16_dynamic_output_shape) {
    execute(add_broadcast_float16::CreateModel_dynamic_output_shape,
            add_broadcast_float16::is_ignored_dynamic_output_shape,
            add_broadcast_float16::get_examples_dynamic_output_shape());
}

#endif
