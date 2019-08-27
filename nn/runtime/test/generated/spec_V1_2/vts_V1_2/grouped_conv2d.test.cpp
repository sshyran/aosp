// Generated from grouped_conv2d.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d


namespace generated_tests::grouped_conv2d {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

TEST_F(GeneratedTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::grouped_conv2d::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

