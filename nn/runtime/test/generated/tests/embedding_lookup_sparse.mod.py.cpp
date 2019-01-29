// clang-format off
// Generated file (from: embedding_lookup_sparse.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace embedding_lookup_sparse {
// Generated embedding_lookup_sparse test
#include "generated/examples/embedding_lookup_sparse.example.cpp"
// Generated model constructor
#include "generated/models/embedding_lookup_sparse.model.cpp"
} // namespace embedding_lookup_sparse

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sum) {
    execute(embedding_lookup_sparse::CreateModel,
            embedding_lookup_sparse::is_ignored,
            embedding_lookup_sparse::get_examples_simple_sum());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sum_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_relaxed,
            embedding_lookup_sparse::is_ignored_relaxed,
            embedding_lookup_sparse::get_examples_simple_sum_relaxed());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sum_float16) {
    execute(embedding_lookup_sparse::CreateModel_float16,
            embedding_lookup_sparse::is_ignored_float16,
            embedding_lookup_sparse::get_examples_simple_sum_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sum_dynamic_output_shape) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape,
            embedding_lookup_sparse::get_examples_simple_sum_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sum_dynamic_output_shape_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_relaxed,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_relaxed,
            embedding_lookup_sparse::get_examples_simple_sum_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sum_dynamic_output_shape_float16) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_float16,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_float16,
            embedding_lookup_sparse::get_examples_simple_sum_dynamic_output_shape_float16());
}

#endif
TEST_F(GeneratedTests, embedding_lookup_sparse_simple_mean) {
    execute(embedding_lookup_sparse::CreateModel_2,
            embedding_lookup_sparse::is_ignored_2,
            embedding_lookup_sparse::get_examples_simple_mean());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_mean_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_relaxed_2,
            embedding_lookup_sparse::is_ignored_relaxed_2,
            embedding_lookup_sparse::get_examples_simple_mean_relaxed());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_mean_float16) {
    execute(embedding_lookup_sparse::CreateModel_float16_2,
            embedding_lookup_sparse::is_ignored_float16_2,
            embedding_lookup_sparse::get_examples_simple_mean_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_mean_dynamic_output_shape) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_2,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_2,
            embedding_lookup_sparse::get_examples_simple_mean_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_mean_dynamic_output_shape_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_relaxed_2,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_relaxed_2,
            embedding_lookup_sparse::get_examples_simple_mean_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_mean_dynamic_output_shape_float16) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_float16_2,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_float16_2,
            embedding_lookup_sparse::get_examples_simple_mean_dynamic_output_shape_float16());
}

#endif
TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sqrtn) {
    execute(embedding_lookup_sparse::CreateModel_3,
            embedding_lookup_sparse::is_ignored_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sqrtn_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_relaxed_3,
            embedding_lookup_sparse::is_ignored_relaxed_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn_relaxed());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_simple_sqrtn_float16) {
    execute(embedding_lookup_sparse::CreateModel_float16_3,
            embedding_lookup_sparse::is_ignored_float16_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sqrtn_dynamic_output_shape) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_3,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sqrtn_dynamic_output_shape_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_relaxed_3,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_relaxed_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_simple_sqrtn_dynamic_output_shape_float16) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_float16_3,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_float16_3,
            embedding_lookup_sparse::get_examples_simple_sqrtn_dynamic_output_shape_float16());
}

#endif
TEST_F(GeneratedTests, embedding_lookup_sparse_3d_indices) {
    execute(embedding_lookup_sparse::CreateModel_4,
            embedding_lookup_sparse::is_ignored_4,
            embedding_lookup_sparse::get_examples_3d_indices());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_3d_indices_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_relaxed_4,
            embedding_lookup_sparse::is_ignored_relaxed_4,
            embedding_lookup_sparse::get_examples_3d_indices_relaxed());
}

TEST_F(GeneratedTests, embedding_lookup_sparse_3d_indices_float16) {
    execute(embedding_lookup_sparse::CreateModel_float16_4,
            embedding_lookup_sparse::is_ignored_float16_4,
            embedding_lookup_sparse::get_examples_3d_indices_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_3d_indices_dynamic_output_shape) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_4,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_4,
            embedding_lookup_sparse::get_examples_3d_indices_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_3d_indices_dynamic_output_shape_relaxed) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_relaxed_4,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_relaxed_4,
            embedding_lookup_sparse::get_examples_3d_indices_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, embedding_lookup_sparse_3d_indices_dynamic_output_shape_float16) {
    execute(embedding_lookup_sparse::CreateModel_dynamic_output_shape_float16_4,
            embedding_lookup_sparse::is_ignored_dynamic_output_shape_float16_4,
            embedding_lookup_sparse::get_examples_3d_indices_dynamic_output_shape_float16());
}

#endif
