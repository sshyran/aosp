// Generated from random_multinomial_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::random_multinomial_float16 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::random_multinomial_float16

namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial_float16 {

TEST_F(GeneratedTest, random_multinomial_float16) {
    Execute(device, ::generated_tests::random_multinomial_float16::get_test_model());
}

TEST_F(DynamicOutputShapeTest, random_multinomial_float16) {
    Execute(device, ::generated_tests::random_multinomial_float16::get_test_model(), true);
}

TEST_F(ValidationTest, random_multinomial_float16) {
    const Model model = createModel(::generated_tests::random_multinomial_float16::get_test_model());
    const Request request = createRequest(::generated_tests::random_multinomial_float16::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::random_multinomial_float16

