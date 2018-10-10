// clang-format off
// Generated file (from: split_quant8_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_quant8_3 {
// Generated split_quant8_3 test
#include "generated/examples/split_quant8_3.example.cpp"
// Generated model constructor
#include "generated/models/split_quant8_3.model.cpp"
} // namespace split_quant8_3

TEST_F(GeneratedTests, split_quant8_3) {
    execute(split_quant8_3::CreateModel,
            split_quant8_3::is_ignored,
            split_quant8_3::examples);
}

