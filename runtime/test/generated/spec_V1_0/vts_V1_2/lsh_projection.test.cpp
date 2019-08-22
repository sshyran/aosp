// Generated from lsh_projection.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::lsh_projection {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::lsh_projection

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection {

TEST_F(GeneratedTest, lsh_projection) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model());
}

TEST_F(DynamicOutputShapeTest, lsh_projection) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model(), true);
}

TEST_F(ValidationTest, lsh_projection) {
    const Model model = createModel(::generated_tests::lsh_projection::get_test_model());
    const Request request = createRequest(::generated_tests::lsh_projection::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection


namespace generated_tests::lsh_projection {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::lsh_projection

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection {

TEST_F(GeneratedTest, lsh_projection_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, lsh_projection_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, lsh_projection_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::lsh_projection::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::lsh_projection::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection


namespace generated_tests::lsh_projection {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::lsh_projection

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection {

TEST_F(GeneratedTest, lsh_projection_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, lsh_projection_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, lsh_projection_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection


namespace generated_tests::lsh_projection {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::lsh_projection

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection {

TEST_F(GeneratedTest, lsh_projection_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, lsh_projection_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, lsh_projection_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::lsh_projection::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lsh_projection

