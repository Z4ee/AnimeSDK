#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int FunctionId_TypeDefinitionIndex = 37028;

	enum class FunctionId : ::System::Int32
	{
		none = -1,
		Ascii = 0,
		Char = 1,
		Charindex = 2,
		Difference = 3,
		Len = 4,
		Lower = 5,
		LTrim = 6,
		Patindex = 7,
		Replicate = 8,
		Reverse = 9,
		Right = 10,
		RTrim = 11,
		Soundex = 12,
		Space = 13,
		Str = 14,
		Stuff = 15,
		Substring = 16,
		Upper = 17,
		IsNull = 18,
		Iif = 19,
		Convert = 20,
		cInt = 21,
		cBool = 22,
		cDate = 23,
		cDbl = 24,
		cStr = 25,
		Abs = 26,
		Acos = 27,
		In = 28,
		Trim = 29,
		Sum = 30,
		Avg = 31,
		Min = 32,
		Max = 33,
		Count = 34,
		StDev = 35,
		Var = 37,
		DateTimeOffset = 38,
	};
}
