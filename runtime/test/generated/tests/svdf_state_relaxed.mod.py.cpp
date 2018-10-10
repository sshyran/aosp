// clang-format off
// Generated file (from: svdf_state_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace svdf_state_relaxed {
// Generated svdf_state_relaxed test
#include "generated/examples/svdf_state_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/svdf_state_relaxed.model.cpp"
} // namespace svdf_state_relaxed

TEST_F(GeneratedTests, svdf_state_relaxed) {
    execute(svdf_state_relaxed::CreateModel,
            svdf_state_relaxed::is_ignored,
            svdf_state_relaxed::examples);
}

