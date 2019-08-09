// Generated from reduce_min.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min) {
    Execute(device, ::generated_tests::reduce_min::get_test_model());
}

TEST_F(DynamicOutputShapeTest, reduce_min) {
    Execute(device, ::generated_tests::reduce_min::get_test_model(), true);
}

TEST_F(ValidationTest, reduce_min) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_min_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_min_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16(), true);
}

TEST_F(ValidationTest, reduce_min_float16) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_min_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, reduce_min_quant8) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_2(), true);
}

TEST_F(ValidationTest, reduce_min_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_min_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, reduce_min_float16_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_min_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_3(), true);
}

TEST_F(ValidationTest, reduce_min_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_min_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, reduce_min_float16_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_min_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_3(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_4(), true);
}

TEST_F(ValidationTest, reduce_min_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_min_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_min_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, reduce_min_float16_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_min_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_4(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min


namespace generated_tests::reduce_min {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::reduce_min

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min {

TEST_F(GeneratedTest, reduce_min_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, reduce_min_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, reduce_min_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::reduce_min::get_test_model_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_min

