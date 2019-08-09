// Generated from sin.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::sin

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin {

TEST_F(GeneratedTest, sin) {
    Execute(device, ::generated_tests::sin::get_test_model());
}

TEST_F(DynamicOutputShapeTest, sin) {
    Execute(device, ::generated_tests::sin::get_test_model(), true);
}

TEST_F(ValidationTest, sin) {
    const Model model = createModel(::generated_tests::sin::get_test_model());
    const Request request = createRequest(::generated_tests::sin::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::sin

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin {

TEST_F(GeneratedTest, sin_relaxed) {
    Execute(device, ::generated_tests::sin::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, sin_relaxed) {
    Execute(device, ::generated_tests::sin::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, sin_relaxed) {
    const Model model = createModel(::generated_tests::sin::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::sin::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::sin

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin {

TEST_F(GeneratedTest, sin_float16) {
    Execute(device, ::generated_tests::sin::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, sin_float16) {
    Execute(device, ::generated_tests::sin::get_test_model_float16(), true);
}

TEST_F(ValidationTest, sin_float16) {
    const Model model = createModel(::generated_tests::sin::get_test_model_float16());
    const Request request = createRequest(::generated_tests::sin::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sin

