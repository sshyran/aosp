// Generated from mobilenet_224_gender_basic_fixed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::mobilenet_224_gender_basic_fixed {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::mobilenet_224_gender_basic_fixed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::mobilenet_224_gender_basic_fixed {

TEST_F(GeneratedTest, mobilenet_224_gender_basic_fixed) {
    Execute(device, ::generated_tests::mobilenet_224_gender_basic_fixed::get_test_model());
}

TEST_F(ValidationTest, mobilenet_224_gender_basic_fixed) {
    const Model model = createModel(::generated_tests::mobilenet_224_gender_basic_fixed::get_test_model());
    const Request request = createRequest(::generated_tests::mobilenet_224_gender_basic_fixed::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::mobilenet_224_gender_basic_fixed

