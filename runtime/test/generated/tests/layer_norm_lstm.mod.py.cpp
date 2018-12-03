// clang-format off
// Generated file (from: layer_norm_lstm.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace layer_norm_lstm {
// Generated layer_norm_lstm test
#include "generated/examples/layer_norm_lstm.example.cpp"
// Generated model constructor
#include "generated/models/layer_norm_lstm.model.cpp"
} // namespace layer_norm_lstm

TEST_F(GeneratedTests, layer_norm_lstm) {
    execute(layer_norm_lstm::CreateModel,
            layer_norm_lstm::is_ignored,
            layer_norm_lstm::examples);
}

