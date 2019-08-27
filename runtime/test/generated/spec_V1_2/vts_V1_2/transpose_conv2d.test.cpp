// Generated from transpose_conv2d.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_none_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu1_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relu6_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16_2();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16_2(), true);
}

TEST_F(ValidationTest, transpose_conv2d_zero_sized_nchw_float16_2) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16_2());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_zero_sized_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d


namespace generated_tests::transpose_conv2d {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5();

} // namespace generated_tests::transpose_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d {

TEST_F(GeneratedTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, transpose_conv2d_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::transpose_conv2d::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d

