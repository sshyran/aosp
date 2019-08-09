// Generated from concat_mixed_quant.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::concat_mixed_quant {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

TEST_F(GeneratedTest, concat_mixed_quant_quant8) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8) {
    const Model model = createModel(::generated_tests::concat_mixed_quant::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::concat_mixed_quant::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant


namespace generated_tests::concat_mixed_quant {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

TEST_F(GeneratedTest, concat_mixed_quant_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant


namespace generated_tests::concat_mixed_quant {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

TEST_F(GeneratedTest, concat_mixed_quant_quant8_2) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_2) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_2) {
    const Model model = createModel(::generated_tests::concat_mixed_quant::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::concat_mixed_quant::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant


namespace generated_tests::concat_mixed_quant {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

TEST_F(GeneratedTest, concat_mixed_quant_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::concat_mixed_quant::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

