// Generated from gather_higher_rank.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model(), true);
}

TEST_F(ValidationTest, gather_higher_rank) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_higher_rank_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_relaxed) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_relaxed) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, gather_higher_rank_relaxed) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_higher_rank_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_quant8) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_quant8) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, gather_higher_rank_quant8) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_higher_rank_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank


namespace generated_tests::gather_higher_rank {

const ::test_helper::TestModel& get_test_model_int32();

} // namespace generated_tests::gather_higher_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank {

TEST_F(GeneratedTest, gather_higher_rank_int32) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_int32());
}

TEST_F(DynamicOutputShapeTest, gather_higher_rank_int32) {
    Execute(device, ::generated_tests::gather_higher_rank::get_test_model_int32(), true);
}

TEST_F(ValidationTest, gather_higher_rank_int32) {
    const Model model = createModel(::generated_tests::gather_higher_rank::get_test_model_int32());
    const Request request = createRequest(::generated_tests::gather_higher_rank::get_test_model_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather_higher_rank

