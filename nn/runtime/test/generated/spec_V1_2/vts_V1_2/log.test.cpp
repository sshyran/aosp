// Generated from log.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

TEST_F(GeneratedTest, log) {
    Execute(device, ::generated_tests::log::get_test_model());
}

TEST_F(DynamicOutputShapeTest, log) {
    Execute(device, ::generated_tests::log::get_test_model(), true);
}

TEST_F(ValidationTest, log) {
    const Model model = createModel(::generated_tests::log::get_test_model());
    const Request request = createRequest(::generated_tests::log::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

TEST_F(GeneratedTest, log_relaxed) {
    Execute(device, ::generated_tests::log::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, log_relaxed) {
    Execute(device, ::generated_tests::log::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, log_relaxed) {
    const Model model = createModel(::generated_tests::log::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::log::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

TEST_F(GeneratedTest, log_float16) {
    Execute(device, ::generated_tests::log::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, log_float16) {
    Execute(device, ::generated_tests::log::get_test_model_float16(), true);
}

TEST_F(ValidationTest, log_float16) {
    const Model model = createModel(::generated_tests::log::get_test_model_float16());
    const Request request = createRequest(::generated_tests::log::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

