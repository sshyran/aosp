// Generated from rsqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::rsqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt {

TEST_F(GeneratedTest, rsqrt) {
    Execute(device, ::generated_tests::rsqrt::get_test_model());
}

TEST_F(DynamicOutputShapeTest, rsqrt) {
    Execute(device, ::generated_tests::rsqrt::get_test_model(), true);
}

TEST_F(ValidationTest, rsqrt) {
    const Model model = createModel(::generated_tests::rsqrt::get_test_model());
    const Request request = createRequest(::generated_tests::rsqrt::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::rsqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt {

TEST_F(GeneratedTest, rsqrt_relaxed) {
    Execute(device, ::generated_tests::rsqrt::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, rsqrt_relaxed) {
    Execute(device, ::generated_tests::rsqrt::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, rsqrt_relaxed) {
    const Model model = createModel(::generated_tests::rsqrt::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::rsqrt::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::rsqrt

namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt {

TEST_F(GeneratedTest, rsqrt_float16) {
    Execute(device, ::generated_tests::rsqrt::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, rsqrt_float16) {
    Execute(device, ::generated_tests::rsqrt::get_test_model_float16(), true);
}

TEST_F(ValidationTest, rsqrt_float16) {
    const Model model = createModel(::generated_tests::rsqrt::get_test_model_float16());
    const Request request = createRequest(::generated_tests::rsqrt::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::rsqrt

