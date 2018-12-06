// clang-format off
// Generated file (from: rnn_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace rnn_float16 {
// Generated rnn_float16 test
#include "generated/examples/rnn_float16.example.cpp"
// Generated model constructor
#include "generated/models/rnn_float16.model.cpp"
} // namespace rnn_float16

TEST_F(GeneratedTests, rnn_float16) {
    execute(rnn_float16::CreateModel,
            rnn_float16::is_ignored,
            rnn_float16::get_examples());
}

