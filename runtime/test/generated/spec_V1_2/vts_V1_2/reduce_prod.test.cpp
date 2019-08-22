// Generated from reduce_prod.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model());
}

TEST_F(DynamicOutputShapeTest, reduce_prod) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model(), true);
}

TEST_F(ValidationTest, reduce_prod) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_prod_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16(), true);
}

TEST_F(ValidationTest, reduce_prod_float16) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_2(), true);
}

TEST_F(ValidationTest, reduce_prod_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_prod_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_3(), true);
}

TEST_F(ValidationTest, reduce_prod_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_prod_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_4(), true);
}

TEST_F(ValidationTest, reduce_prod_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_prod_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_prod_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod


namespace generated_tests::reduce_prod {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_prod

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod {

TEST_F(GeneratedTest, reduce_prod_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_prod_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_prod_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_prod::get_test_model_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_prod

