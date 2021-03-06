/*
   Copyright 2018-2019 Alexandru-Paul Copil

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/


/* conv.h - Type conversion

Convert primitive types to strings and back. This library depends on string
buffers being passed as routine arguments.

*/


#ifndef _INC_CONV_H
#define _INC_CONV_H

#include "types.h"

extern void conv_hex_str(void* bufr, u32 value);
extern void conv_u32_str(void* bufr, u32 value);
extern void conv_s32_str(void* bufr, s32 value);

extern u32 conv_hex_u32(const char* hex);
extern u32 conv_str_u32(const char* str);

#endif
