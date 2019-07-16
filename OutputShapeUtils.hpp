//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <armnn/ArmNN.hpp>

namespace armnn_driver
{

bool IsDynamicOutput(const armnn::TensorInfo& outputInfo);

armnn::TensorShape InferMaximumOutputShape(const armnn::TensorShape& input0Shape,
                                           const armnn::TensorShape& input1Shape);

armnn::TensorShape InferPadOutputShape(const armnn::TensorShape& inputShape,
                                       const std::vector<std::pair<unsigned int, unsigned int>>& padList);

armnn::TensorShape InferPreluOutputShape(const armnn::TensorShape& inputShape, const armnn::TensorShape& alphaShape);

armnn::TensorShape InferSubOutputShape(const armnn::TensorShape& input0Shape, const armnn::TensorShape& input1Shape);

} // namespace armnn_driver

