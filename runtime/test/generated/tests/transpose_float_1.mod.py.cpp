// clang-format off
// Generated file (from: transpose_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace transpose_float_1 {
// Generated transpose_float_1 test
#include "generated/examples/transpose_float_1.example.cpp"
// Generated model constructor
#include "generated/models/transpose_float_1.model.cpp"
} // namespace transpose_float_1

TEST_F(GeneratedTests, transpose_float_1) {
    execute(transpose_float_1::CreateModel,
            transpose_float_1::is_ignored,
            transpose_float_1::examples);
}

