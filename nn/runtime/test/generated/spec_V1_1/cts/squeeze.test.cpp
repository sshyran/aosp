// Generated from squeeze.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::squeeze {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, squeeze) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, squeeze) { execute(get_test_model()); }

} // namespace generated_tests::squeeze

TEST_AVAILABLE_SINCE(V1_1, squeeze, generated_tests::squeeze::get_test_model());


namespace generated_tests::squeeze {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, squeeze_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, squeeze_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::squeeze

TEST_AVAILABLE_SINCE(V1_1, squeeze_all_inputs_as_internal, generated_tests::squeeze::get_test_model_all_inputs_as_internal());


namespace generated_tests::squeeze {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

TEST_F(GeneratedTests, squeeze_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

TEST_F(DynamicOutputShapeTest, squeeze_all_tensors_as_inputs) { execute(get_test_model_all_tensors_as_inputs()); }

} // namespace generated_tests::squeeze

TEST_AVAILABLE_SINCE(V1_1, squeeze_all_tensors_as_inputs, generated_tests::squeeze::get_test_model_all_tensors_as_inputs());


namespace generated_tests::squeeze {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, squeeze_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, squeeze_all_tensors_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_tensors_as_inputs_all_inputs_as_internal()); }

} // namespace generated_tests::squeeze

TEST_AVAILABLE_SINCE(V1_1, squeeze_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::squeeze::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());

