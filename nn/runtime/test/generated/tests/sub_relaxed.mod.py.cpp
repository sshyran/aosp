// clang-format off
// Generated file (from: sub_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_relaxed {
// Generated sub_relaxed test
#include "generated/examples/sub_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/sub_relaxed.model.cpp"
} // namespace sub_relaxed

TEST_F(GeneratedTests, sub_relaxed) {
    execute(sub_relaxed::CreateModel,
            sub_relaxed::is_ignored,
            sub_relaxed::examples);
}

