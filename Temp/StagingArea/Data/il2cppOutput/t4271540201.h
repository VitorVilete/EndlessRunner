#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4260152181;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4271540201  : public t774292115
{
public:
	float f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4271540201, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}
};

struct t4271540201_SFs
{
public:
	t4260152181 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4271540201_SFs, f3)); }
	inline t4260152181 * fg3() const { return f3; }
	inline t4260152181 ** fag3() { return &f3; }
	inline void fs3(t4260152181 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
