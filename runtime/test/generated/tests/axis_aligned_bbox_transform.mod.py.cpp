// clang-format off
// Generated file (from: axis_aligned_bbox_transform.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace axis_aligned_bbox_transform {
// Generated axis_aligned_bbox_transform test
#include "generated/examples/axis_aligned_bbox_transform.example.cpp"
// Generated model constructor
#include "generated/models/axis_aligned_bbox_transform.model.cpp"
} // namespace axis_aligned_bbox_transform

TEST_F(GeneratedTests, axis_aligned_bbox_transform) {
    execute(axis_aligned_bbox_transform::CreateModel,
            axis_aligned_bbox_transform::is_ignored,
            axis_aligned_bbox_transform::examples);
}

TEST_F(GeneratedTests, axis_aligned_bbox_transform_relaxed) {
    execute(axis_aligned_bbox_transform::CreateModel_relaxed,
            axis_aligned_bbox_transform::is_ignored_relaxed,
            axis_aligned_bbox_transform::examples_relaxed);
}

TEST_F(GeneratedTests, axis_aligned_bbox_transform_2) {
    execute(axis_aligned_bbox_transform::CreateModel_2,
            axis_aligned_bbox_transform::is_ignored_2,
            axis_aligned_bbox_transform::examples_2);
}

TEST_F(GeneratedTests, axis_aligned_bbox_transform_relaxed_2) {
    execute(axis_aligned_bbox_transform::CreateModel_relaxed_2,
            axis_aligned_bbox_transform::is_ignored_relaxed_2,
            axis_aligned_bbox_transform::examples_relaxed_2);
}

TEST_F(GeneratedTests, axis_aligned_bbox_transform_single_batch) {
    execute(axis_aligned_bbox_transform::CreateModel_single_batch,
            axis_aligned_bbox_transform::is_ignored_single_batch,
            axis_aligned_bbox_transform::examples_single_batch);
}

TEST_F(GeneratedTests, axis_aligned_bbox_transform_single_batch_relaxed) {
    execute(axis_aligned_bbox_transform::CreateModel_single_batch_relaxed,
            axis_aligned_bbox_transform::is_ignored_single_batch_relaxed,
            axis_aligned_bbox_transform::examples_single_batch_relaxed);
}

