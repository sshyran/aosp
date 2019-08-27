// Generated from transpose_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::transpose_float16 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, transpose_float16) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, transpose_float16) { execute(get_test_model()); }

} // namespace generated_tests::transpose_float16

TEST_AVAILABLE_SINCE(V1_2, transpose_float16, generated_tests::transpose_float16::get_test_model());


namespace generated_tests::transpose_float16 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_float16_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, transpose_float16_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::transpose_float16

TEST_AVAILABLE_SINCE(V1_2, transpose_float16_all_inputs_as_internal, generated_tests::transpose_float16::get_test_model_all_inputs_as_internal());


namespace generated_tests::transpose_float16 {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

TEST_F(GeneratedTests, transpose_float16_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

TEST_F(DynamicOutputShapeTest, transpose_float16_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

} // namespace generated_tests::transpose_float16

TEST_AVAILABLE_SINCE(V1_2, transpose_float16_all_tensors_as_inputs, generated_tests::transpose_float16::get_test_model_all_tensors_as_inputs());


namespace generated_tests::transpose_float16 {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, transpose_float16_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, transpose_float16_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

} // namespace generated_tests::transpose_float16

TEST_AVAILABLE_SINCE(V1_2, transpose_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::transpose_float16::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());

