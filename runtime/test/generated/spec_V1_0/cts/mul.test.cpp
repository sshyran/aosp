// Generated from mul.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::mul {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, mul) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, mul) { execute(get_test_model()); }

} // namespace generated_tests::mul

TEST_AVAILABLE_SINCE(V1_0, mul, generated_tests::mul::get_test_model());


namespace generated_tests::mul {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, mul_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, mul_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::mul

TEST_AVAILABLE_SINCE(V1_0, mul_all_inputs_as_internal, generated_tests::mul::get_test_model_all_inputs_as_internal());

