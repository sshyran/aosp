// clang-format off
// Generated file (from: conv_float_weights_as_inputs_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float_weights_as_inputs_relaxed {
// Generated conv_float_weights_as_inputs_relaxed test
#include "generated/examples/conv_float_weights_as_inputs_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/conv_float_weights_as_inputs_relaxed.model.cpp"
} // namespace conv_float_weights_as_inputs_relaxed

TEST_F(GeneratedTests, conv_float_weights_as_inputs_relaxed) {
    execute(conv_float_weights_as_inputs_relaxed::CreateModel,
            conv_float_weights_as_inputs_relaxed::is_ignored,
            conv_float_weights_as_inputs_relaxed::examples);
}

