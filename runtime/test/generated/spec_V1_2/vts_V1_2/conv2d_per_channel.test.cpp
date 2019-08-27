// Generated from conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model(), true);
}

TEST_F(ValidationTest, conv2d_per_channel) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nhwc();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nhwc) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nhwc) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nchw();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nchw) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nchw) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nchw) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_layouts_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_zero_sized_nhwc) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_zero_sized_nhwc) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel


namespace generated_tests::conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel {

TEST_F(GeneratedTest, conv2d_per_channel_zero_sized_nchw) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_per_channel_zero_sized_nchw) {
    Execute(device, ::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, conv2d_per_channel_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::conv2d_per_channel::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_per_channel

