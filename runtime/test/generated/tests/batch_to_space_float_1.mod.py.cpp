// clang-format off
// Generated file (from: batch_to_space_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace batch_to_space_float_1 {
// Generated batch_to_space_float_1 test
#include "generated/examples/batch_to_space_float_1.example.cpp"
// Generated model constructor
#include "generated/models/batch_to_space_float_1.model.cpp"
} // namespace batch_to_space_float_1

TEST_F(GeneratedTests, batch_to_space_float_1) {
    execute(batch_to_space_float_1::CreateModel,
            batch_to_space_float_1::is_ignored,
            batch_to_space_float_1::examples);
}

