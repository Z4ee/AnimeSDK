#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeParse_DS.h"
#include "unitysdk/System/DateTimeParse_TM.h"
#include "unitysdk/System/DateTimeRawInfo.h"
#include "unitysdk/System/DateTimeResult.h"
#include "unitysdk/System/DateTimeToken.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParsingInfo.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/__DTString.h"

namespace System { class DateTimeParse_MatchNumberDelegate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Globalization { class Calendar; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DATETIMEPARSE_ADJUSTHOUR_OFFSET UNITYSDK_OFFSET(0x1BA04B20)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1BA04AD0)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOLOCAL_OFFSET UNITYSDK_OFFSET(0x1BA07A20)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOUNIVERSAL_OFFSET UNITYSDK_OFFSET(0x1BA07960)
#define SYSTEM_DATETIMEPARSE_CHECKDEFAULTDATETIME_OFFSET UNITYSDK_OFFSET(0x1BA07080)
#define SYSTEM_DATETIMEPARSE_CHECKNEWVALUE_OFFSET UNITYSDK_OFFSET(0x1BA0A030)
#define SYSTEM_DATETIMEPARSE_DATETIMEOFFSETTIMEZONEPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x1BA077A0)
#define SYSTEM_DATETIMEPARSE_DETERMINETIMEZONEADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1BA073E0)
#define SYSTEM_DATETIMEPARSE_DOSTRICTPARSE_OFFSET UNITYSDK_OFFSET(0x1B9FE880)
#define SYSTEM_DATETIMEPARSE_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x1BA0A0B0)
#define SYSTEM_DATETIMEPARSE_GETDATEOFDSN_OFFSET UNITYSDK_OFFSET(0x1BA04CC0)
#define SYSTEM_DATETIMEPARSE_GETDATEOFNDS_OFFSET UNITYSDK_OFFSET(0x1BA04D30)
#define SYSTEM_DATETIMEPARSE_GETDATEOFNNDS_OFFSET UNITYSDK_OFFSET(0x1BA04EB0)
#define SYSTEM_DATETIMEPARSE_GETDATETIMENOW_OFFSET UNITYSDK_OFFSET(0x1BA02640)
#define SYSTEM_DATETIMEPARSE_GETDATETIMEPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B9FE260)
#define SYSTEM_DATETIMEPARSE_GETDAYOFMNN_OFFSET UNITYSDK_OFFSET(0x1BA03BA0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFMN_OFFSET UNITYSDK_OFFSET(0x1BA031D0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNM_OFFSET UNITYSDK_OFFSET(0x1BA037A0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNNN_OFFSET UNITYSDK_OFFSET(0x1BA029E0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNNY_OFFSET UNITYSDK_OFFSET(0x1BA04650)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNN_OFFSET UNITYSDK_OFFSET(0x1BA02750)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYMN_OFFSET UNITYSDK_OFFSET(0x1BA04830)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYM_OFFSET UNITYSDK_OFFSET(0x1BA049F0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYNN_OFFSET UNITYSDK_OFFSET(0x1BA044A0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYN_OFFSET UNITYSDK_OFFSET(0x1BA04910)
#define SYSTEM_DATETIMEPARSE_GETDEFAULTYEAR_OFFSET UNITYSDK_OFFSET(0x1BA024A0)
#define SYSTEM_DATETIMEPARSE_GETHEBREWDAYOFNM_OFFSET UNITYSDK_OFFSET(0x1BA035D0)
#define SYSTEM_DATETIMEPARSE_GETMONTHDAYORDER_OFFSET UNITYSDK_OFFSET(0x1BA01D80)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFNNN_OFFSET UNITYSDK_OFFSET(0x1BA04C40)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFNN_OFFSET UNITYSDK_OFFSET(0x1BA04BC0)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFN_OFFSET UNITYSDK_OFFSET(0x1BA04B50)
#define SYSTEM_DATETIMEPARSE_GETTIMEZONENAME_OFFSET UNITYSDK_OFFSET(0x1B9FF690)
#define SYSTEM_DATETIMEPARSE_GETYEARMONTHDAYORDER_OFFSET UNITYSDK_OFFSET(0x1BA01580)
#define SYSTEM_DATETIMEPARSE_GETYEARMONTHORDER_OFFSET UNITYSDK_OFFSET(0x1BA01A70)
#define SYSTEM_DATETIMEPARSE_HANDLETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1B9FFC10)
#define SYSTEM_DATETIMEPARSE_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1B9FF720)
#define SYSTEM_DATETIMEPARSE_LEX_OFFSET UNITYSDK_OFFSET(0x1B9FFE90)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDDAYNAME_OFFSET UNITYSDK_OFFSET(0x1BA09030)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDMONTHNAME_OFFSET UNITYSDK_OFFSET(0x1BA08BC0)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1BA09E80)
#define SYSTEM_DATETIMEPARSE_MATCHDAYNAME_OFFSET UNITYSDK_OFFSET(0x1BA09570)
#define SYSTEM_DATETIMEPARSE_MATCHERANAME_OFFSET UNITYSDK_OFFSET(0x1BA09AB0)
#define SYSTEM_DATETIMEPARSE_MATCHHEBREWDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA08050)
#define SYSTEM_DATETIMEPARSE_MATCHMONTHNAME_OFFSET UNITYSDK_OFFSET(0x1BA08DE0)
#define SYSTEM_DATETIMEPARSE_MATCHTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1BA09CD0)
#define SYSTEM_DATETIMEPARSE_MATCHWORD_OFFSET UNITYSDK_OFFSET(0x1B9FF510)
#define SYSTEM_DATETIMEPARSE_PARSEBYFORMAT_OFFSET UNITYSDK_OFFSET(0x1BA0A4C0)
#define SYSTEM_DATETIMEPARSE_PARSEDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1BA08160)
#define SYSTEM_DATETIMEPARSE_PARSEDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA07D60)
#define SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1B9FEF00)
#define SYSTEM_DATETIMEPARSE_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1B9FE560)
#define SYSTEM_DATETIMEPARSE_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1B9FE060)
#define SYSTEM_DATETIMEPARSE_PARSEFRACTIONEXACT_OFFSET UNITYSDK_OFFSET(0x1BA08280)
#define SYSTEM_DATETIMEPARSE_PARSEFRACTION_OFFSET UNITYSDK_OFFSET(0x1B9FF730)
#define SYSTEM_DATETIMEPARSE_PARSEISO8601_OFFSET UNITYSDK_OFFSET(0x1BA06870)
#define SYSTEM_DATETIMEPARSE_PARSESIGN_OFFSET UNITYSDK_OFFSET(0x1BA08440)
#define SYSTEM_DATETIMEPARSE_PARSETIMEZONEOFFSET_OFFSET UNITYSDK_OFFSET(0x1BA084E0)
#define SYSTEM_DATETIMEPARSE_PARSETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1B9FF810)
#define SYSTEM_DATETIMEPARSE_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1BA06590)
#define SYSTEM_DATETIMEPARSE_PARSE_OFFSET UNITYSDK_OFFSET(0x1BA05870)
#define SYSTEM_DATETIMEPARSE_PROCESSDATETIMESUFFIX_OFFSET UNITYSDK_OFFSET(0x1BA05390)
#define SYSTEM_DATETIMEPARSE_PROCESSHEBREWTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x1BA05480)
#define SYSTEM_DATETIMEPARSE_PROCESSTERMINALTSTATE_OFFSET UNITYSDK_OFFSET(0x1BA00CB0)
#define SYSTEM_DATETIMEPARSE_SETDATEDMY_OFFSET UNITYSDK_OFFSET(0x1BA02340)
#define SYSTEM_DATETIMEPARSE_SETDATEMDY_OFFSET UNITYSDK_OFFSET(0x1BA02290)
#define SYSTEM_DATETIMEPARSE_SETDATEYDM_OFFSET UNITYSDK_OFFSET(0x1BA023F0)
#define SYSTEM_DATETIMEPARSE_SETDATEYMD_OFFSET UNITYSDK_OFFSET(0x1BA02230)
#define SYSTEM_DATETIMEPARSE_TRYADJUSTYEAR_OFFSET UNITYSDK_OFFSET(0x1BA02130)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_1_OFFSET UNITYSDK_OFFSET(0x1B9FF420)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_2_OFFSET UNITYSDK_OFFSET(0x1B9FF000)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1B9FF310)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1B9FE770)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1B9FE160)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1B9FE680)
#define SYSTEM_DATETIMEPARSE_TRYPARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x1BA0B8A0)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1BA06770)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_2_OFFSET UNITYSDK_OFFSET(0x1BA05960)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1BA06690)
#define SYSTEM_DATETIMEPARSE_VERIFYVALIDPUNCTUATION_OFFSET UNITYSDK_OFFSET(0x1BA012D0)
#define SYSTEM_DATETIMEPARSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA0BB20)

namespace System
{
	inline static constexpr unsigned int DateTimeParse_TypeDefinitionIndex = 240;

