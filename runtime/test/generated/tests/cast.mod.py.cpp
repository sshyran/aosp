// clang-format off
// Generated file (from: cast.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace cast {
// Generated cast test
#include "generated/examples/cast.example.cpp"
// Generated model constructor
#include "generated/models/cast.model.cpp"
} // namespace cast

TEST_F(GeneratedTests, cast_float16_to_float16) {
    execute(cast::CreateModel,
            cast::is_ignored,
            cast::examples_float16_to_float16);
}

TEST_F(GeneratedTests, cast_float16_to_float32) {
    execute(cast::CreateModel_2,
            cast::is_ignored_2,
            cast::examples_float16_to_float32);
}

TEST_F(GeneratedTests, cast_float16_to_float32_relaxed) {
    execute(cast::CreateModel_relaxed,
            cast::is_ignored_relaxed,
            cast::examples_float16_to_float32_relaxed);
}

TEST_F(GeneratedTests, cast_float16_to_int32) {
    execute(cast::CreateModel_3,
            cast::is_ignored_3,
            cast::examples_float16_to_int32);
}

TEST_F(GeneratedTests, cast_float16_to_quant8) {
    execute(cast::CreateModel_4,
            cast::is_ignored_4,
            cast::examples_float16_to_quant8);
}

TEST_F(GeneratedTests, cast_float32_to_float16) {
    execute(cast::CreateModel_5,
            cast::is_ignored_5,
            cast::examples_float32_to_float16);
}

TEST_F(GeneratedTests, cast_float32_to_float16_relaxed) {
    execute(cast::CreateModel_relaxed_2,
            cast::is_ignored_relaxed_2,
            cast::examples_float32_to_float16_relaxed);
}

TEST_F(GeneratedTests, cast_float32_to_float32) {
    execute(cast::CreateModel_6,
            cast::is_ignored_6,
            cast::examples_float32_to_float32);
}

TEST_F(GeneratedTests, cast_float32_to_float32_relaxed) {
    execute(cast::CreateModel_relaxed_3,
            cast::is_ignored_relaxed_3,
            cast::examples_float32_to_float32_relaxed);
}

TEST_F(GeneratedTests, cast_float32_to_int32) {
    execute(cast::CreateModel_7,
            cast::is_ignored_7,
            cast::examples_float32_to_int32);
}

TEST_F(GeneratedTests, cast_float32_to_int32_relaxed) {
    execute(cast::CreateModel_relaxed_4,
            cast::is_ignored_relaxed_4,
            cast::examples_float32_to_int32_relaxed);
}

TEST_F(GeneratedTests, cast_float32_to_quant8) {
    execute(cast::CreateModel_8,
            cast::is_ignored_8,
            cast::examples_float32_to_quant8);
}

TEST_F(GeneratedTests, cast_float32_to_quant8_relaxed) {
    execute(cast::CreateModel_relaxed_5,
            cast::is_ignored_relaxed_5,
            cast::examples_float32_to_quant8_relaxed);
}

TEST_F(GeneratedTests, cast_int32_to_float16) {
    execute(cast::CreateModel_9,
            cast::is_ignored_9,
            cast::examples_int32_to_float16);
}

TEST_F(GeneratedTests, cast_int32_to_float32) {
    execute(cast::CreateModel_10,
            cast::is_ignored_10,
            cast::examples_int32_to_float32);
}

TEST_F(GeneratedTests, cast_int32_to_float32_relaxed) {
    execute(cast::CreateModel_relaxed_6,
            cast::is_ignored_relaxed_6,
            cast::examples_int32_to_float32_relaxed);
}

TEST_F(GeneratedTests, cast_int32_to_int32) {
    execute(cast::CreateModel_11,
            cast::is_ignored_11,
            cast::examples_int32_to_int32);
}

TEST_F(GeneratedTests, cast_int32_to_quant8) {
    execute(cast::CreateModel_12,
            cast::is_ignored_12,
            cast::examples_int32_to_quant8);
}

TEST_F(GeneratedTests, cast_quant8_to_float16) {
    execute(cast::CreateModel_13,
            cast::is_ignored_13,
            cast::examples_quant8_to_float16);
}

TEST_F(GeneratedTests, cast_quant8_to_float32) {
    execute(cast::CreateModel_14,
            cast::is_ignored_14,
            cast::examples_quant8_to_float32);
}

TEST_F(GeneratedTests, cast_quant8_to_float32_relaxed) {
    execute(cast::CreateModel_relaxed_7,
            cast::is_ignored_relaxed_7,
            cast::examples_quant8_to_float32_relaxed);
}

TEST_F(GeneratedTests, cast_quant8_to_int32) {
    execute(cast::CreateModel_15,
            cast::is_ignored_15,
            cast::examples_quant8_to_int32);
}

TEST_F(GeneratedTests, cast_quant8_to_quant8) {
    execute(cast::CreateModel_16,
            cast::is_ignored_16,
            cast::examples_quant8_to_quant8);
}

