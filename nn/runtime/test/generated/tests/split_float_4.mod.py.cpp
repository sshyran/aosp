// clang-format off
// Generated file (from: split_float_4.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace split_float_4 {
// Generated split_float_4 test
#include "generated/examples/split_float_4.example.cpp"
// Generated model constructor
#include "generated/models/split_float_4.model.cpp"
} // namespace split_float_4

TEST_F(GeneratedTests, split_float_4) {
    execute(split_float_4::CreateModel,
            split_float_4::is_ignored,
            split_float_4::get_examples());
}

TEST_F(GeneratedTests, split_float_4_relaxed) {
    execute(split_float_4::CreateModel_relaxed,
            split_float_4::is_ignored_relaxed,
            split_float_4::get_examples_relaxed());
}

TEST_F(GeneratedTests, split_float_4_float16) {
    execute(split_float_4::CreateModel_float16,
            split_float_4::is_ignored_float16,
            split_float_4::get_examples_float16());
}
