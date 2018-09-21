// clang-format off
// Generated file (from: rnn_state.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace rnn_state {
// Generated rnn_state test
#include "generated/examples/rnn_state.example.cpp"
// Generated model constructor
#include "generated/models/rnn_state.model.cpp"
} // namespace rnn_state

TEST_F(GeneratedTests, rnn_state) {
    execute(rnn_state::CreateModel,
            rnn_state::is_ignored,
            rnn_state::examples);
}

