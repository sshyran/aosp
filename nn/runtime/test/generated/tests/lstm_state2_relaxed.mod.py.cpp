// clang-format off
// Generated file (from: lstm_state2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_state2_relaxed {
// Generated lstm_state2_relaxed test
#include "generated/examples/lstm_state2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lstm_state2_relaxed.model.cpp"
} // namespace lstm_state2_relaxed

TEST_F(GeneratedTests, lstm_state2_relaxed) {
    execute(lstm_state2_relaxed::CreateModel,
            lstm_state2_relaxed::is_ignored,
            lstm_state2_relaxed::examples);
}

