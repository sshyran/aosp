// Generated from neg.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, neg) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, neg) { execute(get_test_model()); }

} // namespace generated_tests::neg

TEST_AVAILABLE_SINCE(V1_2, neg, generated_tests::neg::get_test_model());


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, neg_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, neg_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::neg


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, neg_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, neg_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::neg

TEST_AVAILABLE_SINCE(V1_2, neg_float16, generated_tests::neg::get_test_model_float16());


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_int32();

TEST_F(GeneratedTests, neg_int32) { execute(get_test_model_int32()); }

TEST_F(DynamicOutputShapeTest, neg_int32) { execute(get_test_model_int32()); }

} // namespace generated_tests::neg

TEST_AVAILABLE_SINCE(V1_2, neg_int32, generated_tests::neg::get_test_model_int32());

