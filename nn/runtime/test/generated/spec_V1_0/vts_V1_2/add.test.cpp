// Generated from add.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::add {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::add

namespace android::hardware::neuralnetworks::V1_2::generated_tests::add {

TEST_F(GeneratedTest, add) {
    Execute(device, ::generated_tests::add::get_test_model());
}

TEST_F(DynamicOutputShapeTest, add) {
    Execute(device, ::generated_tests::add::get_test_model(), true);
}

TEST_F(ValidationTest, add) {
    const Model model = createModel(::generated_tests::add::get_test_model());
    const Request request = createRequest(::generated_tests::add::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::add


namespace generated_tests::add {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::add

namespace android::hardware::neuralnetworks::V1_2::generated_tests::add {

TEST_F(GeneratedTest, add_all_inputs_as_internal) {
    Execute(device, ::generated_tests::add::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, add_all_inputs_as_internal) {
    Execute(device, ::generated_tests::add::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, add_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::add::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::add::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::add

