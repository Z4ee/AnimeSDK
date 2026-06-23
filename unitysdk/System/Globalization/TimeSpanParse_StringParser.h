#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x9CE120)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTNONDIGIT_OFFSET UNITYSDK_OFFSET(0x9CE1B0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSEINT_OFFSET UNITYSDK_OFFSET(0x9CE280)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x9CE290)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_SKIPBLANKS_OFFSET UNITYSDK_OFFSET(0x9CE2A0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9CE270)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_StringParser_TypeDefinitionIndex = 764;

	struct alignas(8) TimeSpanParse_StringParser
	{
		::System::String* str; // 0x10
		::System::Char ch; // 0x18
		::System::Int32 pos; // 0x1C
		::System::Int32 len; // 0x20

		::System::Void NextChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTCHAR_OFFSET))(this);
		}

		::System::Char NextNonDigit()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTNONDIGIT_OFFSET))(this);
		}

		/*
		::System::Boolean TryParse(::System::String* input, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_TRYPARSE_OFFSET))(this, input, result);
		}
		*/

		/*
		::System::Boolean ParseInt(::System::Int32 max, ::System::Int32& i, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSEINT_OFFSET))(this, max, i, result);
		}
		*/

		/*
		::System::Boolean ParseTime(::System::Int64& time, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSETIME_OFFSET))(this, time, result);
		}
		*/

		::System::Void SkipBlanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_SKIPBLANKS_OFFSET))(this);
		}
	};
}
