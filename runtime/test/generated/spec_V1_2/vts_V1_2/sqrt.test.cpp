// Generated from sqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::sqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt {

TEST_F(GeneratedTest, sqrt) {
    Execute(device, ::generated_tests::sqrt::get_test_model());
}

TEST_F(DynamicOutputShapeTest, sqrt) {
    Execute(device, ::generated_tests::sqrt::get_test_model(), true);
}

TEST_F(ValidationTest, sqrt) {
    const Model model = createModel(::generated_tests::sqrt::get_test_model());
    const Request request = createRequest(::generated_tests::sqrt::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::sqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt {

TEST_F(GeneratedTest, sqrt_relaxed) {
    Execute(device, ::generated_tests::sqrt::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, sqrt_relaxed) {
    Execute(device, ::generated_tests::sqrt::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, sqrt_relaxed) {
    const Model model = createModel(::generated_tests::sqrt::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::sqrt::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::sqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt {

TEST_F(GeneratedTest, sqrt_float16) {
    Execute(device, ::generated_tests::sqrt::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, sqrt_float16) {
    Execute(device, ::generated_tests::sqrt::get_test_model_float16(), true);
}

TEST_F(ValidationTest, sqrt_float16) {
    const Model model = createModel(::generated_tests::sqrt::get_test_model_float16());
    const Request request = createRequest(::generated_tests::sqrt::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sqrt

