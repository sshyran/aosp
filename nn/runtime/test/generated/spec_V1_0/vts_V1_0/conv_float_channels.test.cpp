// Generated from conv_float_channels.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::conv_float_channels {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::conv_float_channels

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels {

TEST_F(GeneratedTest, conv_float_channels) {
    Execute(device, ::generated_tests::conv_float_channels::get_test_model());
}

TEST_F(ValidationTest, conv_float_channels) {
    const Model model = createModel(::generated_tests::conv_float_channels::get_test_model());
    const Request request = createRequest(::generated_tests::conv_float_channels::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels


namespace generated_tests::conv_float_channels {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::conv_float_channels

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels {

TEST_F(GeneratedTest, conv_float_channels_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv_float_channels::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, conv_float_channels_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv_float_channels::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv_float_channels::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels


namespace generated_tests::conv_float_channels {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::conv_float_channels

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels {

TEST_F(GeneratedTest, conv_float_channels_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs());
}

TEST_F(ValidationTest, conv_float_channels_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels


namespace generated_tests::conv_float_channels {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv_float_channels

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels {

TEST_F(GeneratedTest, conv_float_channels_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, conv_float_channels_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv_float_channels::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_float_channels

