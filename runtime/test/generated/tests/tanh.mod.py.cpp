// clang-format off
// Generated file (from: tanh.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace tanh {
// Generated tanh test
#include "generated/examples/tanh.example.cpp"
// Generated model constructor
#include "generated/models/tanh.model.cpp"
} // namespace tanh

TEST_F(GeneratedTests, tanh) {
    execute(tanh::CreateModel,
            tanh::is_ignored,
            tanh::examples);
}

