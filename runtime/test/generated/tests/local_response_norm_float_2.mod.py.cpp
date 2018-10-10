// clang-format off
// Generated file (from: local_response_norm_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace local_response_norm_float_2 {
// Generated local_response_norm_float_2 test
#include "generated/examples/local_response_norm_float_2.example.cpp"
// Generated model constructor
#include "generated/models/local_response_norm_float_2.model.cpp"
} // namespace local_response_norm_float_2

TEST_F(GeneratedTests, local_response_norm_float_2) {
    execute(local_response_norm_float_2::CreateModel,
            local_response_norm_float_2::is_ignored,
            local_response_norm_float_2::examples);
}

