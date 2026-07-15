#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x39524F0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_NEXTNONDIGIT_OFFSET UNITYSDK_OFFSET(0x3952560)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSEINT_OFFSET UNITYSDK_OFFSET(0x3952600)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x3952610)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_SKIPBLANKS_OFFSET UNITYSDK_OFFSET(0x3952620)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x39525F0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_StringParser_TypeDefinitionIndex = 777;

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
		::System::Boolean TryParse(::System::String* a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_TRYPARSE_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Boolean ParseInt(::System::Int32 a1, ::System::Int32& a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSEINT_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::System::Boolean ParseTime(::System::Int64& a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_PARSETIME_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void SkipBlanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_STRINGPARSER_SKIPBLANKS_OFFSET))(this);
		}
	};
}
