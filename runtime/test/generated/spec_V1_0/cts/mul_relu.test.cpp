// Generated from mul_relu.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::mul_relu {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, mul_relu) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, mul_relu) { execute(get_test_model()); }

} // namespace generated_tests::mul_relu

TEST_AVAILABLE_SINCE(V1_0, mul_relu, generated_tests::mul_relu::get_test_model());


namespace generated_tests::mul_relu {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, mul_relu_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, mul_relu_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::mul_relu

TEST_AVAILABLE_SINCE(V1_0, mul_relu_all_inputs_as_internal, generated_tests::mul_relu::get_test_model_all_inputs_as_internal());

