// clang-format off
// Generated file (from: heatmap_max_keypoint.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace heatmap_max_keypoint {
// Generated heatmap_max_keypoint test
#include "generated/examples/heatmap_max_keypoint.example.cpp"
// Generated model constructor
#include "generated/models/heatmap_max_keypoint.model.cpp"
} // namespace heatmap_max_keypoint

TEST_F(GeneratedTests, heatmap_max_keypoint) {
    execute(heatmap_max_keypoint::CreateModel,
            heatmap_max_keypoint::is_ignored,
            heatmap_max_keypoint::examples);
}

TEST_F(GeneratedTests, heatmap_max_keypoint_relaxed) {
    execute(heatmap_max_keypoint::CreateModel_relaxed,
            heatmap_max_keypoint::is_ignored_relaxed,
            heatmap_max_keypoint::examples_relaxed);
}

TEST_F(GeneratedTests, heatmap_max_keypoint_2) {
    execute(heatmap_max_keypoint::CreateModel_2,
            heatmap_max_keypoint::is_ignored_2,
            heatmap_max_keypoint::examples_2);
}

TEST_F(GeneratedTests, heatmap_max_keypoint_relaxed_2) {
    execute(heatmap_max_keypoint::CreateModel_relaxed_2,
            heatmap_max_keypoint::is_ignored_relaxed_2,
            heatmap_max_keypoint::examples_relaxed_2);
}

