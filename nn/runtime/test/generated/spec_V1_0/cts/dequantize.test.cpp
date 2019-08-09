// Generated from dequantize.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::dequantize {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, dequantize) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, dequantize) { execute(get_test_model()); }

} // namespace generated_tests::dequantize

TEST_AVAILABLE_SINCE(V1_0, dequantize, generated_tests::dequantize::get_test_model());


namespace generated_tests::dequantize {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, dequantize_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, dequantize_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::dequantize

TEST_AVAILABLE_SINCE(V1_0, dequantize_all_inputs_as_internal, generated_tests::dequantize::get_test_model_all_inputs_as_internal());

