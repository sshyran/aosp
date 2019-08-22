// Generated from relu_quant8_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::relu_quant8_1 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::relu_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1 {

TEST_F(GeneratedTest, relu_quant8_1) {
    Execute(device, ::generated_tests::relu_quant8_1::get_test_model());
}

TEST_F(ValidationTest, relu_quant8_1) {
    const Model model = createModel(::generated_tests::relu_quant8_1::get_test_model());
    const Request request = createRequest(::generated_tests::relu_quant8_1::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1


namespace generated_tests::relu_quant8_1 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::relu_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1 {

TEST_F(GeneratedTest, relu_quant8_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, relu_quant8_1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1


namespace generated_tests::relu_quant8_1 {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::relu_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1 {

TEST_F(GeneratedTest, relu_quant8_1_2) {
    Execute(device, ::generated_tests::relu_quant8_1::get_test_model_2());
}

TEST_F(ValidationTest, relu_quant8_1_2) {
    const Model model = createModel(::generated_tests::relu_quant8_1::get_test_model_2());
    const Request request = createRequest(::generated_tests::relu_quant8_1::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1


namespace generated_tests::relu_quant8_1 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::relu_quant8_1

namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1 {

TEST_F(GeneratedTest, relu_quant8_1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, relu_quant8_1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::relu_quant8_1::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::relu_quant8_1

