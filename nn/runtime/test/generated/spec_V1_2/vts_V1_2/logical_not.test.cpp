// Generated from logical_not.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::logical_not {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::logical_not

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_not {

TEST_F(GeneratedTest, logical_not) {
    Execute(device, ::generated_tests::logical_not::get_test_model());
}

TEST_F(DynamicOutputShapeTest, logical_not) {
    Execute(device, ::generated_tests::logical_not::get_test_model(), true);
}

TEST_F(ValidationTest, logical_not) {
    const Model model = createModel(::generated_tests::logical_not::get_test_model());
    const Request request = createRequest(::generated_tests::logical_not::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_not

