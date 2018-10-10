// clang-format off
// Generated file (from: split_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_1 {
// Generated split_float_1 test
#include "generated/examples/split_float_1.example.cpp"
// Generated model constructor
#include "generated/models/split_float_1.model.cpp"
} // namespace split_float_1

TEST_F(GeneratedTests, split_float_1) {
    execute(split_float_1::CreateModel,
            split_float_1::is_ignored,
            split_float_1::examples);
}

TEST_F(GeneratedTests, split_float_1_relaxed) {
    execute(split_float_1::CreateModel_relaxed,
            split_float_1::is_ignored_relaxed,
            split_float_1::examples_relaxed);
}

