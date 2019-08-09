// Generated from relu_float_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::relu_float_2 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, relu_float_2) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, relu_float_2) { execute(get_test_model()); }

} // namespace generated_tests::relu_float_2

TEST_AVAILABLE_SINCE(V1_0, relu_float_2, generated_tests::relu_float_2::get_test_model());


namespace generated_tests::relu_float_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, relu_float_2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, relu_float_2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::relu_float_2

TEST_AVAILABLE_SINCE(V1_0, relu_float_2_all_inputs_as_internal, generated_tests::relu_float_2::get_test_model_all_inputs_as_internal());

