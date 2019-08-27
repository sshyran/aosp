// Generated from fully_connected_float_weights_as_inputs_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed {

TEST_F(GeneratedTest, fully_connected_float_weights_as_inputs_relaxed) {
    Execute(device, ::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model());
}

TEST_F(ValidationTest, fully_connected_float_weights_as_inputs_relaxed) {
    const Model model = createModel(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model());
    const Request request = createRequest(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed


namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed {

TEST_F(GeneratedTest, fully_connected_float_weights_as_inputs_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, fully_connected_float_weights_as_inputs_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_float_weights_as_inputs_relaxed

