// Generated from div.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::div {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, div) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, div) { execute(get_test_model()); }

} // namespace generated_tests::div

TEST_AVAILABLE_SINCE(V1_1, div, generated_tests::div::get_test_model());


namespace generated_tests::div {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, div_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, div_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::div

TEST_AVAILABLE_SINCE(V1_1, div_all_inputs_as_internal, generated_tests::div::get_test_model_all_inputs_as_internal());

