// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace mul {
std::vector<MixedTypedExample> examples = {
// Generated mul test
#include "generated/examples/mul.example.cpp"
};
// Generated model constructor
#include "generated/models/mul.model.cpp"
} // namespace mul
TEST_F(GeneratedTests, mul) {
    execute(mul::CreateModel,
            mul::is_ignored,
            mul::examples);
}
