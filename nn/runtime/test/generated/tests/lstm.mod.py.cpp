// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace lstm {
std::vector<MixedTypedExample> examples = {
// Generated lstm test
#include "generated/examples/lstm.example.cpp"
};
// Generated model constructor
#include "generated/models/lstm.model.cpp"
} // namespace lstm
TEST_F(GeneratedTests, lstm) {
    execute(lstm::CreateModel,
            lstm::is_ignored,
            lstm::examples);
}