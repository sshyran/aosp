// Generated from dequantize_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::dequantize_relaxed {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, dequantize_relaxed) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, dequantize_relaxed) { execute(get_test_model()); }

} // namespace generated_tests::dequantize_relaxed


namespace generated_tests::dequantize_relaxed {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, dequantize_relaxed_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, dequantize_relaxed_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::dequantize_relaxed

