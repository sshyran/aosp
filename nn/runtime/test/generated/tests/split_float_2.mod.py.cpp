// clang-format off
// Generated file (from: split_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_2 {
// Generated split_float_2 test
#include "generated/examples/split_float_2.example.cpp"
// Generated model constructor
#include "generated/models/split_float_2.model.cpp"
} // namespace split_float_2

TEST_F(GeneratedTests, split_float_2) {
    execute(split_float_2::CreateModel,
            split_float_2::is_ignored,
            split_float_2::examples);
}

TEST_F(GeneratedTests, split_float_2_relaxed) {
    execute(split_float_2::CreateModel_relaxed,
            split_float_2::is_ignored_relaxed,
            split_float_2::examples_relaxed);
}

