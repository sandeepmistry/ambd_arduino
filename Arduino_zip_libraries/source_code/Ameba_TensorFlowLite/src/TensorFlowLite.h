/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_MICRO_TOOLS_MAKE_TEMPLATES_TENSORFLOWLITE_H_
#define TENSORFLOW_LITE_MICRO_TOOLS_MAKE_TEMPLATES_TENSORFLOWLITE_H_

// This header is deliberately empty, and is only present because including it
// in a .ino sketch forces the Arduino toolchain to build the rest of the
// library.

// Undefine conflicting defines for compatibility with Realtek Ameba development boards
#undef min
#undef max
#undef DEFAULT

#endif  // TENSORFLOW_LITE_MICRO_TOOLS_MAKE_TEMPLATES_TENSORFLOWLITE_H_