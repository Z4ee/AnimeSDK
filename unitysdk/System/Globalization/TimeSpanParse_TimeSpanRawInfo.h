#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_FormatLiterals.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TTT.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDNUM_OFFSET UNITYSDK_OFFSET(0xA1AF10)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDSEP_OFFSET UNITYSDK_OFFSET(0xA1AF00)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0xA1ACA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMMATCH_OFFSET UNITYSDK_OFFSET(0xA1ADE0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET UNITYSDK_OFFSET(0xA1AE60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDMATCH_OFFSET UNITYSDK_OFFSET(0xA1AD60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMMATCH_OFFSET UNITYSDK_OFFSET(0xA1ADA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET UNITYSDK_OFFSET(0xA1AEA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSMATCH_OFFSET UNITYSDK_OFFSET(0xA1AE20)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLMATCH_OFFSET UNITYSDK_OFFSET(0xA1AD20)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0xA1AB40)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_NEGATIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0xA1AC30)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0xA1AAC0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_GET_POSITIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0xA1ABC0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA1AEE0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0xA1ACE0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0xA1AEF0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanRawInfo_TypeDefinitionIndex = 762;

	struct alignas(8) TimeSpanParse_TimeSpanRawInfo
	{
		// static const ::System::Int32 MaxTokens = 0xB; // 0x0
		// static const ::System::Int32 MaxLiteralTokens = 0x6; // 0x0
		// static const ::System::Int32 MaxNumericTokens = 0x5; // 0x0
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

		::System::Boolean FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanFormat_FormatLiterals))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET))(this, pattern);
		}

		::System::Void Init(::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_INIT_OFFSET))(this, dtfi);
		}

		/*
		::System::Boolean ProcessToken(::System::Globalization::TimeSpanParse_TimeSpanToken& tok, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanToken&, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_PROCESSTOKEN_OFFSET))(this, tok, result);
		}
		*/

		/*
		::System::Boolean AddSep(::System::String* sep, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDSEP_OFFSET))(this, sep, result);
		}
		*/

		/*
		::System::Boolean AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken num, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRAWINFO_ADDNUM_OFFSET))(this, num, result);
		}
		*/
	};
}
