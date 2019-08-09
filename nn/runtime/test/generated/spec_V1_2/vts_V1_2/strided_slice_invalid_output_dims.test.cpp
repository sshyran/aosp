// Generated from strided_slice_invalid_output_dims.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::strided_slice_invalid_output_dims {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

TEST_F(ValidationTest, strided_slice_invalid_output_dims) {
    const Model model = createModel(::generated_tests::strided_slice_invalid_output_dims::get_test_model());
    const Request request = createRequest(::generated_tests::strided_slice_invalid_output_dims::get_test_model());
    validateFailure(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims


namespace generated_tests::strided_slice_invalid_output_dims {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_inputs_as_internal());
    validateFailure(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims


namespace generated_tests::strided_slice_invalid_output_dims {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_tensors_as_inputs());
    validateFailure(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims


namespace generated_tests::strided_slice_invalid_output_dims {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::strided_slice_invalid_output_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims {

TEST_F(ValidationTest, strided_slice_invalid_output_dims_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::strided_slice_invalid_output_dims::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateFailure(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice_invalid_output_dims

