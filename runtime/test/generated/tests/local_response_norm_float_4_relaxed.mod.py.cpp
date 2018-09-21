// clang-format off
// Generated file (from: local_response_norm_float_4_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace local_response_norm_float_4_relaxed {
// Generated local_response_norm_float_4_relaxed test
#include "generated/examples/local_response_norm_float_4_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/local_response_norm_float_4_relaxed.model.cpp"
} // namespace local_response_norm_float_4_relaxed

TEST_F(GeneratedTests, local_response_norm_float_4_relaxed) {
    execute(local_response_norm_float_4_relaxed::CreateModel,
            local_response_norm_float_4_relaxed::is_ignored,
            local_response_norm_float_4_relaxed::examples);
}

