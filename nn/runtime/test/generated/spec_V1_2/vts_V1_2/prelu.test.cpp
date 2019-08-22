// Generated from prelu.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu) {
    Execute(device, ::generated_tests::prelu::get_test_model());
}

TEST_F(DynamicOutputShapeTest, prelu) {
    Execute(device, ::generated_tests::prelu::get_test_model(), true);
}

TEST_F(ValidationTest, prelu) {
    const Model model = createModel(::generated_tests::prelu::get_test_model());
    const Request request = createRequest(::generated_tests::prelu::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_relaxed) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, prelu_relaxed) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, prelu_relaxed) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, prelu_quant8) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_2) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_3());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_3) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_3());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_3());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_3) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_3());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_4());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_4) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_4());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_4());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_4) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_4());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_float16) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, prelu_float16) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16(), true);
}

TEST_F(ValidationTest, prelu_float16) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_float16());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu


namespace generated_tests::prelu {

const ::test_helper::TestModel& get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

TEST_F(GeneratedTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::prelu::get_test_model_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

