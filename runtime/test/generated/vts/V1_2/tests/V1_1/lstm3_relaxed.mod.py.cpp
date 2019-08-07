// Generated from lstm3_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::lstm3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::lstm3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, lstm3_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::lstm3_relaxed::get_examples());
}

TEST_F(ValidationTest, lstm3_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::lstm3_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_relaxed

namespace generated_tests::lstm3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::lstm3_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_relaxed {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, lstm3_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::lstm3_relaxed::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, lstm3_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::lstm3_relaxed::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_relaxed
