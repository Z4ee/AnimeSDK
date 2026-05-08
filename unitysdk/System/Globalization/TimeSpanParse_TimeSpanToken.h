#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TTT.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET UNITYSDK_OFFSET(0x8B7A10)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8B79F0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x8B79D0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanToken_TypeDefinitionIndex = 760;

	struct alignas(8) TimeSpanParse_TimeSpanToken
	{
		::System::Globalization::TimeSpanParse_TTT ttt; // 0x10
		::System::Int32 num; // 0x14
		::System::Int32 zeroes; // 0x18
		::System::String* sep; // 0x20

		::System::Void _ctor(::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_OFFSET))(this, number);
		}

		::System::Void _ctor_1(::System::Int32 leadingZeroes, ::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_1_OFFSET))(this, leadingZeroes, number);
		}

		::System::Boolean IsInvalidNumber(::System::Int32 maxValue, ::System::Int32 maxPrecision)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET))(this, maxValue, maxPrecision);
		}
	};
}
