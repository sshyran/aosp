/*
 * Copyright (C) 2017 The Android Open Source Project
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

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_TEST_TEST_GENERATED_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_TEST_TEST_GENERATED_H

#include <gtest/gtest.h>
#include "TestHarness.h"
#include "TestNeuralNetworksWrapper.h"

namespace android::nn::generated_tests {

class GeneratedTestBase
    : public ::testing::TestWithParam<test_helper::TestModelManager::TestParam> {
   protected:
    const test_helper::TestModel& testModel = *GetParam().second;
};

#define INSTANTIATE_GENERATED_TEST(TestSuite, filter)                                          \
    INSTANTIATE_TEST_SUITE_P(                                                                  \
            TestGenerated, TestSuite,                                                          \
            ::testing::ValuesIn(::test_helper::TestModelManager::get().getTestModels(filter)), \
            [](const auto& info) { return info.param.first; })

// Convert TestModel to NDK model.
void createModel(const test_helper::TestModel& testModel, bool testDynamicOutputShape,
                 test_wrapper::Model* model);
inline void createModel(const test_helper::TestModel& testModel, test_wrapper::Model* model) {
    createModel(testModel, /*testDynamicOutputShape=*/false, model);
}

}  // namespace android::nn::generated_tests

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_TEST_TEST_GENERATED_H
