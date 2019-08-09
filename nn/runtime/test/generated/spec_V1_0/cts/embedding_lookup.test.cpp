// Generated from embedding_lookup.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::embedding_lookup {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, embedding_lookup) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, embedding_lookup) { execute(get_test_model()); }

} // namespace generated_tests::embedding_lookup

TEST_AVAILABLE_SINCE(V1_0, embedding_lookup, generated_tests::embedding_lookup::get_test_model());


namespace generated_tests::embedding_lookup {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, embedding_lookup_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, embedding_lookup_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::embedding_lookup

TEST_AVAILABLE_SINCE(V1_0, embedding_lookup_all_inputs_as_internal, generated_tests::embedding_lookup::get_test_model_all_inputs_as_internal());

