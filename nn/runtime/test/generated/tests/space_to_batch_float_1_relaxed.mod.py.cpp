// clang-format off
// Generated file (from: space_to_batch_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace space_to_batch_float_1_relaxed {
// Generated space_to_batch_float_1_relaxed test
#include "generated/examples/space_to_batch_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/space_to_batch_float_1_relaxed.model.cpp"
} // namespace space_to_batch_float_1_relaxed

TEST_F(GeneratedTests, space_to_batch_float_1_relaxed) {
    execute(space_to_batch_float_1_relaxed::CreateModel,
            space_to_batch_float_1_relaxed::is_ignored,
            space_to_batch_float_1_relaxed::examples);
}

