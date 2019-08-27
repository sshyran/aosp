// Generated from random_multinomial_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::random_multinomial_float16 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, random_multinomial_float16) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, random_multinomial_float16) { execute(get_test_model()); }

} // namespace generated_tests::random_multinomial_float16

TEST_AVAILABLE_SINCE(V1_2, random_multinomial_float16, generated_tests::random_multinomial_float16::get_test_model());

