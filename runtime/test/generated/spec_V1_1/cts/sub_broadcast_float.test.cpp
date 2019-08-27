// Generated from sub_broadcast_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::sub_broadcast_float {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, sub_broadcast_float) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, sub_broadcast_float) { execute(get_test_model()); }

} // namespace generated_tests::sub_broadcast_float

TEST_AVAILABLE_SINCE(V1_1, sub_broadcast_float, generated_tests::sub_broadcast_float::get_test_model());


namespace generated_tests::sub_broadcast_float {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, sub_broadcast_float_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, sub_broadcast_float_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::sub_broadcast_float

TEST_AVAILABLE_SINCE(V1_1, sub_broadcast_float_all_inputs_as_internal, generated_tests::sub_broadcast_float::get_test_model_all_inputs_as_internal());

