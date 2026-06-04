#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TTT.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET UNITYSDK_OFFSET(0x3839350)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3839330)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x3839310)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanToken_TypeDefinitionIndex = 773;

	struct alignas(8) TimeSpanParse_TimeSpanToken
	{
		::System::Globalization::TimeSpanParse_TTT ttt; // 0x10
		::System::Int32 num; // 0x14
		::System::Int32 zeroes; // 0x18
		::System::String* sep; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInvalidNumber(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET))(this, a1, a2);
		}
	};
}
