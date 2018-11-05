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
            sub_float16_broadcast::examples);
}

