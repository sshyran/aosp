// Generated from embedding_lookup.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::embedding_lookup {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::embedding_lookup

namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup {

TEST_F(GeneratedTest, embedding_lookup) {
    Execute(device, ::generated_tests::embedding_lookup::get_test_model());
}

TEST_F(ValidationTest, embedding_lookup) {
    const Model model = createModel(::generated_tests::embedding_lookup::get_test_model());
    const Request request = createRequest(::generated_tests::embedding_lookup::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup


namespace generated_tests::embedding_lookup {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::embedding_lookup

namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup {

TEST_F(GeneratedTest, embedding_lookup_all_inputs_as_internal) {
    Execute(device, ::generated_tests::embedding_lookup::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, embedding_lookup_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::embedding_lookup::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::embedding_lookup::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::embedding_lookup

