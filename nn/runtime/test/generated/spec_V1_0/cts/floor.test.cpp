// Generated from floor.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::floor {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, floor) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, floor) { execute(get_test_model()); }

} // namespace generated_tests::floor

TEST_AVAILABLE_SINCE(V1_0, floor, generated_tests::floor::get_test_model());


namespace generated_tests::floor {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, floor_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, floor_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::floor

TEST_AVAILABLE_SINCE(V1_0, floor_all_inputs_as_internal, generated_tests::floor::get_test_model_all_inputs_as_internal());

