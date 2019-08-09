// Generated from svdf.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::svdf {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::svdf

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf {

TEST_F(GeneratedTest, svdf) {
    Execute(device, ::generated_tests::svdf::get_test_model());
}

TEST_F(ValidationTest, svdf) {
    const Model model = createModel(::generated_tests::svdf::get_test_model());
    const Request request = createRequest(::generated_tests::svdf::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf


namespace generated_tests::svdf {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::svdf

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf {

TEST_F(GeneratedTest, svdf_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, svdf_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::svdf::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::svdf::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf

