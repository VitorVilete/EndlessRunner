#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2005073387;
struct t1366199518;
struct t3422405329;
struct t2921151085;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3422405329  : public t774292115
{
public:
	t2005073387* f2;
	t1366199518 * f3;
	t2921151085 * f5;
	t2921151085 * f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3422405329, f2)); }
	inline t2005073387* fg2() const { return f2; }
	inline t2005073387** fag2() { return &f2; }
	inline void fs2(t2005073387* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3422405329, f3)); }
	inline t1366199518 * fg3() const { return f3; }
	inline t1366199518 ** fag3() { return &f3; }
	inline void fs3(t1366199518 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3422405329, f5)); }
	inline t2921151085 * fg5() const { return f5; }
	inline t2921151085 ** fag5() { return &f5; }
	inline void fs5(t2921151085 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3422405329, f6)); }
	inline t2921151085 * fg6() const { return f6; }
	inline t2921151085 ** fag6() { return &f6; }
	inline void fs6(t2921151085 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

struct t3422405329_SFs
{
public:
	t3422405329 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3422405329_SFs, f4)); }
	inline t3422405329 * fg4() const { return f4; }
	inline t3422405329 ** fag4() { return &f4; }
	inline void fs4(t3422405329 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
