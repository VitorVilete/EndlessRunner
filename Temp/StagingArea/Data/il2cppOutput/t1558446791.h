﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t1145979430.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1558446791  : public t1145979430
{
public:
	String_t* f12;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1558446791, f12)); }
	inline String_t* fg12() const { return f12; }
	inline String_t** fag12() { return &f12; }
	inline void fs12(String_t* value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
