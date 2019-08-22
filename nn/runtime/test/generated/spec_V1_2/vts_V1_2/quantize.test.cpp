// Generated from quantize.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, quantize_quant8) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_2) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_2) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, quantize_quant8_2) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_3();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_3) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_3());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_3) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_3(), true);
}

TEST_F(ValidationTest, quantize_quant8_3) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_3());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_4();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_4) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_4());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_4) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_4(), true);
}

TEST_F(ValidationTest, quantize_quant8_4) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_4());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_5();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_5) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_5());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_5) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_5(), true);
}

TEST_F(ValidationTest, quantize_quant8_5) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_5());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_6();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_6) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_6());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_6) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_6(), true);
}

TEST_F(ValidationTest, quantize_quant8_6) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_6());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_7();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_7) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_7());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_7) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_7(), true);
}

TEST_F(ValidationTest, quantize_quant8_7) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_7());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_8());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_8(), true);
}

TEST_F(ValidationTest, quantize_quant8_8) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_8());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, quantize_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, quantize_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_zero_sized) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, quantize_zero_sized) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, quantize_zero_sized) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_zero_sized_relaxed) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, quantize_zero_sized_relaxed) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, quantize_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize


namespace generated_tests::quantize {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

TEST_F(GeneratedTest, quantize_zero_sized_float16) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, quantize_zero_sized_float16) {
    Execute(device, ::generated_tests::quantize::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, quantize_zero_sized_float16) {
    const Model model = createModel(::generated_tests::quantize::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::quantize::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

