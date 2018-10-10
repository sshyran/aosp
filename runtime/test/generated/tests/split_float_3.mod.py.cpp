// clang-format off
// Generated file (from: split_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_3 {
// Generated split_float_3 test
#include "generated/examples/split_float_3.example.cpp"
// Generated model constructor
#include "generated/models/split_float_3.model.cpp"
} // namespace split_float_3

TEST_F(GeneratedTests, split_float_3) {
    execute(split_float_3::CreateModel,
            split_float_3::is_ignored,
            split_float_3::examples);
}

TEST_F(GeneratedTests, split_float_3_relaxed) {
    execute(split_float_3::CreateModel_relaxed,
            split_float_3::is_ignored_relaxed,
            split_float_3::examples_relaxed);
}

