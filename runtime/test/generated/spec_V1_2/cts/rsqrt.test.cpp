// Generated from rsqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, rsqrt) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, rsqrt) { execute(get_test_model()); }

} // namespace generated_tests::rsqrt

TEST_AVAILABLE_SINCE(V1_2, rsqrt, generated_tests::rsqrt::get_test_model());


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, rsqrt_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, rsqrt_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::rsqrt


namespace generated_tests::rsqrt {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, rsqrt_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, rsqrt_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::rsqrt

TEST_AVAILABLE_SINCE(V1_2, rsqrt_float16, generated_tests::rsqrt::get_test_model_float16());

