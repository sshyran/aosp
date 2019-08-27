// Generated from fully_connected_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_relaxed) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_float16) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_float16());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_mult_gt_1();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_quant8_mult_gt_1) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_quant8_mult_gt_1) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_quant8_mult_gt_1) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_mult_gt_1_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_quant8_mult_gt_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_quant8_mult_gt_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_quant8_mult_gt_1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_mult_gt_1_all_tensors_as_inputs();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_quant8(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_quant8) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_quant8());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_quant8(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_quant8) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_quant8());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2


namespace generated_tests::fully_connected_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

TEST_F(GeneratedTest, fully_connected_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::fully_connected_v1_2::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

