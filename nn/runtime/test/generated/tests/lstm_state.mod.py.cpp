// clang-format off
// Generated file (from: lstm_state.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_state {
// Generated lstm_state test
#include "generated/examples/lstm_state.example.cpp"
// Generated model constructor
#include "generated/models/lstm_state.model.cpp"
} // namespace lstm_state

TEST_F(GeneratedTests, lstm_state) {
    execute(lstm_state::CreateModel,
            lstm_state::is_ignored,
            lstm_state::examples);
}

