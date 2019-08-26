// Generated from embedding_lookup.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::embedding_lookup {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, embedding_lookup) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::embedding_lookup
TEST_AVAILABLE_SINCE(V1_0, embedding_lookup, generated_tests::embedding_lookup::CreateModel)

namespace generated_tests::embedding_lookup {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, embedding_lookup_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::embedding_lookup

