// Generated from mul_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::mul_quant8 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, mul_quant8) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, mul_quant8) { execute(get_test_model()); }

} // namespace generated_tests::mul_quant8

TEST_AVAILABLE_SINCE(V1_0, mul_quant8, generated_tests::mul_quant8::get_test_model());


namespace generated_tests::mul_quant8 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, mul_quant8_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, mul_quant8_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::mul_quant8

TEST_AVAILABLE_SINCE(V1_0, mul_quant8_all_inputs_as_internal, generated_tests::mul_quant8::get_test_model_all_inputs_as_internal());

