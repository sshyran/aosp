// clang-format off
// Generated file (from: split_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_quant8_1 {
// Generated split_quant8_1 test
#include "generated/examples/split_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/split_quant8_1.model.cpp"
} // namespace split_quant8_1

TEST_F(GeneratedTests, split_quant8_1) {
    execute(split_quant8_1::CreateModel,
            split_quant8_1::is_ignored,
            split_quant8_1::examples);
}

TEST_F(GeneratedTests, split_quant8_1_relaxed) {
    execute(split_quant8_1::CreateModel_relaxed,
            split_quant8_1::is_ignored_relaxed,
            split_quant8_1::examples_relaxed);
}

