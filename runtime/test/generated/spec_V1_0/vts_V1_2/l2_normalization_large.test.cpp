// Generated from l2_normalization_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::l2_normalization_large {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::l2_normalization_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_large {

TEST_F(GeneratedTest, l2_normalization_large) {
    Execute(device, ::generated_tests::l2_normalization_large::get_test_model());
}

TEST_F(DynamicOutputShapeTest, l2_normalization_large) {
    Execute(device, ::generated_tests::l2_normalization_large::get_test_model(), true);
}

TEST_F(ValidationTest, l2_normalization_large) {
    const Model model = createModel(::generated_tests::l2_normalization_large::get_test_model());
    const Request request = createRequest(::generated_tests::l2_normalization_large::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_large


namespace generated_tests::l2_normalization_large {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_large {

TEST_F(GeneratedTest, l2_normalization_large_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_normalization_large::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_normalization_large_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_normalization_large::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_normalization_large_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_normalization_large::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_normalization_large::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_large

