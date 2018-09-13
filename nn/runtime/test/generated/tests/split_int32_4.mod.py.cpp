// clang-format off
// Generated file (from: split_int32_4.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_int32_4 {
// Generated split_int32_4 test
#include "generated/examples/split_int32_4.example.cpp"
// Generated model constructor
#include "generated/models/split_int32_4.model.cpp"
} // namespace split_int32_4

TEST_F(GeneratedTests, split_int32_4) {
    execute(split_int32_4::CreateModel,
            split_int32_4::is_ignored,
            split_int32_4::examples);
}

TEST_F(GeneratedTests, split_int32_4_relaxed) {
    execute(split_int32_4::CreateModel_relaxed,
            split_int32_4::is_ignored_relaxed,
            split_int32_4::examples_relaxed);
}

