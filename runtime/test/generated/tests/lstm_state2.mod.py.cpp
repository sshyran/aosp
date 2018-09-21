// clang-format off
// Generated file (from: lstm_state2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_state2 {
// Generated lstm_state2 test
#include "generated/examples/lstm_state2.example.cpp"
// Generated model constructor
#include "generated/models/lstm_state2.model.cpp"
} // namespace lstm_state2

TEST_F(GeneratedTests, lstm_state2) {
    execute(lstm_state2::CreateModel,
            lstm_state2::is_ignored,
            lstm_state2::examples);
}

