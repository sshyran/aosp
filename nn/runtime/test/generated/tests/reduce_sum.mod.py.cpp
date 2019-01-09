// clang-format off
// Generated file (from: reduce_sum.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reduce_sum {
// Generated reduce_sum test
#include "generated/examples/reduce_sum.example.cpp"
// Generated model constructor
#include "generated/models/reduce_sum.model.cpp"
} // namespace reduce_sum

TEST_F(GeneratedTests, reduce_sum) {
    execute(reduce_sum::CreateModel,
            reduce_sum::is_ignored,
            reduce_sum::get_examples());
}

TEST_F(GeneratedTests, reduce_sum_relaxed) {
    execute(reduce_sum::CreateModel_relaxed,
            reduce_sum::is_ignored_relaxed,
            reduce_sum::get_examples_relaxed());
}

TEST_F(GeneratedTests, reduce_sum_float16) {
    execute(reduce_sum::CreateModel_float16,
            reduce_sum::is_ignored_float16,
            reduce_sum::get_examples_float16());
}

TEST_F(GeneratedTests, reduce_sum_2) {
    execute(reduce_sum::CreateModel_2,
            reduce_sum::is_ignored_2,
            reduce_sum::get_examples_2());
}

TEST_F(GeneratedTests, reduce_sum_relaxed_2) {
    execute(reduce_sum::CreateModel_relaxed_2,
            reduce_sum::is_ignored_relaxed_2,
            reduce_sum::get_examples_relaxed_2());
}

TEST_F(GeneratedTests, reduce_sum_float16_2) {
    execute(reduce_sum::CreateModel_float16_2,
            reduce_sum::is_ignored_float16_2,
            reduce_sum::get_examples_float16_2());
}

TEST_F(GeneratedTests, reduce_sum_3) {
    execute(reduce_sum::CreateModel_3,
            reduce_sum::is_ignored_3,
            reduce_sum::get_examples_3());
}

TEST_F(GeneratedTests, reduce_sum_relaxed_3) {
    execute(reduce_sum::CreateModel_relaxed_3,
            reduce_sum::is_ignored_relaxed_3,
            reduce_sum::get_examples_relaxed_3());
}

TEST_F(GeneratedTests, reduce_sum_float16_3) {
    execute(reduce_sum::CreateModel_float16_3,
            reduce_sum::is_ignored_float16_3,
            reduce_sum::get_examples_float16_3());
}

TEST_F(GeneratedTests, reduce_sum_4) {
    execute(reduce_sum::CreateModel_4,
            reduce_sum::is_ignored_4,
            reduce_sum::get_examples_4());
}

TEST_F(GeneratedTests, reduce_sum_relaxed_4) {
    execute(reduce_sum::CreateModel_relaxed_4,
            reduce_sum::is_ignored_relaxed_4,
            reduce_sum::get_examples_relaxed_4());
}

TEST_F(GeneratedTests, reduce_sum_float16_4) {
    execute(reduce_sum::CreateModel_float16_4,
            reduce_sum::is_ignored_float16_4,
            reduce_sum::get_examples_float16_4());
}

