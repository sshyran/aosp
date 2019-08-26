// Generated from hashtable_lookup_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::hashtable_lookup_float {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, hashtable_lookup_float) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::hashtable_lookup_float
TEST_AVAILABLE_SINCE(V1_0, hashtable_lookup_float, generated_tests::hashtable_lookup_float::CreateModel)

namespace generated_tests::hashtable_lookup_float {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, hashtable_lookup_float_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::hashtable_lookup_float

