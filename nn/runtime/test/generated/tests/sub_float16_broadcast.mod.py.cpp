// clang-format off
// Generated file (from: sub_float16_broadcast.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_float16_broadcast {
// Generated sub_float16_broadcast test
#include "generated/examples/sub_float16_broadcast.example.cpp"
// Generated model constructor
#include "generated/models/sub_float16_broadcast.model.cpp"
} // namespace sub_float16_broadcast

TEST_F(GeneratedTests, sub_float16_broadcast) {
    execute(sub_float16_broadcast::CreateModel,
            sub_float16_broadcast::is_ignored,
            sub_float16_broadcast::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, sub_float16_broadcast_dynamic_output_shape) {
    execute(sub_float16_broadcast::CreateModel_dynamic_output_shape,
            sub_float16_broadcast::is_ignored_dynamic_output_shape,
            sub_float16_broadcast::get_examples_dynamic_output_shape());
}

#endif
