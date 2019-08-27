// Generated from tanh.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::tanh {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::tanh

namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh {

TEST_F(GeneratedTest, tanh) {
    Execute(device, ::generated_tests::tanh::get_test_model());
}

TEST_F(ValidationTest, tanh) {
    const Model model = createModel(::generated_tests::tanh::get_test_model());
    const Request request = createRequest(::generated_tests::tanh::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh


namespace generated_tests::tanh {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::tanh

namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh {

TEST_F(GeneratedTest, tanh_all_inputs_as_internal) {
    Execute(device, ::generated_tests::tanh::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, tanh_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::tanh::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::tanh::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::tanh

