// clang-format off
// Generated file (from: batch_to_space_v1_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace batch_to_space_v1_2 {
// Generated batch_to_space_v1_2 test
#include "generated/examples/batch_to_space_v1_2.example.cpp"
// Generated model constructor
#include "generated/models/batch_to_space_v1_2.model.cpp"
} // namespace batch_to_space_v1_2

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc) {
    execute(batch_to_space_v1_2::CreateModel_nhwc,
            batch_to_space_v1_2::is_ignored_nhwc,
            batch_to_space_v1_2::examples_nhwc);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_relaxed,
            batch_to_space_v1_2::is_ignored_nhwc_relaxed,
            batch_to_space_v1_2::examples_nhwc_relaxed);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_quant8) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_quant8,
            batch_to_space_v1_2::is_ignored_nhwc_quant8,
            batch_to_space_v1_2::examples_nhwc_quant8);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw) {
    execute(batch_to_space_v1_2::CreateModel_nchw,
            batch_to_space_v1_2::is_ignored_nchw,
            batch_to_space_v1_2::examples_nchw);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_relaxed) {
    execute(batch_to_space_v1_2::CreateModel_nchw_relaxed,
            batch_to_space_v1_2::is_ignored_nchw_relaxed,
            batch_to_space_v1_2::examples_nchw_relaxed);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_quant8) {
    execute(batch_to_space_v1_2::CreateModel_nchw_quant8,
            batch_to_space_v1_2::is_ignored_nchw_quant8,
            batch_to_space_v1_2::examples_nchw_quant8);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_2,
            batch_to_space_v1_2::is_ignored_nhwc_2,
            batch_to_space_v1_2::examples_nhwc_2);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_relaxed_2,
            batch_to_space_v1_2::is_ignored_nhwc_relaxed_2,
            batch_to_space_v1_2::examples_nhwc_relaxed_2);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nhwc_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_nhwc_quant8_2,
            batch_to_space_v1_2::is_ignored_nhwc_quant8_2,
            batch_to_space_v1_2::examples_nhwc_quant8_2);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_2,
            batch_to_space_v1_2::is_ignored_nchw_2,
            batch_to_space_v1_2::examples_nchw_2);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_relaxed_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_relaxed_2,
            batch_to_space_v1_2::is_ignored_nchw_relaxed_2,
            batch_to_space_v1_2::examples_nchw_relaxed_2);
}

TEST_F(GeneratedTests, batch_to_space_v1_2_nchw_quant8_2) {
    execute(batch_to_space_v1_2::CreateModel_nchw_quant8_2,
            batch_to_space_v1_2::is_ignored_nchw_quant8_2,
            batch_to_space_v1_2::examples_nchw_quant8_2);
}

