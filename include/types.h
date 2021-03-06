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


/* types.h - Standard definitions of types and default/constant values

Define most known primitives as u/s (un/signed) 8/16/32 (byte, hword, word).
NULL must be defined as a pointer to 0.

*/


#ifndef _INC_TYPES_H
#define _INC_TYPES_H

#define NULL ((void*)0)

typedef unsigned char	 u8;
typedef unsigned short	u16;
typedef unsigned int	u32;
typedef unsigned long   u64;

typedef signed char	    s8;
typedef signed short	s16;
typedef signed int	    s32;
typedef signed long     s64;

#define CAP(arr) ((u32)(sizeof(arr)/sizeof(arr[0])))
#define LIM(t) (((unsigned long long)1 << (sizeof(t) * sizeof(u8)*8)) - 1)

#endif
