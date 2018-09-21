// clang-format off
// Generated file (from: local_response_norm_float_3_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace local_response_norm_float_3_relaxed {
// Generated local_response_norm_float_3_relaxed test
#include "generated/examples/local_response_norm_float_3_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/local_response_norm_float_3_relaxed.model.cpp"
} // namespace local_response_norm_float_3_relaxed

TEST_F(GeneratedTests, local_response_norm_float_3_relaxed) {
    execute(local_response_norm_float_3_relaxed::CreateModel,
            local_response_norm_float_3_relaxed::is_ignored,
            local_response_norm_float_3_relaxed::examples);
}

