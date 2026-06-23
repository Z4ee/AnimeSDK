#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_DAYHOURSEP_OFFSET UNITYSDK_OFFSET(0x966A00)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_END_OFFSET UNITYSDK_OFFSET(0x966B00)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_HOURMINUTESEP_OFFSET UNITYSDK_OFFSET(0x966A40)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_MINUTESECONDSEP_OFFSET UNITYSDK_OFFSET(0x966A80)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_SECONDFRACTIONSEP_OFFSET UNITYSDK_OFFSET(0x966AC0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_GET_START_OFFSET UNITYSDK_OFFSET(0x9669C0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INITINVARIANT_OFFSET UNITYSDK_OFFSET(0x1C4F0B30)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INIT_OFFSET UNITYSDK_OFFSET(0x966B40)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_FormatLiterals_TypeDefinitionIndex = 753;

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

		static ::System::Globalization::TimeSpanFormat_FormatLiterals InitInvariant(::System::Boolean isNegative)
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INITINVARIANT_OFFSET))(isNegative);
		}

		::System::Void Init(::System::String* format, ::System::Boolean useInvariantFieldLengths)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATLITERALS_INIT_OFFSET))(this, format, useInvariantFieldLengths);
		}
	};
}
