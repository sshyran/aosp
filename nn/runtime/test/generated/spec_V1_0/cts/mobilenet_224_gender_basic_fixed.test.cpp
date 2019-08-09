// Generated from mobilenet_224_gender_basic_fixed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::mobilenet_224_gender_basic_fixed {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, mobilenet_224_gender_basic_fixed) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, mobilenet_224_gender_basic_fixed) { execute(get_test_model()); }

} // namespace generated_tests::mobilenet_224_gender_basic_fixed

TEST_AVAILABLE_SINCE(V1_0, mobilenet_224_gender_basic_fixed, generated_tests::mobilenet_224_gender_basic_fixed::get_test_model());

