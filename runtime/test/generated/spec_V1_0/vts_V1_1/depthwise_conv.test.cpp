// Generated from depthwise_conv.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model());
}

TEST_F(ValidationTest, depthwise_conv) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_2) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_2());
}

TEST_F(ValidationTest, depthwise_conv_2) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_2());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv


namespace generated_tests::depthwise_conv {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv {

TEST_F(GeneratedTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, depthwise_conv_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv::get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv

