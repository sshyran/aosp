// Generated from sub.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::sub {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::sub

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub {

TEST_F(GeneratedTest, sub) {
    Execute(device, ::generated_tests::sub::get_test_model());
}

TEST_F(DynamicOutputShapeTest, sub) {
    Execute(device, ::generated_tests::sub::get_test_model(), true);
}

TEST_F(ValidationTest, sub) {
    const Model model = createModel(::generated_tests::sub::get_test_model());
    const Request request = createRequest(::generated_tests::sub::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub


namespace generated_tests::sub {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::sub

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub {

TEST_F(GeneratedTest, sub_all_inputs_as_internal) {
    Execute(device, ::generated_tests::sub::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, sub_all_inputs_as_internal) {
    Execute(device, ::generated_tests::sub::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, sub_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::sub::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::sub::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub

