/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Utils.h"

#include <gtest/gtest.h>

namespace {

using namespace ::android::nn;

class ComplianceTest : public ::testing::Test {
   protected:
    virtual void SetUp() {}
};

namespace tanh_quantized {
#include "generated/vts_models/tanh_quantized.model.cpp"
}  // namespace tanh_quantized

TEST_F(ComplianceTest, tanh_quantized) {
    Model model = tanh_quantized::createTestModel();

    ASSERT_FALSE(compliantWithV1_1(model));
    ASSERT_FALSE(compliantWithV1_0(model));
}

namespace sub_quantized {
#include "generated/vts_models/sub_quantized.model.cpp"
}  // namespace sub_quantized

TEST_F(ComplianceTest, sub_quantized) {
    Model model = sub_quantized::createTestModel();

    ASSERT_FALSE(compliantWithV1_1(model));
    ASSERT_FALSE(compliantWithV1_0(model));
}

}  // end namespace
