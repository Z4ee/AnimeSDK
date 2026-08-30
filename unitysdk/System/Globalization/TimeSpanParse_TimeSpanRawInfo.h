#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_FormatLiterals.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TTT.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDNUM_OFFSET UNITYSDK_OFFSET(0x3AEE9B0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDSEP_OFFSET UNITYSDK_OFFSET(0x3AEE9A0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE740)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE880)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE900)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE800)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE840)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE940)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE8C0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE7C0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0x3AEE610)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0x3AEE6D0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0x3AEE5C0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0x3AEE660)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_INIT_OFFSET UNITYSDK_OFFSET(0x3AEE980)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0x3AEE780)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x3AEE990)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanRawInfo_TypeDefinitionIndex = 778;

	struct alignas(8) TimeSpanParse_TimeSpanRawInfo
	{
		::System::Globalization::TimeSpanParse_TTT lastSeenTTT; // 0x10
		::System::Int32 tokenCount; // 0x14
		::System::Int32 SepCount; // 0x18
		::System::Int32 NumCount; // 0x1C
		::Il2CppArray<::System::String*>* literals; // 0x20
		::Il2CppArray<::System::Globalization::TimeSpanParse_TimeSpanToken>* numbers; // 0x28
		::System::Globalization::TimeSpanFormat_FormatLiterals m_posLoc; // 0x30
		::System::Globalization::TimeSpanFormat_FormatLiterals m_negLoc; // 0x58
		::System::Boolean m_posLocInit; // 0x80
		::System::Boolean m_negLocInit; // 0x81
		::System::String* m_fullPosPattern; // 0x88
		::System::String* m_fullNegPattern; // 0x90

		::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveInvariant()
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVEINVARIANT_OFFSET))(this);
		}

		::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeInvariant()
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVEINVARIANT_OFFSET))(this);
		}

		::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveLocalized()
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVELOCALIZED_OFFSET))(this);
		}

		::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeLocalized()
		{
			return ((::System::Globalization::TimeSpanFormat_FormatLiterals(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVELOCALIZED_OFFSET))(this);
		}

		::System::Boolean FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET))(this, a1);
		}

		::System::Boolean PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET))(this, a1);
		}

		::System::Boolean FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Globalization::DateTimeFormatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_INIT_OFFSET))(this, a1);
		}

		/*
		::System::Boolean ProcessToken(::System::Globalization::TimeSpanParse_TimeSpanToken& a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanToken&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PROCESSTOKEN_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Boolean AddSep(::System::String* a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDSEP_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Boolean AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDNUM_OFFSET))(this, a1, a2);
		}
		*/
	};
}
