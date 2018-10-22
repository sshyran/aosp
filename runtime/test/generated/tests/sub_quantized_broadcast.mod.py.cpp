// clang-format off
// Generated file (from: sub_quantized_broadcast.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_quantized_broadcast {
// Generated sub_quantized_broadcast test
#include "generated/examples/sub_quantized_broadcast.example.cpp"
// Generated model constructor
#include "generated/models/sub_quantized_broadcast.model.cpp"
} // namespace sub_quantized_broadcast

TEST_F(GeneratedTests, sub_quantized_broadcast) {
    execute(sub_quantized_broadcast::CreateModel,
            sub_quantized_broadcast::is_ignored,
            sub_quantized_broadcast::examples);
}

