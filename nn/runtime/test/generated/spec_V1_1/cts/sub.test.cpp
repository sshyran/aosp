// Generated from sub.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::sub {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, sub) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, sub) { execute(get_test_model()); }

} // namespace generated_tests::sub

TEST_AVAILABLE_SINCE(V1_1, sub, generated_tests::sub::get_test_model());


namespace generated_tests::sub {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, sub_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, sub_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::sub

TEST_AVAILABLE_SINCE(V1_1, sub_all_inputs_as_internal, generated_tests::sub::get_test_model_all_inputs_as_internal());

