// clang-format off
// Generated file (from: lstm2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm2 {
// Generated lstm2 test
#include "generated/examples/lstm2.example.cpp"
// Generated model constructor
#include "generated/models/lstm2.model.cpp"
} // namespace lstm2

TEST_F(GeneratedTests, lstm2) {
    execute(lstm2::CreateModel,
            lstm2::is_ignored,
            lstm2::examples);
}

