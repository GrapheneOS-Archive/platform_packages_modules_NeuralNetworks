// clang-format off
// Generated file (from: reshape_weights_as_inputs.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reshape_weights_as_inputs {
// Generated reshape_weights_as_inputs test
#include "generated/examples/reshape_weights_as_inputs.example.cpp"
// Generated model constructor
#include "generated/models/reshape_weights_as_inputs.model.cpp"
} // namespace reshape_weights_as_inputs

TEST_F(GeneratedTests, reshape_weights_as_inputs) {
    execute(reshape_weights_as_inputs::CreateModel,
            reshape_weights_as_inputs::is_ignored,
            reshape_weights_as_inputs::examples);
}

