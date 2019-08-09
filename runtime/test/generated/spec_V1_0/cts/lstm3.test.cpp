// Generated from lstm3.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm3 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm3) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm3) { execute(get_test_model()); }

} // namespace generated_tests::lstm3

TEST_AVAILABLE_SINCE(V1_0, lstm3, generated_tests::lstm3::get_test_model());


namespace generated_tests::lstm3 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm3_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm3_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm3

TEST_AVAILABLE_SINCE(V1_0, lstm3_all_inputs_as_internal, generated_tests::lstm3::get_test_model_all_inputs_as_internal());

