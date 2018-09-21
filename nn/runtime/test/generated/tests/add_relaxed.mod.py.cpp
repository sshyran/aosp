// clang-format off
// Generated file (from: add_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace add_relaxed {
// Generated add_relaxed test
#include "generated/examples/add_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/add_relaxed.model.cpp"
} // namespace add_relaxed

TEST_F(GeneratedTests, add_relaxed) {
    execute(add_relaxed::CreateModel,
            add_relaxed::is_ignored,
            add_relaxed::examples);
}

