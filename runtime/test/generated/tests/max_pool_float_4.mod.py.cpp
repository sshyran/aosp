// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace max_pool_float_4 {
std::vector<MixedTypedExample> examples = {
// Generated max_pool_float_4 test
#include "generated/examples/max_pool_float_4.example.cpp"
};
// Generated model constructor
#include "generated/models/max_pool_float_4.model.cpp"
} // namespace max_pool_float_4
TEST_F(GeneratedTests, max_pool_float_4) {
    execute(max_pool_float_4::CreateModel,
            max_pool_float_4::is_ignored,
            max_pool_float_4::examples);
}
