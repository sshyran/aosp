// Generated from exp.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::exp

namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp {

TEST_F(GeneratedTest, exp) {
    Execute(device, ::generated_tests::exp::get_test_model());
}

TEST_F(DynamicOutputShapeTest, exp) {
    Execute(device, ::generated_tests::exp::get_test_model(), true);
}

TEST_F(ValidationTest, exp) {
    const Model model = createModel(::generated_tests::exp::get_test_model());
    const Request request = createRequest(::generated_tests::exp::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::exp

namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp {

TEST_F(GeneratedTest, exp_relaxed) {
    Execute(device, ::generated_tests::exp::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, exp_relaxed) {
    Execute(device, ::generated_tests::exp::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, exp_relaxed) {
    const Model model = createModel(::generated_tests::exp::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::exp::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::exp

namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp {

TEST_F(GeneratedTest, exp_float16) {
    Execute(device, ::generated_tests::exp::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, exp_float16) {
    Execute(device, ::generated_tests::exp::get_test_model_float16(), true);
}

TEST_F(ValidationTest, exp_float16) {
    const Model model = createModel(::generated_tests::exp::get_test_model_float16());
    const Request request = createRequest(::generated_tests::exp::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::exp

