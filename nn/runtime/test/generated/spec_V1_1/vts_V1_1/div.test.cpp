// Generated from div.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::div {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::div

namespace android::hardware::neuralnetworks::V1_1::generated_tests::div {

TEST_F(GeneratedTest, div) {
    Execute(device, ::generated_tests::div::get_test_model());
}

TEST_F(ValidationTest, div) {
    const Model model = createModel(::generated_tests::div::get_test_model());
    const Request request = createRequest(::generated_tests::div::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::div


namespace generated_tests::div {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::div

namespace android::hardware::neuralnetworks::V1_1::generated_tests::div {

TEST_F(GeneratedTest, div_all_inputs_as_internal) {
    Execute(device, ::generated_tests::div::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, div_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::div::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::div::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::div

