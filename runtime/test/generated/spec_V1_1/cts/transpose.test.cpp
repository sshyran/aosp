// Generated from transpose.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::transpose {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, transpose) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, transpose) { execute(get_test_model()); }

} // namespace generated_tests::transpose

TEST_AVAILABLE_SINCE(V1_1, transpose, generated_tests::transpose::get_test_model());


namespace generated_tests::transpose {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, transpose_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::transpose

TEST_AVAILABLE_SINCE(V1_1, transpose_all_inputs_as_internal, generated_tests::transpose::get_test_model_all_inputs_as_internal());


namespace generated_tests::transpose {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

TEST_F(GeneratedTests, transpose_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

TEST_F(DynamicOutputShapeTest, transpose_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

} // namespace generated_tests::transpose

TEST_AVAILABLE_SINCE(V1_1, transpose_all_tensors_as_inputs, generated_tests::transpose::get_test_model_all_tensors_as_inputs());


namespace generated_tests::transpose {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, transpose_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

} // namespace generated_tests::transpose

TEST_AVAILABLE_SINCE(V1_1, transpose_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::transpose::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());

