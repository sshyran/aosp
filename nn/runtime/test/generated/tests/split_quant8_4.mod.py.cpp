// clang-format off
// Generated file (from: split_quant8_4.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_quant8_4 {
// Generated split_quant8_4 test
#include "generated/examples/split_quant8_4.example.cpp"
// Generated model constructor
#include "generated/models/split_quant8_4.model.cpp"
} // namespace split_quant8_4

TEST_F(GeneratedTests, split_quant8_4) {
    execute(split_quant8_4::CreateModel,
            split_quant8_4::is_ignored,
            split_quant8_4::examples);
}

