// Generated from quantized_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model(), true);
}

TEST_F(ValidationTest, quantized_lstm) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_relaxed) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, quantized_lstm_relaxed) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_all_tensors_as_inputs();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_relaxed();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_relaxed) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_relaxed_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm


namespace generated_tests::quantized_lstm {

const ::test_helper::TestModel& get_test_model_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::quantized_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm {

TEST_F(GeneratedTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantized_lstm::get_test_model_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantized_lstm

