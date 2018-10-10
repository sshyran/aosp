// clang-format off
// Generated file (from: split_int32_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_int32_2 {
// Generated split_int32_2 test
#include "generated/examples/split_int32_2.example.cpp"
// Generated model constructor
#include "generated/models/split_int32_2.model.cpp"
} // namespace split_int32_2

TEST_F(GeneratedTests, split_int32_2) {
    execute(split_int32_2::CreateModel,
            split_int32_2::is_ignored,
            split_int32_2::examples);
}

TEST_F(GeneratedTests, split_int32_2_relaxed) {
    execute(split_int32_2::CreateModel_relaxed,
            split_int32_2::is_ignored_relaxed,
            split_int32_2::examples_relaxed);
}

