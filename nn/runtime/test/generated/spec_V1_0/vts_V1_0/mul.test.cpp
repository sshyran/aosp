// Generated from mul.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::mul {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::mul

namespace android::hardware::neuralnetworks::V1_0::generated_tests::mul {

TEST_F(GeneratedTest, mul) {
    Execute(device, ::generated_tests::mul::get_test_model());
}

TEST_F(ValidationTest, mul) {
    const Model model = createModel(::generated_tests::mul::get_test_model());
    const Request request = createRequest(::generated_tests::mul::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::mul


namespace generated_tests::mul {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::mul

namespace android::hardware::neuralnetworks::V1_0::generated_tests::mul {

TEST_F(GeneratedTest, mul_all_inputs_as_internal) {
    Execute(device, ::generated_tests::mul::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, mul_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::mul::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::mul::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::mul

