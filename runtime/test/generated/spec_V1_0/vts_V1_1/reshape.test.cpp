// Generated from reshape.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::reshape {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::reshape

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape {

TEST_F(GeneratedTest, reshape) {
    Execute(device, ::generated_tests::reshape::get_test_model());
}

TEST_F(ValidationTest, reshape) {
    const Model model = createModel(::generated_tests::reshape::get_test_model());
    const Request request = createRequest(::generated_tests::reshape::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape


namespace generated_tests::reshape {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::reshape

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape {

TEST_F(GeneratedTest, reshape_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reshape::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, reshape_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reshape::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reshape::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape


namespace generated_tests::reshape {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::reshape

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape {

TEST_F(GeneratedTest, reshape_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::reshape::get_test_model_all_tensors_as_inputs());
}

TEST_F(ValidationTest, reshape_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::reshape::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::reshape::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape


namespace generated_tests::reshape {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::reshape

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape {

TEST_F(GeneratedTest, reshape_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reshape::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, reshape_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reshape::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reshape::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape

