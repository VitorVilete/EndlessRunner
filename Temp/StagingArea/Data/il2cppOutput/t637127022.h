﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2000248932;
struct t1468494371;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t637127022  : public Il2CppObject
{
public:
	t2000248932 * f0;
	t1468494371 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t637127022, f0)); }
	inline t2000248932 * fg0() const { return f0; }
	inline t2000248932 ** fag0() { return &f0; }
	inline void fs0(t2000248932 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t637127022, f1)); }
	inline t1468494371 * fg1() const { return f1; }
	inline t1468494371 ** fag1() { return &f1; }
	inline void fs1(t1468494371 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
