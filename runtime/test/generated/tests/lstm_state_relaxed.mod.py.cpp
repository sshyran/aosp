// clang-format off
// Generated file (from: lstm_state_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_state_relaxed {
// Generated lstm_state_relaxed test
#include "generated/examples/lstm_state_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lstm_state_relaxed.model.cpp"
} // namespace lstm_state_relaxed

TEST_F(GeneratedTests, lstm_state_relaxed) {
    execute(lstm_state_relaxed::CreateModel,
            lstm_state_relaxed::is_ignored,
            lstm_state_relaxed::examples);
}

