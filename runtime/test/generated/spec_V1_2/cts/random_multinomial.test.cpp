// Generated from random_multinomial.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::random_multinomial {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, random_multinomial) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, random_multinomial) { execute(get_test_model()); }

} // namespace generated_tests::random_multinomial

TEST_AVAILABLE_SINCE(V1_2, random_multinomial, generated_tests::random_multinomial::get_test_model());

