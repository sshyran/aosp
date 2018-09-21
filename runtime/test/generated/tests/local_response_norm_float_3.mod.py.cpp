// clang-format off
// Generated file (from: local_response_norm_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace local_response_norm_float_3 {
// Generated local_response_norm_float_3 test
#include "generated/examples/local_response_norm_float_3.example.cpp"
// Generated model constructor
#include "generated/models/local_response_norm_float_3.model.cpp"
} // namespace local_response_norm_float_3

TEST_F(GeneratedTests, local_response_norm_float_3) {
    execute(local_response_norm_float_3::CreateModel,
            local_response_norm_float_3::is_ignored,
            local_response_norm_float_3::examples);
}

