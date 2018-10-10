// clang-format off
// Generated file (from: local_response_norm_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace local_response_norm_float_1 {
// Generated local_response_norm_float_1 test
#include "generated/examples/local_response_norm_float_1.example.cpp"
// Generated model constructor
#include "generated/models/local_response_norm_float_1.model.cpp"
} // namespace local_response_norm_float_1

TEST_F(GeneratedTests, local_response_norm_float_1) {
    execute(local_response_norm_float_1::CreateModel,
            local_response_norm_float_1::is_ignored,
            local_response_norm_float_1::examples);
}

