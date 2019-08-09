// Generated from relu1_float_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::relu1_float_1 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::relu1_float_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_float_1 {

TEST_F(GeneratedTest, relu1_float_1) {
    Execute(device, ::generated_tests::relu1_float_1::get_test_model());
}

TEST_F(DynamicOutputShapeTest, relu1_float_1) {
    Execute(device, ::generated_tests::relu1_float_1::get_test_model(), true);
}

TEST_F(ValidationTest, relu1_float_1) {
    const Model model = createModel(::generated_tests::relu1_float_1::get_test_model());
    const Request request = createRequest(::generated_tests::relu1_float_1::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_float_1


namespace generated_tests::relu1_float_1 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::relu1_float_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_float_1 {

TEST_F(GeneratedTest, relu1_float_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::relu1_float_1::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, relu1_float_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::relu1_float_1::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, relu1_float_1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::relu1_float_1::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::relu1_float_1::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_float_1

