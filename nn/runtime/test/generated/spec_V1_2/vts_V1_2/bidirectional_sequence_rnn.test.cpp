// Generated from bidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_time_major_merge_outputs_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_reversed_inputs_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_reversed_inputs_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_reversed_inputs_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_aux_input_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_aux_input_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_aux_input_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_aux_input_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_aux_input_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input_relaxed();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input_float16();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn


namespace generated_tests::bidirectional_sequence_rnn {

const ::test_helper::TestModel& get_test_model_blackbox_regular_and_aux_input_float16_all_inputs_as_internal();

} // namespace generated_tests::bidirectional_sequence_rnn

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn {

TEST_F(GeneratedTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, bidirectional_sequence_rnn_blackbox_regular_and_aux_input_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox_regular_and_aux_input_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bidirectional_sequence_rnn

