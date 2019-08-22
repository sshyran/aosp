// Generated from abs.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

TEST_F(GeneratedTest, abs) {
    Execute(device, ::generated_tests::abs::get_test_model());
}

TEST_F(DynamicOutputShapeTest, abs) {
    Execute(device, ::generated_tests::abs::get_test_model(), true);
}

TEST_F(ValidationTest, abs) {
    const Model model = createModel(::generated_tests::abs::get_test_model());
    const Request request = createRequest(::generated_tests::abs::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

TEST_F(GeneratedTest, abs_relaxed) {
    Execute(device, ::generated_tests::abs::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, abs_relaxed) {
    Execute(device, ::generated_tests::abs::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, abs_relaxed) {
    const Model model = createModel(::generated_tests::abs::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::abs::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

TEST_F(GeneratedTest, abs_float16) {
    Execute(device, ::generated_tests::abs::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, abs_float16) {
    Execute(device, ::generated_tests::abs::get_test_model_float16(), true);
}

TEST_F(ValidationTest, abs_float16) {
    const Model model = createModel(::generated_tests::abs::get_test_model_float16());
    const Request request = createRequest(::generated_tests::abs::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

