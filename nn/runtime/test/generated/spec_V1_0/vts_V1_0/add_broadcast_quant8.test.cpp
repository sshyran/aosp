// Generated from add_broadcast_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::add_broadcast_quant8 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::add_broadcast_quant8

namespace android::hardware::neuralnetworks::V1_0::generated_tests::add_broadcast_quant8 {

TEST_F(GeneratedTest, add_broadcast_quant8) {
    Execute(device, ::generated_tests::add_broadcast_quant8::get_test_model());
}

TEST_F(ValidationTest, add_broadcast_quant8) {
    const Model model = createModel(::generated_tests::add_broadcast_quant8::get_test_model());
    const Request request = createRequest(::generated_tests::add_broadcast_quant8::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::add_broadcast_quant8


namespace generated_tests::add_broadcast_quant8 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::add_broadcast_quant8

namespace android::hardware::neuralnetworks::V1_0::generated_tests::add_broadcast_quant8 {

TEST_F(GeneratedTest, add_broadcast_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::add_broadcast_quant8::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, add_broadcast_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::add_broadcast_quant8::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::add_broadcast_quant8::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::add_broadcast_quant8

