// Generated from mul_relu.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::mul_relu {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::mul_relu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_relu {

TEST_F(GeneratedTest, mul_relu) {
    Execute(device, ::generated_tests::mul_relu::get_test_model());
}

TEST_F(DynamicOutputShapeTest, mul_relu) {
    Execute(device, ::generated_tests::mul_relu::get_test_model(), true);
}

TEST_F(ValidationTest, mul_relu) {
    const Model model = createModel(::generated_tests::mul_relu::get_test_model());
    const Request request = createRequest(::generated_tests::mul_relu::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_relu


namespace generated_tests::mul_relu {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::mul_relu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_relu {

TEST_F(GeneratedTest, mul_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::mul_relu::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, mul_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::mul_relu::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, mul_relu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::mul_relu::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::mul_relu::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_relu

