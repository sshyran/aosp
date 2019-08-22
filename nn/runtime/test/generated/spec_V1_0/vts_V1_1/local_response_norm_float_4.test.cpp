// Generated from local_response_norm_float_4.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::local_response_norm_float_4 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::local_response_norm_float_4

namespace android::hardware::neuralnetworks::V1_1::generated_tests::local_response_norm_float_4 {

TEST_F(GeneratedTest, local_response_norm_float_4) {
    Execute(device, ::generated_tests::local_response_norm_float_4::get_test_model());
}

TEST_F(ValidationTest, local_response_norm_float_4) {
    const Model model = createModel(::generated_tests::local_response_norm_float_4::get_test_model());
    const Request request = createRequest(::generated_tests::local_response_norm_float_4::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::local_response_norm_float_4


namespace generated_tests::local_response_norm_float_4 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::local_response_norm_float_4

namespace android::hardware::neuralnetworks::V1_1::generated_tests::local_response_norm_float_4 {

TEST_F(GeneratedTest, local_response_norm_float_4_all_inputs_as_internal) {
    Execute(device, ::generated_tests::local_response_norm_float_4::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, local_response_norm_float_4_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::local_response_norm_float_4::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::local_response_norm_float_4::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::local_response_norm_float_4

