// Generated from unidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_relaxed) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_relaxed) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_relaxed_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_float16) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_float16) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_float16_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_relaxed();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_float16();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major_float16) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_float16) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn


namespace generated_tests::unidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_float16_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn {

TEST_F(GeneratedTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_rnn

