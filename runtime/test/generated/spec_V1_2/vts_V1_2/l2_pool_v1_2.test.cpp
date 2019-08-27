// Generated from l2_pool_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_float16_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_large_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2


namespace generated_tests::l2_pool_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16_2();

} // namespace generated_tests::l2_pool_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2 {

TEST_F(GeneratedTest, l2_pool_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, l2_pool_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16_2(), true);
}

TEST_F(ValidationTest, l2_pool_v1_2_zero_sized_nchw_float16_2) {
    const Model model = createModel(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16_2());
    const Request request = createRequest(::generated_tests::l2_pool_v1_2::get_test_model_zero_sized_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_pool_v1_2