	class DateTimeParse : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::DateTimeParse_DS>*>** StaticGet_dateParsingStates()
		{
			return (::Il2CppArray<::Il2CppArray<::System::DateTimeParse_DS>*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParse_TypeDefinitionIndex)->GetStaticField(0xE80);
		}
		static ::System::DateTimeParse_MatchNumberDelegate** StaticGet_m_hebrewNumberParser()
		{
			return (::System::DateTimeParse_MatchNumberDelegate**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParse_TypeDefinitionIndex)->GetStaticField(0xE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE__CCTOR_OFFSET))();
		}

		static ::System::DateTime ParseExact(::System::String* s, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACT_OFFSET))(s, format, dtfi, style);
		}

		static ::System::DateTime ParseExact_1(::System::String* s, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::TimeSpan& offset)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACT_1_OFFSET))(s, format, dtfi, style, offset);
		}

		static ::System::Boolean TryParseExact(::System::String* s, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_OFFSET))(s, format, dtfi, style, result);
		}

		static ::System::Boolean TryParseExact_1(::System::String* s, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result, ::System::TimeSpan& offset)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_1_OFFSET))(s, format, dtfi, style, result, offset);
		}

		static ::System::Boolean TryParseExact_2(::System::String* s, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_2_OFFSET))(s, format, dtfi, style, result);
		}

		static ::System::DateTime ParseExactMultiple(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_OFFSET))(s, formats, dtfi, style);
		}

		static ::System::Boolean TryParseExactMultiple(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result, ::System::TimeSpan& offset)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_OFFSET))(s, formats, dtfi, style, result, offset);
		}

		static ::System::Boolean TryParseExactMultiple_1(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_1_OFFSET))(s, formats, dtfi, style, result);
		}

		static ::System::Boolean TryParseExactMultiple_2(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_2_OFFSET))(s, formats, dtfi, style, result);
		}

		static ::System::Boolean MatchWord(::System::__DTString& str, ::System::String* target)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHWORD_OFFSET))(str, target);
		}

		static ::System::Boolean GetTimeZoneName(::System::__DTString& str)
		{
			return ((::System::Boolean(*)(::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEZONENAME_OFFSET))(str);
		}

		static ::System::Boolean IsDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ISDIGIT_OFFSET))(ch);
		}

		static ::System::Boolean ParseFraction(::System::__DTString& str, ::System::Double& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEFRACTION_OFFSET))(str, result);
		}

		static ::System::Boolean ParseTimeZone(::System::__DTString& str, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSETIMEZONE_OFFSET))(str, result);
		}

		static ::System::Boolean HandleTimeZone(::System::__DTString& str, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_HANDLETIMEZONE_OFFSET))(str, result);
		}

		static ::System::Boolean Lex(::System::DateTimeParse_DS dps, ::System::__DTString& str, ::System::DateTimeToken& dtok, ::System::DateTimeRawInfo& raw, ::System::DateTimeResult& result, ::System::Globalization::DateTimeFormatInfo*& dtfi, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::__DTString&, ::System::DateTimeToken&, ::System::DateTimeRawInfo&, ::System::DateTimeResult&, ::System::Globalization::DateTimeFormatInfo*&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_LEX_OFFSET))(dps, str, dtok, raw, result, dtfi, styles);
		}

		static ::System::Boolean VerifyValidPunctuation(::System::__DTString& str)
		{
			return ((::System::Boolean(*)(::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_VERIFYVALIDPUNCTUATION_OFFSET))(str);
		}

		static ::System::Boolean GetYearMonthDayOrder(::System::String* datePattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& order)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETYEARMONTHDAYORDER_OFFSET))(datePattern, dtfi, order);
		}

		static ::System::Boolean GetYearMonthOrder(::System::String* pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& order)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETYEARMONTHORDER_OFFSET))(pattern, dtfi, order);
		}

		static ::System::Boolean GetMonthDayOrder(::System::String* pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& order)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETMONTHDAYORDER_OFFSET))(pattern, dtfi, order);
		}

		static ::System::Boolean TryAdjustYear(::System::DateTimeResult& result, ::System::Int32 year, ::System::Int32& adjustedYear)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYADJUSTYEAR_OFFSET))(result, year, adjustedYear);
		}

		static ::System::Boolean SetDateYMD(::System::DateTimeResult& result, ::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEYMD_OFFSET))(result, year, month, day);
		}

		static ::System::Boolean SetDateMDY(::System::DateTimeResult& result, ::System::Int32 month, ::System::Int32 day, ::System::Int32 year)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEMDY_OFFSET))(result, month, day, year);
		}

		static ::System::Boolean SetDateDMY(::System::DateTimeResult& result, ::System::Int32 day, ::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEDMY_OFFSET))(result, day, month, year);
		}

		static ::System::Boolean SetDateYDM(::System::DateTimeResult& result, ::System::Int32 year, ::System::Int32 day, ::System::Int32 month)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEYDM_OFFSET))(result, year, day, month);
		}

		static ::System::Void GetDefaultYear(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles)
		{
			return ((::System::Void(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDEFAULTYEAR_OFFSET))(result, styles);
		}

		static ::System::Boolean GetDayOfNN(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNN_OFFSET))(result, styles, raw, dtfi);
		}

		static ::System::Boolean GetDayOfNNN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNNN_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfMN(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFMN_OFFSET))(result, styles, raw, dtfi);
		}

		static ::System::Boolean GetHebrewDayOfNM(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETHEBREWDAYOFNM_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfNM(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNM_OFFSET))(result, styles, raw, dtfi);
		}

		static ::System::Boolean GetDayOfMNN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFMNN_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfYNN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYNN_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfNNY(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNNY_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfYMN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYMN_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfYN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYN_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean GetDayOfYM(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYM_OFFSET))(result, raw, dtfi);
		}

		static ::System::Void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Void(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEMARK_OFFSET))(dtfi, raw);
		}

		static ::System::Boolean AdjustHour(::System::Int32& hour, ::System::DateTimeParse_TM timeMark)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::DateTimeParse_TM))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTHOUR_OFFSET))(hour, timeMark);
		}

		static ::System::Boolean GetTimeOfN(::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFN_OFFSET))(dtfi, result, raw);
		}

		static ::System::Boolean GetTimeOfNN(::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFNN_OFFSET))(dtfi, result, raw);
		}

		static ::System::Boolean GetTimeOfNNN(::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFNNN_OFFSET))(dtfi, result, raw);
		}

		static ::System::Boolean GetDateOfDSN(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFDSN_OFFSET))(result, raw);
		}

		static ::System::Boolean GetDateOfNDS(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFNDS_OFFSET))(result, raw);
		}

		static ::System::Boolean GetDateOfNNDS(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFNNDS_OFFSET))(result, raw, dtfi);
		}

		static ::System::Boolean ProcessDateTimeSuffix(::System::DateTimeResult& result, ::System::DateTimeRawInfo& raw, ::System::DateTimeToken& dtok)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::DateTimeToken&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSDATETIMESUFFIX_OFFSET))(result, raw, dtok);
		}

		static ::System::Boolean ProcessHebrewTerminalState(::System::DateTimeParse_DS dps, ::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSHEBREWTERMINALSTATE_OFFSET))(dps, result, styles, raw, dtfi);
		}

		static ::System::Boolean ProcessTerminaltState(::System::DateTimeParse_DS dps, ::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles, ::System::DateTimeRawInfo& raw, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSTERMINALTSTATE_OFFSET))(dps, result, styles, raw, dtfi);
		}

		static ::System::DateTime Parse(::System::String* s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSE_OFFSET))(s, dtfi, styles);
		}

		static ::System::DateTime Parse_1(::System::String* s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles, ::System::TimeSpan& offset)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSE_1_OFFSET))(s, dtfi, styles, offset);
		}

		static ::System::Boolean TryParse(::System::String* s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_OFFSET))(s, dtfi, styles, result);
		}

		static ::System::Boolean TryParse_1(::System::String* s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles, ::System::DateTime& result, ::System::TimeSpan& offset)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_1_OFFSET))(s, dtfi, styles, result, offset);
		}

		static ::System::Boolean TryParse_2(::System::String* s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_2_OFFSET))(s, dtfi, styles, result);
		}

		static ::System::Boolean DetermineTimeZoneAdjustments(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles styles, ::System::Boolean bTimeOnly)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DETERMINETIMEZONEADJUSTMENTS_OFFSET))(result, styles, bTimeOnly);
		}

		static ::System::Boolean DateTimeOffsetTimeZonePostProcessing(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DATETIMEOFFSETTIMEZONEPOSTPROCESSING_OFFSET))(result, styles);
		}

		static ::System::Boolean AdjustTimeZoneToUniversal(::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOUNIVERSAL_OFFSET))(result);
		}

		static ::System::Boolean AdjustTimeZoneToLocal(::System::DateTimeResult& result, ::System::Boolean bTimeOnly)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOLOCAL_OFFSET))(result, bTimeOnly);
		}

		static ::System::Boolean ParseISO8601(::System::DateTimeRawInfo& raw, ::System::__DTString& str, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::DateTimeRawInfo&, ::System::__DTString&, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEISO8601_OFFSET))(raw, str, styles, result);
		}

		static ::System::Boolean MatchHebrewDigits(::System::__DTString& str, ::System::Int32 digitLen, ::System::Int32& number)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHHEBREWDIGITS_OFFSET))(str, digitLen, number);
		}

		static ::System::Boolean ParseDigits(::System::__DTString& str, ::System::Int32 digitLen, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEDIGITS_OFFSET))(str, digitLen, result);
		}

		static ::System::Boolean ParseDigits_1(::System::__DTString& str, ::System::Int32 minDigitLen, ::System::Int32 maxDigitLen, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEDIGITS_1_OFFSET))(str, minDigitLen, maxDigitLen, result);
		}

		static ::System::Boolean ParseFractionExact(::System::__DTString& str, ::System::Int32 maxDigitLen, ::System::Double& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEFRACTIONEXACT_OFFSET))(str, maxDigitLen, result);
		}

		static ::System::Boolean ParseSign(::System::__DTString& str, ::System::Boolean& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSESIGN_OFFSET))(str, result);
		}

		static ::System::Boolean ParseTimeZoneOffset(::System::__DTString& str, ::System::Int32 len, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSETIMEZONEOFFSET_OFFSET))(str, len, result);
		}

		static ::System::Boolean MatchAbbreviatedMonthName(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDMONTHNAME_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchMonthName(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHMONTHNAME_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchAbbreviatedDayName(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDDAYNAME_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchDayName(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHDAYNAME_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchEraName(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHERANAME_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchTimeMark(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeParse_TM& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeParse_TM&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHTIMEMARK_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean MatchAbbreviatedTimeMark(::System::__DTString& str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeParse_TM& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeParse_TM&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDTIMEMARK_OFFSET))(str, dtfi, result);
		}

		static ::System::Boolean CheckNewValue(::System::Int32& currentValue, ::System::Int32 newValue, ::System::Char patternChar, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32, ::System::Char, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_CHECKNEWVALUE_OFFSET))(currentValue, newValue, patternChar, result);
		}

		static ::System::DateTime GetDateTimeNow(::System::DateTimeResult& result, ::System::Globalization::DateTimeStyles& styles)
		{
			return ((::System::DateTime(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATETIMENOW_OFFSET))(result, styles);
		}

		static ::System::Boolean CheckDefaultDateTime(::System::DateTimeResult& result, ::System::Globalization::Calendar*& cal, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::Calendar*&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_CHECKDEFAULTDATETIME_OFFSET))(result, cal, styles);
		}

		static ::System::String* ExpandPredefinedFormat(::System::String* format, ::System::Globalization::DateTimeFormatInfo*& dtfi, ::System::ParsingInfo& parseInfo, ::System::DateTimeResult& result)
		{
			return ((::System::String*(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*&, ::System::ParsingInfo&, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_EXPANDPREDEFINEDFORMAT_OFFSET))(format, dtfi, parseInfo, result);
		}

		static ::System::Boolean ParseByFormat(::System::__DTString& str, ::System::__DTString& format, ::System::ParsingInfo& parseInfo, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::__DTString&, ::System::ParsingInfo&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEBYFORMAT_OFFSET))(str, format, parseInfo, dtfi, result);
		}

		static ::System::Boolean TryParseQuoteString(::System::String* format, ::System::Int32 pos, ::System::Text::StringBuilder* result, ::System::Int32& returnValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEQUOTESTRING_OFFSET))(format, pos, result, returnValue);
		}

		static ::System::Boolean DoStrictParse(::System::String* s, ::System::String* formatParam, ::System::Globalization::DateTimeStyles styles, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::DateTimeResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeStyles, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DOSTRICTPARSE_OFFSET))(s, formatParam, styles, dtfi, result);
		}

		static ::System::Exception* GetDateTimeParseException(::System::DateTimeResult& result)
		{
			return ((::System::Exception*(*)(::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATETIMEPARSEEXCEPTION_OFFSET))(result);
		}
	};
}
