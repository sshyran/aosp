// Generated from pad_low_rank.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model(), true);
}

TEST_F(ValidationTest, pad_low_rank) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pad_low_rank_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, pad_low_rank_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pad_low_rank_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_float16) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_float16) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16(), true);
}

TEST_F(ValidationTest, pad_low_rank_float16) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_float16());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pad_low_rank_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, pad_low_rank_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank


namespace generated_tests::pad_low_rank {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

TEST_F(GeneratedTest, pad_low_rank_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pad_low_rank_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pad_low_rank_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pad_low_rank::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank

