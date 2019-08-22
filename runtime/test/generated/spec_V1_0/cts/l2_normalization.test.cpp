// Generated from l2_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::l2_normalization {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, l2_normalization) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, l2_normalization) { execute(get_test_model()); }

} // namespace generated_tests::l2_normalization

TEST_AVAILABLE_SINCE(V1_0, l2_normalization, generated_tests::l2_normalization::get_test_model());


namespace generated_tests::l2_normalization {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, l2_normalization_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, l2_normalization_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::l2_normalization

TEST_AVAILABLE_SINCE(V1_0, l2_normalization_all_inputs_as_internal, generated_tests::l2_normalization::get_test_model_all_inputs_as_internal());

