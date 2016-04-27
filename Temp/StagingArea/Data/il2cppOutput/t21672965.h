#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t3735866929;

#include "Il2CppObject.h"
#include "t2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t21672965  : public Il2CppObject
{
public:
	float f0;
	float f1;
	float f2;
	t2250949164  f3;
	int32_t f4;
	Il2CppObject * f5;
	t3735866929 * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t21672965, f0)); }
	inline float fg0() const { return f0; }
	inline float* fag0() { return &f0; }
	inline void fs0(float value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t21672965, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t21672965, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t21672965, f3)); }
	inline t2250949164  fg3() const { return f3; }
	inline t2250949164 * fag3() { return &f3; }
	inline void fs3(t2250949164  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t21672965, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t21672965, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t21672965, f6)); }
	inline t3735866929 * fg6() const { return f6; }
	inline t3735866929 ** fag6() { return &f6; }
	inline void fs6(t3735866929 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
