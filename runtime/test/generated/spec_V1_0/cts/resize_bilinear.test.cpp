// Generated from resize_bilinear.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::resize_bilinear {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, resize_bilinear) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, resize_bilinear) { execute(get_test_model()); }

} // namespace generated_tests::resize_bilinear

TEST_AVAILABLE_SINCE(V1_0, resize_bilinear, generated_tests::resize_bilinear::get_test_model());


namespace generated_tests::resize_bilinear {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, resize_bilinear_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, resize_bilinear_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::resize_bilinear

TEST_AVAILABLE_SINCE(V1_0, resize_bilinear_all_inputs_as_internal, generated_tests::resize_bilinear::get_test_model_all_inputs_as_internal());

