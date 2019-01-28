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
            layer_norm_lstm::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, layer_norm_lstm_dynamic_output_shape) {
    execute(layer_norm_lstm::CreateModel_dynamic_output_shape,
            layer_norm_lstm::is_ignored_dynamic_output_shape,
            layer_norm_lstm::get_examples_dynamic_output_shape());
}

#endif
TEST_F(GeneratedTests, layer_norm_lstm_2) {
    execute(layer_norm_lstm::CreateModel_2,
            layer_norm_lstm::is_ignored_2,
            layer_norm_lstm::get_examples_2());
}

#if 0
TEST_F(DynamicOutputShapeTests, layer_norm_lstm_dynamic_output_shape_2) {
    execute(layer_norm_lstm::CreateModel_dynamic_output_shape_2,
            layer_norm_lstm::is_ignored_dynamic_output_shape_2,
            layer_norm_lstm::get_examples_dynamic_output_shape_2());
}

#endif
TEST_F(GeneratedTests, layer_norm_lstm_3) {
    execute(layer_norm_lstm::CreateModel_3,
            layer_norm_lstm::is_ignored_3,
            layer_norm_lstm::get_examples_3());
}

#if 0
TEST_F(DynamicOutputShapeTests, layer_norm_lstm_dynamic_output_shape_3) {
    execute(layer_norm_lstm::CreateModel_dynamic_output_shape_3,
            layer_norm_lstm::is_ignored_dynamic_output_shape_3,
            layer_norm_lstm::get_examples_dynamic_output_shape_3());
}

#endif
