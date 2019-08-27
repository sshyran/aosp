// Generated from logical_or.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::logical_or {

const ::test_helper::TestModel& get_test_model_simple();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

TEST_F(GeneratedTest, logical_or_simple) {
    Execute(device, ::generated_tests::logical_or::get_test_model_simple());
}

TEST_F(DynamicOutputShapeTest, logical_or_simple) {
    Execute(device, ::generated_tests::logical_or::get_test_model_simple(), true);
}

TEST_F(ValidationTest, logical_or_simple) {
    const Model model = createModel(::generated_tests::logical_or::get_test_model_simple());
    const Request request = createRequest(::generated_tests::logical_or::get_test_model_simple());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or


namespace generated_tests::logical_or {

const ::test_helper::TestModel& get_test_model_broadcast();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

TEST_F(GeneratedTest, logical_or_broadcast) {
    Execute(device, ::generated_tests::logical_or::get_test_model_broadcast());
}

TEST_F(DynamicOutputShapeTest, logical_or_broadcast) {
    Execute(device, ::generated_tests::logical_or::get_test_model_broadcast(), true);
}

TEST_F(ValidationTest, logical_or_broadcast) {
    const Model model = createModel(::generated_tests::logical_or::get_test_model_broadcast());
    const Request request = createRequest(::generated_tests::logical_or::get_test_model_broadcast());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or

