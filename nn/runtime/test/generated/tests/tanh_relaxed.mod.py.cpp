// clang-format off
// Generated file (from: tanh_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace tanh_relaxed {
// Generated tanh_relaxed test
#include "generated/examples/tanh_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/tanh_relaxed.model.cpp"
} // namespace tanh_relaxed

TEST_F(GeneratedTests, tanh_relaxed) {
    execute(tanh_relaxed::CreateModel,
            tanh_relaxed::is_ignored,
            tanh_relaxed::examples);
}

