// clang-format off
// Generated file (from: batch_to_space_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace batch_to_space_float_1_relaxed {
// Generated batch_to_space_float_1_relaxed test
#include "generated/examples/batch_to_space_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/batch_to_space_float_1_relaxed.model.cpp"
} // namespace batch_to_space_float_1_relaxed

TEST_F(GeneratedTests, batch_to_space_float_1_relaxed) {
    execute(batch_to_space_float_1_relaxed::CreateModel,
            batch_to_space_float_1_relaxed::is_ignored,
            batch_to_space_float_1_relaxed::examples);
}

