// clang-format off
// Generated file (from: split_int32_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_int32_1 {
// Generated split_int32_1 test
#include "generated/examples/split_int32_1.example.cpp"
// Generated model constructor
#include "generated/models/split_int32_1.model.cpp"
} // namespace split_int32_1

TEST_F(GeneratedTests, split_int32_1) {
    execute(split_int32_1::CreateModel,
            split_int32_1::is_ignored,
            split_int32_1::examples);
}

TEST_F(GeneratedTests, split_int32_1_relaxed) {
    execute(split_int32_1::CreateModel_relaxed,
            split_int32_1::is_ignored_relaxed,
            split_int32_1::examples_relaxed);
}

