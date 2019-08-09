// Generated from max_pool_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::max_pool_quant8_2 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, max_pool_quant8_2) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, max_pool_quant8_2) { execute(get_test_model()); }

} // namespace generated_tests::max_pool_quant8_2

TEST_AVAILABLE_SINCE(V1_0, max_pool_quant8_2, generated_tests::max_pool_quant8_2::get_test_model());


namespace generated_tests::max_pool_quant8_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, max_pool_quant8_2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, max_pool_quant8_2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::max_pool_quant8_2

TEST_AVAILABLE_SINCE(V1_0, max_pool_quant8_2_all_inputs_as_internal, generated_tests::max_pool_quant8_2::get_test_model_all_inputs_as_internal());

