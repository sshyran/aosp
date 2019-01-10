// clang-format off
// Generated file (from: sparse_to_dense.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sparse_to_dense {
// Generated sparse_to_dense test
#include "generated/examples/sparse_to_dense.example.cpp"
// Generated model constructor
#include "generated/models/sparse_to_dense.model.cpp"
} // namespace sparse_to_dense

TEST_F(GeneratedTests, sparse_to_dense_one_dim_float32) {
    execute(sparse_to_dense::CreateModel,
            sparse_to_dense::is_ignored,
            sparse_to_dense::get_examples_one_dim_float32());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_float32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed,
            sparse_to_dense::is_ignored_relaxed,
            sparse_to_dense::get_examples_one_dim_float32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_float32) {
    execute(sparse_to_dense::CreateModel_2,
            sparse_to_dense::is_ignored_2,
            sparse_to_dense::get_examples_two_dim_float32());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_float32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_2,
            sparse_to_dense::is_ignored_relaxed_2,
            sparse_to_dense::get_examples_two_dim_float32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_float32) {
    execute(sparse_to_dense::CreateModel_3,
            sparse_to_dense::is_ignored_3,
            sparse_to_dense::get_examples_default_value_float32());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_float32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_3,
            sparse_to_dense::is_ignored_relaxed_3,
            sparse_to_dense::get_examples_default_value_float32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_int32) {
    execute(sparse_to_dense::CreateModel_4,
            sparse_to_dense::is_ignored_4,
            sparse_to_dense::get_examples_one_dim_int32());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_int32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_4,
            sparse_to_dense::is_ignored_relaxed_4,
            sparse_to_dense::get_examples_one_dim_int32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_int32) {
    execute(sparse_to_dense::CreateModel_5,
            sparse_to_dense::is_ignored_5,
            sparse_to_dense::get_examples_two_dim_int32());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_int32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_5,
            sparse_to_dense::is_ignored_relaxed_5,
            sparse_to_dense::get_examples_two_dim_int32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_int32) {
    execute(sparse_to_dense::CreateModel_6,
            sparse_to_dense::is_ignored_6,
            sparse_to_dense::get_examples_default_value_int32());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_int32_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_6,
            sparse_to_dense::is_ignored_relaxed_6,
            sparse_to_dense::get_examples_default_value_int32_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_float16) {
    execute(sparse_to_dense::CreateModel_7,
            sparse_to_dense::is_ignored_7,
            sparse_to_dense::get_examples_one_dim_float16());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_float16_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_7,
            sparse_to_dense::is_ignored_relaxed_7,
            sparse_to_dense::get_examples_one_dim_float16_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_float16) {
    execute(sparse_to_dense::CreateModel_8,
            sparse_to_dense::is_ignored_8,
            sparse_to_dense::get_examples_two_dim_float16());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_float16_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_8,
            sparse_to_dense::is_ignored_relaxed_8,
            sparse_to_dense::get_examples_two_dim_float16_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_float16) {
    execute(sparse_to_dense::CreateModel_9,
            sparse_to_dense::is_ignored_9,
            sparse_to_dense::get_examples_default_value_float16());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_float16_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_9,
            sparse_to_dense::is_ignored_relaxed_9,
            sparse_to_dense::get_examples_default_value_float16_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_quant8) {
    execute(sparse_to_dense::CreateModel_10,
            sparse_to_dense::is_ignored_10,
            sparse_to_dense::get_examples_one_dim_quant8());
}

TEST_F(GeneratedTests, sparse_to_dense_one_dim_quant8_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_10,
            sparse_to_dense::is_ignored_relaxed_10,
            sparse_to_dense::get_examples_one_dim_quant8_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_quant8) {
    execute(sparse_to_dense::CreateModel_11,
            sparse_to_dense::is_ignored_11,
            sparse_to_dense::get_examples_two_dim_quant8());
}

TEST_F(GeneratedTests, sparse_to_dense_two_dim_quant8_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_11,
            sparse_to_dense::is_ignored_relaxed_11,
            sparse_to_dense::get_examples_two_dim_quant8_relaxed());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_quant8) {
    execute(sparse_to_dense::CreateModel_12,
            sparse_to_dense::is_ignored_12,
            sparse_to_dense::get_examples_default_value_quant8());
}

TEST_F(GeneratedTests, sparse_to_dense_default_value_quant8_relaxed) {
    execute(sparse_to_dense::CreateModel_relaxed_12,
            sparse_to_dense::is_ignored_relaxed_12,
            sparse_to_dense::get_examples_default_value_quant8_relaxed());
}

