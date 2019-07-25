// Generated from fully_connected_float_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_float_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {0.091327f, 0.103366f, -0.316505f, -0.08312f, 0.149366f, -0.196636f, -0.123672f, 0.0628f, 0.063031f, 0.19167f, -0.062001f, -0.061504f, -0.275581f, 0.059388f, -0.118497f, -0.079224f, 0.109758f, 0.008307f, -0.062657f, -0.060962f, -0.049782f, -0.106719f, -0.319482f, -0.10365f, 0.266455f, 0.051517f, -0.123448f, 0.322464f, 0.043282f, -0.173782f, -0.190381f, 0.002013f, 0.096086f, 0.131157f, 0.031164f, 0.100638f, -0.312191f, -0.080923f, -0.101318f, -0.116614f, 0.142238f, 0.08654f, -0.139154f, 0.174268f, -0.073161f, 0.080072f, 0.006874f, 0.229382f, -0.104321f, -0.176035f, -0.208587f, -0.001019f, -0.162032f, 0.080824f, -0.025021f, 0.07446f, -0.252595f, -0.16175f, -0.136403f, 0.008308f, 0.00571f, 0.0966f, 0.289839f, 0.218816f, -0.304651f, -0.070958f, 0.054598f, 0.147113f, -0.139112f, -0.072798f, -0.163335f, -0.167863f, -0.128762f, -0.03578f, 0.117262f, 0.017177f, 0.263335f, -0.176612f, 0.262961f, -0.093654f, -0.339283f, 0.333071f, 0.180827f, 0.287583f, 0.06635f, -0.197947f, -0.114449f, -0.236035f, 0.103532f, -0.034284f, 0.093299f, -0.145361f, 0.054001f, 0.25057f, 0.15701f, -0.14348f, -0.139061f, -0.048873f, 0.067557f, 0.139038f, 0.324106f, 0.227041f, 0.037793f, -0.225747f, -0.241619f, 0.357835f, 0.135762f, -0.306764f, -0.125982f, 0.091916f, 0.266587f, 0.030135f, 0.265148f, 0.141627f, 0.02012f, 0.083815f, -0.124556f, -0.100124f, -0.048159f, 0.181172f, 0.302309f, -0.041084f, 0.146334f, -0.061511f, -0.232605f, 0.281324f, 0.145408f, -0.221897f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 128);
  static float b0_init[] = {-0.160594f, 0.20577f, -0.078307f, -0.077984f, 0.001937f, 0.01586f, 0.03681f, 0.012346f, 0.001028f, 0.038551f, 0.075415f, 0.020804f, 0.048478f, -0.03227f, 0.175688f, -0.085662f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 16);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {0.091327f, 0.103366f, -0.316505f, -0.08312f, 0.149366f, -0.196636f, -0.123672f, 0.0628f, 0.063031f, 0.19167f, -0.062001f, -0.061504f, -0.275581f, 0.059388f, -0.118497f, -0.079224f, 0.109758f, 0.008307f, -0.062657f, -0.060962f, -0.049782f, -0.106719f, -0.319482f, -0.10365f, 0.266455f, 0.051517f, -0.123448f, 0.322464f, 0.043282f, -0.173782f, -0.190381f, 0.002013f, 0.096086f, 0.131157f, 0.031164f, 0.100638f, -0.312191f, -0.080923f, -0.101318f, -0.116614f, 0.142238f, 0.08654f, -0.139154f, 0.174268f, -0.073161f, 0.080072f, 0.006874f, 0.229382f, -0.104321f, -0.176035f, -0.208587f, -0.001019f, -0.162032f, 0.080824f, -0.025021f, 0.07446f, -0.252595f, -0.16175f, -0.136403f, 0.008308f, 0.00571f, 0.0966f, 0.289839f, 0.218816f, -0.304651f, -0.070958f, 0.054598f, 0.147113f, -0.139112f, -0.072798f, -0.163335f, -0.167863f, -0.128762f, -0.03578f, 0.117262f, 0.017177f, 0.263335f, -0.176612f, 0.262961f, -0.093654f, -0.339283f, 0.333071f, 0.180827f, 0.287583f, 0.06635f, -0.197947f, -0.114449f, -0.236035f, 0.103532f, -0.034284f, 0.093299f, -0.145361f, 0.054001f, 0.25057f, 0.15701f, -0.14348f, -0.139061f, -0.048873f, 0.067557f, 0.139038f, 0.324106f, 0.227041f, 0.037793f, -0.225747f, -0.241619f, 0.357835f, 0.135762f, -0.306764f, -0.125982f, 0.091916f, 0.266587f, 0.030135f, 0.265148f, 0.141627f, 0.02012f, 0.083815f, -0.124556f, -0.100124f, -0.048159f, 0.181172f, 0.302309f, -0.041084f, 0.146334f, -0.061511f, -0.232605f, 0.281324f, 0.145408f, -0.221897f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 128);
  static float b0_init[] = {-0.160594f, 0.20577f, -0.078307f, -0.077984f, 0.001937f, 0.01586f, 0.03681f, 0.012346f, 0.001028f, 0.038551f, 0.075415f, 0.020804f, 0.048478f, -0.03227f, 0.175688f, -0.085662f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 16);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.091327f, 0.103366f, -0.316505f, -0.08312f, 0.149366f, -0.196636f, -0.123672f, 0.0628f, 0.063031f, 0.19167f, -0.062001f, -0.061504f, -0.275581f, 0.059388f, -0.118497f, -0.079224f, 0.109758f, 0.008307f, -0.062657f, -0.060962f, -0.049782f, -0.106719f, -0.319482f, -0.10365f, 0.266455f, 0.051517f, -0.123448f, 0.322464f, 0.043282f, -0.173782f, -0.190381f, 0.002013f, 0.096086f, 0.131157f, 0.031164f, 0.100638f, -0.312191f, -0.080923f, -0.101318f, -0.116614f, 0.142238f, 0.08654f, -0.139154f, 0.174268f, -0.073161f, 0.080072f, 0.006874f, 0.229382f, -0.104321f, -0.176035f, -0.208587f, -0.001019f, -0.162032f, 0.080824f, -0.025021f, 0.07446f, -0.252595f, -0.16175f, -0.136403f, 0.008308f, 0.00571f, 0.0966f, 0.289839f, 0.218816f, -0.304651f, -0.070958f, 0.054598f, 0.147113f, -0.139112f, -0.072798f, -0.163335f, -0.167863f, -0.128762f, -0.03578f, 0.117262f, 0.017177f, 0.263335f, -0.176612f, 0.262961f, -0.093654f, -0.339283f, 0.333071f, 0.180827f, 0.287583f, 0.06635f, -0.197947f, -0.114449f, -0.236035f, 0.103532f, -0.034284f, 0.093299f, -0.145361f, 0.054001f, 0.25057f, 0.15701f, -0.14348f, -0.139061f, -0.048873f, 0.067557f, 0.139038f, 0.324106f, 0.227041f, 0.037793f, -0.225747f, -0.241619f, 0.357835f, 0.135762f, -0.306764f, -0.125982f, 0.091916f, 0.266587f, 0.030135f, 0.265148f, 0.141627f, 0.02012f, 0.083815f, -0.124556f, -0.100124f, -0.048159f, 0.181172f, 0.302309f, -0.041084f, 0.146334f, -0.061511f, -0.232605f, 0.281324f, 0.145408f, -0.221897f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 128);
  static float b0_init[] = {-0.160594f, 0.20577f, -0.078307f, -0.077984f, 0.001937f, 0.01586f, 0.03681f, 0.012346f, 0.001028f, 0.038551f, 0.075415f, 0.020804f, 0.048478f, -0.03227f, 0.175688f, -0.085662f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 16);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type6);
  auto param1 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.091327f, 0.103366f, -0.316505f, -0.08312f, 0.149366f, -0.196636f, -0.123672f, 0.0628f, 0.063031f, 0.19167f, -0.062001f, -0.061504f, -0.275581f, 0.059388f, -0.118497f, -0.079224f, 0.109758f, 0.008307f, -0.062657f, -0.060962f, -0.049782f, -0.106719f, -0.319482f, -0.10365f, 0.266455f, 0.051517f, -0.123448f, 0.322464f, 0.043282f, -0.173782f, -0.190381f, 0.002013f, 0.096086f, 0.131157f, 0.031164f, 0.100638f, -0.312191f, -0.080923f, -0.101318f, -0.116614f, 0.142238f, 0.08654f, -0.139154f, 0.174268f, -0.073161f, 0.080072f, 0.006874f, 0.229382f, -0.104321f, -0.176035f, -0.208587f, -0.001019f, -0.162032f, 0.080824f, -0.025021f, 0.07446f, -0.252595f, -0.16175f, -0.136403f, 0.008308f, 0.00571f, 0.0966f, 0.289839f, 0.218816f, -0.304651f, -0.070958f, 0.054598f, 0.147113f, -0.139112f, -0.072798f, -0.163335f, -0.167863f, -0.128762f, -0.03578f, 0.117262f, 0.017177f, 0.263335f, -0.176612f, 0.262961f, -0.093654f, -0.339283f, 0.333071f, 0.180827f, 0.287583f, 0.06635f, -0.197947f, -0.114449f, -0.236035f, 0.103532f, -0.034284f, 0.093299f, -0.145361f, 0.054001f, 0.25057f, 0.15701f, -0.14348f, -0.139061f, -0.048873f, 0.067557f, 0.139038f, 0.324106f, 0.227041f, 0.037793f, -0.225747f, -0.241619f, 0.357835f, 0.135762f, -0.306764f, -0.125982f, 0.091916f, 0.266587f, 0.030135f, 0.265148f, 0.141627f, 0.02012f, 0.083815f, -0.124556f, -0.100124f, -0.048159f, 0.181172f, 0.302309f, -0.041084f, 0.146334f, -0.061511f, -0.232605f, 0.281324f, 0.145408f, -0.221897f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 128);
  static float b0_init[] = {-0.160594f, 0.20577f, -0.078307f, -0.077984f, 0.001937f, 0.01586f, 0.03681f, 0.012346f, 0.001028f, 0.038551f, 0.075415f, 0.020804f, 0.048478f, -0.03227f, 0.175688f, -0.085662f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 16);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type4);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy4 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param3}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy4, param4}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
namespace generated_tests::fully_connected_float_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type6);
  auto param6 = model->addOperand(&type4);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy6, param6}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy7, param7}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_float_2
