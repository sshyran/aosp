// Generated from mobilenet_quantized.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::mobilenet_quantized {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::mobilenet_quantized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mobilenet_quantized {

TEST_F(GeneratedTest, mobilenet_quantized) {
    Execute(device, ::generated_tests::mobilenet_quantized::get_test_model());
}

TEST_F(DynamicOutputShapeTest, mobilenet_quantized) {
    Execute(device, ::generated_tests::mobilenet_quantized::get_test_model(), true);
}

TEST_F(ValidationTest, mobilenet_quantized) {
    const Model model = createModel(::generated_tests::mobilenet_quantized::get_test_model());
    const Request request = createRequest(::generated_tests::mobilenet_quantized::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mobilenet_quantized

