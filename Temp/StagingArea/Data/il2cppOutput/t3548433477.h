﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3099937104;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3548433477  : public t774292115
{
public:
	t3099937104 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3548433477, f2)); }
	inline t3099937104 * fg2() const { return f2; }
	inline t3099937104 ** fag2() { return &f2; }
	inline void fs2(t3099937104 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif