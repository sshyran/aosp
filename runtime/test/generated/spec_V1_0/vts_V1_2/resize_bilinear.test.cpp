// Generated from resize_bilinear.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::resize_bilinear {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::resize_bilinear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear {

TEST_F(GeneratedTest, resize_bilinear) {
    Execute(device, ::generated_tests::resize_bilinear::get_test_model());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear) {
    Execute(device, ::generated_tests::resize_bilinear::get_test_model(), true);
}

TEST_F(ValidationTest, resize_bilinear) {
    const Model model = createModel(::generated_tests::resize_bilinear::get_test_model());
    const Request request = createRequest(::generated_tests::resize_bilinear::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear


namespace generated_tests::resize_bilinear {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear {

TEST_F(GeneratedTest, resize_bilinear_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear

