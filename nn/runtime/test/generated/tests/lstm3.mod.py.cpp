// clang-format off
// Generated file (from: lstm3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3 {
// Generated lstm3 test
#include "generated/examples/lstm3.example.cpp"
// Generated model constructor
#include "generated/models/lstm3.model.cpp"
} // namespace lstm3

TEST_F(GeneratedTests, lstm3) {
    execute(lstm3::CreateModel,
            lstm3::is_ignored,
            lstm3::examples);
}

