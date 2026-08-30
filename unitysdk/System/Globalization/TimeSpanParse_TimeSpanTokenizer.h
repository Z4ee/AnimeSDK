#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_BACKONE_OFFSET UNITYSDK_OFFSET(0x3AEEC90)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GETNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x3AEEC40)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_CURRENTCHAR_OFFSET UNITYSDK_OFFSET(0x3AEECE0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_EOL_OFFSET UNITYSDK_OFFSET(0x3AEEC60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x3AEECA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_INIT_1_OFFSET UNITYSDK_OFFSET(0x379C360)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_INIT_OFFSET UNITYSDK_OFFSET(0x3AEEC30)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanTokenizer_TypeDefinitionIndex = 777;

	struct alignas(8) TimeSpanParse_TimeSpanTokenizer
	{
		::System::Int32 m_pos; // 0x10
		::System::String* m_value; // 0x18

		::System::Void Init(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_INIT_OFFSET))(this, a1);
		}

		::System::Void Init_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_INIT_1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Globalization::TimeSpanParse_TimeSpanToken GetNextToken()
		{
			return ((::System::Globalization::TimeSpanParse_TimeSpanToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GETNEXTTOKEN_OFFSET))(this);
		}
		*/

		::System::Boolean get_EOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_EOL_OFFSET))(this);
		}

		::System::Void BackOne()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_BACKONE_OFFSET))(this);
		}

		::System::Char get_NextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_NEXTCHAR_OFFSET))(this);
		}

		::System::Char get_CurrentChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKENIZER_GET_CURRENTCHAR_OFFSET))(this);
		}
	};
}
