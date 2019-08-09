// Generated from dequantize_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm_relaxed_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_1d_quant8_asymm_float16_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_1d_quant8_asymm_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm_relaxed_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_2d_quant8_asymm_float16_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_2d_quant8_asymm_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_2d_quant8_asymm_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_quant8_symm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_quant8_symm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_quant8_symm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_quant8_symm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_quant8_symm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_quant8_symm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_quant8_symm_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_4d_quant8_symm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_4d_quant8_symm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_4d_quant8_symm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_4d_quant8_symm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_4d_quant8_symm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_4d_quant8_symm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_4d_quant8_symm_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_first_dim();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_first_dim) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_first_dim_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_first_dim_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_first_dim_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_first_dim_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_second_dim();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_second_dim) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_second_dim_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_3d_per_channel_second_dim_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_3d_per_channel_second_dim_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_3d_per_channel_second_dim_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model(), true);
}

TEST_F(ValidationTest, dequantize_v1_2) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_zero_sized) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2


namespace generated_tests::dequantize_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

TEST_F(GeneratedTest, dequantize_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::dequantize_v1_2::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_float16) {
    const Model model = createModel(::generated_tests::dequantize_v1_2::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::dequantize_v1_2::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

