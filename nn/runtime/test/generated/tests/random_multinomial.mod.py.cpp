// clang-format off
// Generated file (from: random_multinomial.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace random_multinomial {
// Generated random_multinomial test
#include "generated/examples/random_multinomial.example.cpp"
// Generated model constructor
#include "generated/models/random_multinomial.model.cpp"
} // namespace random_multinomial

TEST_F(GeneratedTests, random_multinomial) {
    execute(random_multinomial::CreateModel,
            random_multinomial::is_ignored,
            random_multinomial::examples);
}

