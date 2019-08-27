// Generated from mobilenet_224_gender_basic_fixed_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::mobilenet_224_gender_basic_fixed_relaxed {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::mobilenet_224_gender_basic_fixed_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mobilenet_224_gender_basic_fixed_relaxed {

TEST_F(GeneratedTest, mobilenet_224_gender_basic_fixed_relaxed) {
    Execute(device, ::generated_tests::mobilenet_224_gender_basic_fixed_relaxed::get_test_model());
}

TEST_F(DynamicOutputShapeTest, mobilenet_224_gender_basic_fixed_relaxed) {
    Execute(device, ::generated_tests::mobilenet_224_gender_basic_fixed_relaxed::get_test_model(), true);
}

TEST_F(ValidationTest, mobilenet_224_gender_basic_fixed_relaxed) {
    const Model model = createModel(::generated_tests::mobilenet_224_gender_basic_fixed_relaxed::get_test_model());
    const Request request = createRequest(::generated_tests::mobilenet_224_gender_basic_fixed_relaxed::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mobilenet_224_gender_basic_fixed_relaxed

