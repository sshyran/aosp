// Generated from select_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_int32());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_int32) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_int32());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_float16());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_float16) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_float16());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_float16_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_relaxed());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_relaxed) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_relaxed());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_relaxed_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_quant8());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_quant8) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_quant8());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_one_dim_quant8_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_one_dim_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_one_dim_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_one_dim_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_one_dim_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_int32());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_int32) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_int32());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_float16());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_float16) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_float16());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_float16_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_relaxed());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_relaxed) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_relaxed());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_relaxed_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_quant8());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_quant8) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_quant8());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_two_dim_quant8_all_inputs_as_internal();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_two_dim_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_two_dim_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_two_dim_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_two_dim_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_five_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_five_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_five_dim());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_five_dim());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_five_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_five_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_int32());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_int32) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_int32) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_five_dim_int32());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_five_dim_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_five_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_five_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_float16());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_float16) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_float16) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_five_dim_float16());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_five_dim_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_five_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_five_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_relaxed());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_relaxed) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_relaxed) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_five_dim_relaxed());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_five_dim_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2


namespace generated_tests::select_v1_2 {

const ::test_helper::TestModel& get_test_model_five_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

TEST_F(GeneratedTest, select_v1_2_five_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_quant8());
}

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_quant8) {
    Execute(device, ::generated_tests::select_v1_2::get_test_model_five_dim_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_quant8) {
    const Model model = createModel(::generated_tests::select_v1_2::get_test_model_five_dim_quant8());
    const Request request = createRequest(::generated_tests::select_v1_2::get_test_model_five_dim_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

