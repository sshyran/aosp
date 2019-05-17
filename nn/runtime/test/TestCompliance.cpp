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

#include "TestCompliance.h"

#include <gtest/gtest.h>

#include "ModelBuilder.h"
#include "TestNeuralNetworksWrapper.h"
#include "Utils.h"

namespace compliance_test {

using namespace ::android::nn;
using HidlModel = V1_2::Model;
using WrapperModel = test_wrapper::Model;

// Creates a HIDL model from a creator of the wrapper model.
static HidlModel createHidlModel(std::function<void(WrapperModel*)> createModel) {
    HidlModel hidlModel;
    WrapperModel wrapperModel;
    createModel(&wrapperModel);
    ModelBuilder* modelBuilder = reinterpret_cast<ModelBuilder*>(wrapperModel.getHandle());
    modelBuilder->setHidlModel(&hidlModel);
    return hidlModel;
}

void ComplianceTest::testAvailableSinceV1_2(std::function<void(WrapperModel*)> createModel) {
    HidlModel model = createHidlModel(createModel);
    ASSERT_FALSE(compliantWithV1_1(model));
    ASSERT_FALSE(compliantWithV1_0(model));
}

void ComplianceTest::testAvailableSinceV1_1(std::function<void(WrapperModel*)> createModel) {
    HidlModel model = createHidlModel(createModel);
    ASSERT_TRUE(compliantWithV1_1(model));
    ASSERT_FALSE(compliantWithV1_0(model));
}

void ComplianceTest::testAvailableSinceV1_0(std::function<void(WrapperModel*)> createModel) {
    HidlModel model = createHidlModel(createModel);
    ASSERT_TRUE(compliantWithV1_1(model));
    ASSERT_TRUE(compliantWithV1_0(model));
}

}  // namespace compliance_test
