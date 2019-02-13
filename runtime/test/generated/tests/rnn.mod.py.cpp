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
            rnn::get_examples());
}

TEST_F(DynamicOutputShapeTest, rnn_dynamic_output_shape) {
    execute(rnn::CreateModel_dynamic_output_shape,
            rnn::is_ignored_dynamic_output_shape,
            rnn::get_examples_dynamic_output_shape());
}

