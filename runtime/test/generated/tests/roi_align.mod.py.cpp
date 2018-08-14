// clang-format off
// Generated file (from: roi_align.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace roi_align {
// Generated roi_align test
#include "generated/examples/roi_align.example.cpp"
// Generated model constructor
#include "generated/models/roi_align.model.cpp"
} // namespace roi_align

TEST_F(GeneratedTests, roi_align) {
    execute(roi_align::CreateModel,
            roi_align::is_ignored,
            roi_align::examples);
}

TEST_F(GeneratedTests, roi_align_relaxed) {
    execute(roi_align::CreateModel_relaxed,
            roi_align::is_ignored_relaxed,
            roi_align::examples_relaxed);
}

TEST_F(GeneratedTests, roi_align_2) {
    execute(roi_align::CreateModel_2,
            roi_align::is_ignored_2,
            roi_align::examples_2);
}

TEST_F(GeneratedTests, roi_align_relaxed_2) {
    execute(roi_align::CreateModel_relaxed_2,
            roi_align::is_ignored_relaxed_2,
            roi_align::examples_relaxed_2);
}

TEST_F(GeneratedTests, roi_align_3) {
    execute(roi_align::CreateModel_3,
            roi_align::is_ignored_3,
            roi_align::examples_3);
}

TEST_F(GeneratedTests, roi_align_relaxed_3) {
    execute(roi_align::CreateModel_relaxed_3,
            roi_align::is_ignored_relaxed_3,
            roi_align::examples_relaxed_3);
}

