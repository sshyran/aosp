// Generated from split_int32_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::split_int32_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::split_int32_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_int32_2 {

TEST_F(GeneratedTest, split_int32_2) {
    Execute(device, ::generated_tests::split_int32_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, split_int32_2) {
    Execute(device, ::generated_tests::split_int32_2::get_test_model(), true);
}

TEST_F(ValidationTest, split_int32_2) {
    const Model model = createModel(::generated_tests::split_int32_2::get_test_model());
    const Request request = createRequest(::generated_tests::split_int32_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_int32_2


namespace generated_tests::split_int32_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::split_int32_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_int32_2 {

TEST_F(GeneratedTest, split_int32_2_relaxed) {
    Execute(device, ::generated_tests::split_int32_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, split_int32_2_relaxed) {
    Execute(device, ::generated_tests::split_int32_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, split_int32_2_relaxed) {
    const Model model = createModel(::generated_tests::split_int32_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::split_int32_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_int32_2

