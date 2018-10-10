// clang-format off
// Generated file (from: rnn.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace rnn {
// Generated rnn test
#include "generated/examples/rnn.example.cpp"
// Generated model constructor
#include "generated/models/rnn.model.cpp"
} // namespace rnn

TEST_F(GeneratedTests, rnn) {
    execute(rnn::CreateModel,
            rnn::is_ignored,
            rnn::examples);
}

