// Generated from svdf_bias_present.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::svdf_bias_present {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::svdf_bias_present

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_bias_present {

TEST_F(GeneratedTest, svdf_bias_present) {
    Execute(device, ::generated_tests::svdf_bias_present::get_test_model());
}

TEST_F(DynamicOutputShapeTest, svdf_bias_present) {
    Execute(device, ::generated_tests::svdf_bias_present::get_test_model(), true);
}

TEST_F(ValidationTest, svdf_bias_present) {
    const Model model = createModel(::generated_tests::svdf_bias_present::get_test_model());
    const Request request = createRequest(::generated_tests::svdf_bias_present::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_bias_present


namespace generated_tests::svdf_bias_present {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::svdf_bias_present

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_bias_present {

TEST_F(GeneratedTest, svdf_bias_present_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_bias_present::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, svdf_bias_present_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_bias_present::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, svdf_bias_present_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::svdf_bias_present::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::svdf_bias_present::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_bias_present

