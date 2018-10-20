// clang-format off
// Generated file (from: channel_shuffle.mod.py). Do not edit
void CreateModel_dim4_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim3_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim2_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim1_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dim1_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim3_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim2_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim1_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_dim1_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim3_axis2_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim2_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim2_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim2_axis1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim2_axis1_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim1_axis0(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_dim1_axis0_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {12});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 12, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

