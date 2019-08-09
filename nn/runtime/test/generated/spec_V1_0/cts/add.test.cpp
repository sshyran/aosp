// Generated from add.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::add {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, add) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, add) { execute(get_test_model()); }

} // namespace generated_tests::add

TEST_AVAILABLE_SINCE(V1_0, add, generated_tests::add::get_test_model());


namespace generated_tests::add {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, add_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, add_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::add

TEST_AVAILABLE_SINCE(V1_0, add_all_inputs_as_internal, generated_tests::add::get_test_model_all_inputs_as_internal());

