// Generated from logical_and.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::logical_and {

const ::test_helper::TestModel& get_test_model_simple();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

TEST_F(GeneratedTest, logical_and_simple) {
    Execute(device, ::generated_tests::logical_and::get_test_model_simple());
}

TEST_F(DynamicOutputShapeTest, logical_and_simple) {
    Execute(device, ::generated_tests::logical_and::get_test_model_simple(), true);
}

TEST_F(ValidationTest, logical_and_simple) {
    const Model model = createModel(::generated_tests::logical_and::get_test_model_simple());
    const Request request = createRequest(::generated_tests::logical_and::get_test_model_simple());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and


namespace generated_tests::logical_and {

const ::test_helper::TestModel& get_test_model_broadcast();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

TEST_F(GeneratedTest, logical_and_broadcast) {
    Execute(device, ::generated_tests::logical_and::get_test_model_broadcast());
}

TEST_F(DynamicOutputShapeTest, logical_and_broadcast) {
    Execute(device, ::generated_tests::logical_and::get_test_model_broadcast(), true);
}

TEST_F(ValidationTest, logical_and_broadcast) {
    const Model model = createModel(::generated_tests::logical_and::get_test_model_broadcast());
    const Request request = createRequest(::generated_tests::logical_and::get_test_model_broadcast());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and

