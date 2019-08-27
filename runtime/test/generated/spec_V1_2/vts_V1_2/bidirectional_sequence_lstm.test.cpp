// Generated from bidirectional_sequence_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::bidirectional_sequence_lstm {

const ::test_helper::TestModel& get_test_model_blackbox();

} // namespace generated_tests::bidirectional_sequence_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm {

TEST_F(GeneratedTest, bidirectional_sequence_lstm_blackbox) {
    Execute(device, ::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_lstm_blackbox) {
    Execute(device, ::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_blackbox) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm


namespace generated_tests::bidirectional_sequence_lstm {

const ::test_helper::TestModel& get_test_model_blackbox_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm {

TEST_F(GeneratedTest, bidirectional_sequence_lstm_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_lstm_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_lstm_blackbox_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_lstm

