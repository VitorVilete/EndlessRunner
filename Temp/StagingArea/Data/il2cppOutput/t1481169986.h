#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1366199518;
struct t2038051575;
struct t224878301;
struct t1481169986;

#include "t774292115.h"
#include "t465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1481169986  : public t774292115
{
public:
	float f2;
	t465617797  f3;
	t1366199518 * f4;
	t2038051575 * f5;
	float f6;
	t224878301 * f7;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1481169986, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1481169986, f3)); }
	inline t465617797  fg3() const { return f3; }
	inline t465617797 * fag3() { return &f3; }
	inline void fs3(t465617797  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1481169986, f4)); }
	inline t1366199518 * fg4() const { return f4; }
	inline t1366199518 ** fag4() { return &f4; }
	inline void fs4(t1366199518 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1481169986, f5)); }
	inline t2038051575 * fg5() const { return f5; }
	inline t2038051575 ** fag5() { return &f5; }
	inline void fs5(t2038051575 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1481169986, f6)); }
	inline float fg6() const { return f6; }
	inline float* fag6() { return &f6; }
	inline void fs6(float value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1481169986, f7)); }
	inline t224878301 * fg7() const { return f7; }
	inline t224878301 ** fag7() { return &f7; }
	inline void fs7(t224878301 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t1481169986_SFs
{
public:
	t1481169986 * f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1481169986_SFs, f8)); }
	inline t1481169986 * fg8() const { return f8; }
	inline t1481169986 ** fag8() { return &f8; }
	inline void fs8(t1481169986 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
