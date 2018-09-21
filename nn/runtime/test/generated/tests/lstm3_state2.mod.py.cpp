// clang-format off
// Generated file (from: lstm3_state2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_state2 {
// Generated lstm3_state2 test
#include "generated/examples/lstm3_state2.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_state2.model.cpp"
} // namespace lstm3_state2

TEST_F(GeneratedTests, lstm3_state2) {
    execute(lstm3_state2::CreateModel,
            lstm3_state2::is_ignored,
            lstm3_state2::examples);
}

