// clang-format off
// Generated file (from: split_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_quant8_2 {
// Generated split_quant8_2 test
#include "generated/examples/split_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/split_quant8_2.model.cpp"
} // namespace split_quant8_2

TEST_F(GeneratedTests, split_quant8_2) {
    execute(split_quant8_2::CreateModel,
            split_quant8_2::is_ignored,
            split_quant8_2::examples);
}

TEST_F(GeneratedTests, split_quant8_2_relaxed) {
    execute(split_quant8_2::CreateModel_relaxed,
            split_quant8_2::is_ignored_relaxed,
            split_quant8_2::examples_relaxed);
}

