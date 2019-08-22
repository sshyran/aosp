// Generated from svdf_state_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::svdf_state_float16 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::svdf_state_float16

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state_float16 {

TEST_F(GeneratedTest, svdf_state_float16) {
    Execute(device, ::generated_tests::svdf_state_float16::get_test_model());
}

TEST_F(DynamicOutputShapeTest, svdf_state_float16) {
    Execute(device, ::generated_tests::svdf_state_float16::get_test_model(), true);
}

TEST_F(ValidationTest, svdf_state_float16) {
    const Model model = createModel(::generated_tests::svdf_state_float16::get_test_model());
    const Request request = createRequest(::generated_tests::svdf_state_float16::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state_float16


namespace generated_tests::svdf_state_float16 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::svdf_state_float16

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state_float16 {

TEST_F(GeneratedTest, svdf_state_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_state_float16::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, svdf_state_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_state_float16::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, svdf_state_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::svdf_state_float16::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::svdf_state_float16::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state_float16

