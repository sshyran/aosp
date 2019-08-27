// Generated from fully_connected_float_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::fully_connected_float_weights_as_inputs {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, fully_connected_float_weights_as_inputs) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, fully_connected_float_weights_as_inputs) { execute(get_test_model()); }

} // namespace generated_tests::fully_connected_float_weights_as_inputs

TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_weights_as_inputs, generated_tests::fully_connected_float_weights_as_inputs::get_test_model());


namespace generated_tests::fully_connected_float_weights_as_inputs {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, fully_connected_float_weights_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, fully_connected_float_weights_as_inputs_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::fully_connected_float_weights_as_inputs

TEST_AVAILABLE_SINCE(V1_0, fully_connected_float_weights_as_inputs_all_inputs_as_internal, generated_tests::fully_connected_float_weights_as_inputs::get_test_model_all_inputs_as_internal());

