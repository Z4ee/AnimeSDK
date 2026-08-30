#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_DAYHOURSEP_OFFSET UNITYSDK_OFFSET(0x3AEE260)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_END_OFFSET UNITYSDK_OFFSET(0x3AEE320)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_HOURMINUTESEP_OFFSET UNITYSDK_OFFSET(0x3AEE290)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_MINUTESECONDSEP_OFFSET UNITYSDK_OFFSET(0x3AEE2C0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_SECONDFRACTIONSEP_OFFSET UNITYSDK_OFFSET(0x3AEE2F0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_START_OFFSET UNITYSDK_OFFSET(0x3AEE230)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INITINVARIANT_OFFSET UNITYSDK_OFFSET(0x18D94A40)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INIT_OFFSET UNITYSDK_OFFSET(0x3AEE350)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_FormatLiterals_TypeDefinitionIndex = 769;

	struct alignas(8) TimeSpanFormat_FormatLiterals
	{
		::System::String* AppCompatLiteral; // 0x10
		::System::Int32 dd; // 0x18
		::System::Int32 hh; // 0x1C
		::System::Int32 mm; // 0x20
		::System::Int32 ss; // 0x24
		::System::Int32 ff; // 0x28
		::Il2CppArray<::System::String*>* literals; // 0x30

		::System::String* get_Start()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_START_OFFSET))(this);
		}

		::System::String* get_DayHourSep()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_DAYHOURSEP_OFFSET))(this);
		}

		::System::String* get_HourMinuteSep()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_HOURMINUTESEP_OFFSET))(this);
		}

		::System::String* get_MinuteSecondSep()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_MINUTESECONDSEP_OFFSET))(this);
		}

		::System::String* get_SecondFractionSep()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_SECONDFRACTIONSEP_OFFSET))(this);
		}

		::System::String* get_End()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_END_OFFSET))(this);
		}

		static ::System::Globalization::TimeSpanFormat_FormatLiterals InitInvariant(::System::Boolean a1)
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INITINVARIANT_OFFSET))(a1);
		}

		::System::Void Init(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INIT_OFFSET))(this, a1, a2);
		}
	};
}
