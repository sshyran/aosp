// Generated from svdf_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::svdf_state {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::svdf_state

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state {

TEST_F(GeneratedTest, svdf_state) {
    Execute(device, ::generated_tests::svdf_state::get_test_model());
}

TEST_F(DynamicOutputShapeTest, svdf_state) {
    Execute(device, ::generated_tests::svdf_state::get_test_model(), true);
}

TEST_F(ValidationTest, svdf_state) {
    const Model model = createModel(::generated_tests::svdf_state::get_test_model());
    const Request request = createRequest(::generated_tests::svdf_state::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state


namespace generated_tests::svdf_state {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::svdf_state

namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state {

TEST_F(GeneratedTest, svdf_state_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_state::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, svdf_state_all_inputs_as_internal) {
    Execute(device, ::generated_tests::svdf_state::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, svdf_state_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::svdf_state::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::svdf_state::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::svdf_state

