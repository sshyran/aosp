// clang-format off
// Generated file (from: rotated_bbox_transform.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace rotated_bbox_transform {
// Generated rotated_bbox_transform test
#include "generated/examples/rotated_bbox_transform.example.cpp"
// Generated model constructor
#include "generated/models/rotated_bbox_transform.model.cpp"
} // namespace rotated_bbox_transform

TEST_F(GeneratedTests, rotated_bbox_transform) {
    execute(rotated_bbox_transform::CreateModel,
            rotated_bbox_transform::is_ignored,
            rotated_bbox_transform::examples);
}

TEST_F(GeneratedTests, rotated_bbox_transform_relaxed) {
    execute(rotated_bbox_transform::CreateModel_relaxed,
            rotated_bbox_transform::is_ignored_relaxed,
            rotated_bbox_transform::examples_relaxed);
}

TEST_F(GeneratedTests, rotated_bbox_transform_2) {
    execute(rotated_bbox_transform::CreateModel_2,
            rotated_bbox_transform::is_ignored_2,
            rotated_bbox_transform::examples_2);
}

TEST_F(GeneratedTests, rotated_bbox_transform_relaxed_2) {
    execute(rotated_bbox_transform::CreateModel_relaxed_2,
            rotated_bbox_transform::is_ignored_relaxed_2,
            rotated_bbox_transform::examples_relaxed_2);
}

TEST_F(GeneratedTests, rotated_bbox_transform_3) {
    execute(rotated_bbox_transform::CreateModel_3,
            rotated_bbox_transform::is_ignored_3,
            rotated_bbox_transform::examples_3);
}

TEST_F(GeneratedTests, rotated_bbox_transform_relaxed_3) {
    execute(rotated_bbox_transform::CreateModel_relaxed_3,
            rotated_bbox_transform::is_ignored_relaxed_3,
            rotated_bbox_transform::examples_relaxed_3);
}

TEST_F(GeneratedTests, rotated_bbox_transform_single_batch) {
    execute(rotated_bbox_transform::CreateModel_single_batch,
            rotated_bbox_transform::is_ignored_single_batch,
            rotated_bbox_transform::examples_single_batch);
}

TEST_F(GeneratedTests, rotated_bbox_transform_single_batch_relaxed) {
    execute(rotated_bbox_transform::CreateModel_single_batch_relaxed,
            rotated_bbox_transform::is_ignored_single_batch_relaxed,
            rotated_bbox_transform::examples_single_batch_relaxed);
}

