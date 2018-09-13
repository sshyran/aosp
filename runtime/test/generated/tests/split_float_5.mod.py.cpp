// clang-format off
// Generated file (from: split_float_5.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_5 {
// Generated split_float_5 test
#include "generated/examples/split_float_5.example.cpp"
// Generated model constructor
#include "generated/models/split_float_5.model.cpp"
} // namespace split_float_5

TEST_F(GeneratedTests, split_float_5) {
    execute(split_float_5::CreateModel,
            split_float_5::is_ignored,
            split_float_5::examples);
}

TEST_F(GeneratedTests, split_float_5_relaxed) {
    execute(split_float_5::CreateModel_relaxed,
            split_float_5::is_ignored_relaxed,
            split_float_5::examples_relaxed);
}

