/**
 * MIT License
 *
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "SpringScrollViewTurboModule.h"

namespace rnoh {
    using namespace facebook;
    SpringScrollViewTurboModule::SpringScrollViewTurboModule(const ArkTSTurboModule::Context ctx,
                                                                 const std::string name)
        : ArkTSTurboModule(ctx, name) {
        methodMap_ = {
            ARK_METHOD_METADATA(startInnerAnimation, 3),
            ARK_METHOD_METADATA(startOuterAnimation, 3),
            ARK_METHOD_METADATA(startOuterHorizontalAnimation, 3),
            ARK_METHOD_METADATA(startInnerHorizontalAnimation, 3),
            ARK_METHOD_METADATA(startReboundAnimation, 3),
            ARK_METHOD_METADATA(startHorizontalReboundAnimation, 3),
            ARK_METHOD_METADATA(startEndRefresh, 3),
            ARK_METHOD_METADATA(startEndLoading, 3),
            ARK_METHOD_METADATA(startScrollX, 3),
            ARK_METHOD_METADATA(startScrollY, 3),
            ARK_METHOD_METADATA(cancelAnimation, 0),
        };
    }
} // namespace rnoh