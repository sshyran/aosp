// Generated from add_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::add_quant8 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, add_quant8) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, add_quant8) { execute(get_test_model()); }

} // namespace generated_tests::add_quant8

TEST_AVAILABLE_SINCE(V1_0, add_quant8, generated_tests::add_quant8::get_test_model());


namespace generated_tests::add_quant8 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, add_quant8_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, add_quant8_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::add_quant8

TEST_AVAILABLE_SINCE(V1_0, add_quant8_all_inputs_as_internal, generated_tests::add_quant8::get_test_model_all_inputs_as_internal());

