// clang-format off
// Generated file (from: not_equal.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace not_equal {
// Generated not_equal test
#include "generated/examples/not_equal.example.cpp"
// Generated model constructor
#include "generated/models/not_equal.model.cpp"
} // namespace not_equal

TEST_F(GeneratedTests, not_equal_simple) {
    execute(not_equal::CreateModel,
            not_equal::is_ignored,
            not_equal::get_examples_simple());
}

TEST_F(GeneratedTests, not_equal_simple_int32) {
    execute(not_equal::CreateModel_int32,
            not_equal::is_ignored_int32,
            not_equal::get_examples_simple_int32());
}

TEST_F(GeneratedTests, not_equal_simple_float16) {
    execute(not_equal::CreateModel_float16,
            not_equal::is_ignored_float16,
            not_equal::get_examples_simple_float16());
}

TEST_F(GeneratedTests, not_equal_simple_relaxed) {
    execute(not_equal::CreateModel_relaxed,
            not_equal::is_ignored_relaxed,
            not_equal::get_examples_simple_relaxed());
}

TEST_F(GeneratedTests, not_equal_broadcast) {
    execute(not_equal::CreateModel_2,
            not_equal::is_ignored_2,
            not_equal::get_examples_broadcast());
}

TEST_F(GeneratedTests, not_equal_broadcast_int32) {
    execute(not_equal::CreateModel_int32_2,
            not_equal::is_ignored_int32_2,
            not_equal::get_examples_broadcast_int32());
}

TEST_F(GeneratedTests, not_equal_broadcast_float16) {
    execute(not_equal::CreateModel_float16_2,
            not_equal::is_ignored_float16_2,
            not_equal::get_examples_broadcast_float16());
}

TEST_F(GeneratedTests, not_equal_broadcast_relaxed) {
    execute(not_equal::CreateModel_relaxed_2,
            not_equal::is_ignored_relaxed_2,
            not_equal::get_examples_broadcast_relaxed());
}

TEST_F(GeneratedTests, not_equal_quantized_different_scale) {
    execute(not_equal::CreateModel_3,
            not_equal::is_ignored_3,
            not_equal::get_examples_quantized_different_scale());
}

TEST_F(GeneratedTests, not_equal_quantized_different_zero_point) {
    execute(not_equal::CreateModel_4,
            not_equal::is_ignored_4,
            not_equal::get_examples_quantized_different_zero_point());
}

