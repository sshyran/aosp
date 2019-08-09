// Generated from gather.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather) {
    Execute(device, ::generated_tests::gather::get_test_model());
}

TEST_F(DynamicOutputShapeTest, gather) {
    Execute(device, ::generated_tests::gather::get_test_model(), true);
}

TEST_F(ValidationTest, gather) {
    const Model model = createModel(::generated_tests::gather::get_test_model());
    const Request request = createRequest(::generated_tests::gather::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, gather_relaxed) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, gather_quant8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, gather_quant8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32) {
    Execute(device, ::generated_tests::gather::get_test_model_int32());
}

TEST_F(DynamicOutputShapeTest, gather_int32) {
    Execute(device, ::generated_tests::gather::get_test_model_int32(), true);
}

TEST_F(ValidationTest, gather_int32) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16) {
    Execute(device, ::generated_tests::gather::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, gather_float16) {
    Execute(device, ::generated_tests::gather::get_test_model_float16(), true);
}

TEST_F(ValidationTest, gather_float16) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_2) {
    Execute(device, ::generated_tests::gather::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, gather_2) {
    Execute(device, ::generated_tests::gather::get_test_model_2(), true);
}

TEST_F(ValidationTest, gather_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_2) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_2) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, gather_relaxed_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_2) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_2) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, gather_quant8_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_2) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_2());
}

TEST_F(DynamicOutputShapeTest, gather_int32_2) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_2(), true);
}

TEST_F(ValidationTest, gather_int32_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_2) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, gather_float16_2) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, gather_float16_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_3) {
    Execute(device, ::generated_tests::gather::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, gather_3) {
    Execute(device, ::generated_tests::gather::get_test_model_3(), true);
}

TEST_F(ValidationTest, gather_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_3) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_3) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, gather_relaxed_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_3) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_3());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_3) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_3(), true);
}

TEST_F(ValidationTest, gather_quant8_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_3) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_3());
}

TEST_F(DynamicOutputShapeTest, gather_int32_3) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_3(), true);
}

TEST_F(ValidationTest, gather_int32_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_3) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, gather_float16_3) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, gather_float16_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_4) {
    Execute(device, ::generated_tests::gather::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, gather_4) {
    Execute(device, ::generated_tests::gather::get_test_model_4(), true);
}

TEST_F(ValidationTest, gather_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_4) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_4) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, gather_relaxed_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_4) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_4());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_4) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_4(), true);
}

TEST_F(ValidationTest, gather_quant8_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_4) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_4());
}

TEST_F(DynamicOutputShapeTest, gather_int32_4) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_4(), true);
}

TEST_F(ValidationTest, gather_int32_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_4) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, gather_float16_4) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, gather_float16_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_5) {
    Execute(device, ::generated_tests::gather::get_test_model_5());
}

TEST_F(DynamicOutputShapeTest, gather_5) {
    Execute(device, ::generated_tests::gather::get_test_model_5(), true);
}

TEST_F(ValidationTest, gather_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_5) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_5) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_5(), true);
}

TEST_F(ValidationTest, gather_relaxed_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_5) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_5());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_5) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_5(), true);
}

TEST_F(ValidationTest, gather_quant8_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_5) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_5());
}

TEST_F(DynamicOutputShapeTest, gather_int32_5) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_5(), true);
}

TEST_F(ValidationTest, gather_int32_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_5) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_5());
}

TEST_F(DynamicOutputShapeTest, gather_float16_5) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_5(), true);
}

TEST_F(ValidationTest, gather_float16_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_6) {
    Execute(device, ::generated_tests::gather::get_test_model_6());
}

TEST_F(DynamicOutputShapeTest, gather_6) {
    Execute(device, ::generated_tests::gather::get_test_model_6(), true);
}

TEST_F(ValidationTest, gather_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_6) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_6) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_6(), true);
}

TEST_F(ValidationTest, gather_relaxed_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_6) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_6());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_6) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_6(), true);
}

TEST_F(ValidationTest, gather_quant8_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_6) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_6());
}

TEST_F(DynamicOutputShapeTest, gather_int32_6) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_6(), true);
}

TEST_F(ValidationTest, gather_int32_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_6) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_6());
}

TEST_F(DynamicOutputShapeTest, gather_float16_6) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_6(), true);
}

TEST_F(ValidationTest, gather_float16_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_7) {
    Execute(device, ::generated_tests::gather::get_test_model_7());
}

TEST_F(DynamicOutputShapeTest, gather_7) {
    Execute(device, ::generated_tests::gather::get_test_model_7(), true);
}

TEST_F(ValidationTest, gather_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_7) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_7) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_7(), true);
}

TEST_F(ValidationTest, gather_relaxed_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_7) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_7());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_7) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_7(), true);
}

TEST_F(ValidationTest, gather_quant8_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_7) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_7());
}

TEST_F(DynamicOutputShapeTest, gather_int32_7) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_7(), true);
}

TEST_F(ValidationTest, gather_int32_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_7) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_7());
}

TEST_F(DynamicOutputShapeTest, gather_float16_7) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_7(), true);
}

TEST_F(ValidationTest, gather_float16_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_8) {
    Execute(device, ::generated_tests::gather::get_test_model_8());
}

TEST_F(DynamicOutputShapeTest, gather_8) {
    Execute(device, ::generated_tests::gather::get_test_model_8(), true);
}

TEST_F(ValidationTest, gather_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, gather_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, gather_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_8) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_8) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_8(), true);
}

TEST_F(ValidationTest, gather_relaxed_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, gather_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, gather_relaxed_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_relaxed_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_8());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_8(), true);
}

TEST_F(ValidationTest, gather_quant8_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, gather_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, gather_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_int32_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_int32_8) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_8());
}

TEST_F(DynamicOutputShapeTest, gather_int32_8) {
    Execute(device, ::generated_tests::gather::get_test_model_int32_8(), true);
}

TEST_F(ValidationTest, gather_int32_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_int32_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_int32_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_8) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_8());
}

TEST_F(DynamicOutputShapeTest, gather_float16_8) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_8(), true);
}

TEST_F(ValidationTest, gather_float16_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather


namespace generated_tests::gather {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

TEST_F(GeneratedTest, gather_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, gather_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, gather_float16_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::gather::get_test_model_float16_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

