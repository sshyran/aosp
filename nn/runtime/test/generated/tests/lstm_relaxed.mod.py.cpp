// clang-format off
// Generated file (from: lstm_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_relaxed {
// Generated lstm_relaxed test
#include "generated/examples/lstm_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lstm_relaxed.model.cpp"
} // namespace lstm_relaxed

TEST_F(GeneratedTests, lstm_relaxed) {
    execute(lstm_relaxed::CreateModel,
            lstm_relaxed::is_ignored,
            lstm_relaxed::examples);
}

