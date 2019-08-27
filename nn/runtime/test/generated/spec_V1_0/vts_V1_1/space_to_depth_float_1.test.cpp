// Generated from space_to_depth_float_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::space_to_depth_float_1 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::space_to_depth_float_1

namespace android::hardware::neuralnetworks::V1_1::generated_tests::space_to_depth_float_1 {

TEST_F(GeneratedTest, space_to_depth_float_1) {
    Execute(device, ::generated_tests::space_to_depth_float_1::get_test_model());
}

TEST_F(ValidationTest, space_to_depth_float_1) {
    const Model model = createModel(::generated_tests::space_to_depth_float_1::get_test_model());
    const Request request = createRequest(::generated_tests::space_to_depth_float_1::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::space_to_depth_float_1


namespace generated_tests::space_to_depth_float_1 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::space_to_depth_float_1

namespace android::hardware::neuralnetworks::V1_1::generated_tests::space_to_depth_float_1 {

TEST_F(GeneratedTest, space_to_depth_float_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_depth_float_1::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, space_to_depth_float_1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_depth_float_1::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_depth_float_1::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::space_to_depth_float_1

