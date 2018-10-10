// clang-format off
// Generated file (from: pad_v2_1_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pad_v2_1_quant8 {
// Generated pad_v2_1_quant8 test
#include "generated/examples/pad_v2_1_quant8.example.cpp"
// Generated model constructor
#include "generated/models/pad_v2_1_quant8.model.cpp"
} // namespace pad_v2_1_quant8

TEST_F(GeneratedTests, pad_v2_1_quant8) {
    execute(pad_v2_1_quant8::CreateModel,
            pad_v2_1_quant8::is_ignored,
            pad_v2_1_quant8::examples);
}

