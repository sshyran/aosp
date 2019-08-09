// Generated from unidirectional_sequence_lstm_f16_batch_major.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::unidirectional_sequence_lstm_f16_batch_major {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::unidirectional_sequence_lstm_f16_batch_major

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_f16_batch_major {

TEST_F(GeneratedTest, unidirectional_sequence_lstm_f16_batch_major) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_f16_batch_major) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_f16_batch_major) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_f16_batch_major


namespace generated_tests::unidirectional_sequence_lstm_f16_batch_major {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_f16_batch_major

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_f16_batch_major {

TEST_F(GeneratedTest, unidirectional_sequence_lstm_f16_batch_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_f16_batch_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_f16_batch_major_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_f16_batch_major

