// Generated from split_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::split_quant8_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::split_quant8_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2 {

TEST_F(GeneratedTest, split_quant8_2) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, split_quant8_2) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model(), true);
}

TEST_F(ValidationTest, split_quant8_2) {
    const Model model = createModel(::generated_tests::split_quant8_2::get_test_model());
    const Request request = createRequest(::generated_tests::split_quant8_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2


namespace generated_tests::split_quant8_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::split_quant8_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2 {

TEST_F(GeneratedTest, split_quant8_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, split_quant8_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, split_quant8_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::split_quant8_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::split_quant8_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2


namespace generated_tests::split_quant8_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::split_quant8_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2 {

TEST_F(GeneratedTest, split_quant8_2_relaxed) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, split_quant8_2_relaxed) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, split_quant8_2_relaxed) {
    const Model model = createModel(::generated_tests::split_quant8_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::split_quant8_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2


namespace generated_tests::split_quant8_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::split_quant8_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2 {

TEST_F(GeneratedTest, split_quant8_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, split_quant8_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::split_quant8_2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, split_quant8_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::split_quant8_2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::split_quant8_2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::split_quant8_2

