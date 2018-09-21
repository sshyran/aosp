// clang-format off
// Generated file (from: lstm2_state2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm2_state2 {
// Generated lstm2_state2 test
#include "generated/examples/lstm2_state2.example.cpp"
// Generated model constructor
#include "generated/models/lstm2_state2.model.cpp"
} // namespace lstm2_state2

TEST_F(GeneratedTests, lstm2_state2) {
    execute(lstm2_state2::CreateModel,
            lstm2_state2::is_ignored,
            lstm2_state2::examples);
}

