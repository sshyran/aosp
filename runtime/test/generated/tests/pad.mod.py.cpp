// clang-format off
// Generated file (from: pad.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pad {
// Generated pad test
#include "generated/examples/pad.example.cpp"
// Generated model constructor
#include "generated/models/pad.model.cpp"
} // namespace pad

TEST_F(GeneratedTests, pad) {
    execute(pad::CreateModel,
            pad::is_ignored,
            pad::examples);
}

