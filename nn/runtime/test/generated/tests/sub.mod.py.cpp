// clang-format off
// Generated file (from: sub.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub {
// Generated sub test
#include "generated/examples/sub.example.cpp"
// Generated model constructor
#include "generated/models/sub.model.cpp"
} // namespace sub

TEST_F(GeneratedTests, sub) {
    execute(sub::CreateModel,
            sub::is_ignored,
            sub::examples);
}

