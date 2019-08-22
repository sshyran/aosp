// Generated from space_to_batch_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2


namespace generated_tests::space_to_batch_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::space_to_batch_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2 {

TEST_F(GeneratedTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, space_to_batch_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::space_to_batch_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_batch_v1_2

