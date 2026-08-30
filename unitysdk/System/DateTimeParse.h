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

#define SYSTEM_DATETIMEPARSE_ADJUSTHOUR_OFFSET UNITYSDK_OFFSET(0x1A540B60)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1A540B10)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOLOCAL_OFFSET UNITYSDK_OFFSET(0x1A542FF0)
#define SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOUNIVERSAL_OFFSET UNITYSDK_OFFSET(0x1A542F80)
#define SYSTEM_DATETIMEPARSE_CHECKDEFAULTDATETIME_OFFSET UNITYSDK_OFFSET(0x1A5428E0)
#define SYSTEM_DATETIMEPARSE_CHECKNEWVALUE_OFFSET UNITYSDK_OFFSET(0x1A545410)
#define SYSTEM_DATETIMEPARSE_DATETIMEOFFSETTIMEZONEPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x1A542E20)
#define SYSTEM_DATETIMEPARSE_DETERMINETIMEZONEADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1A542B80)
#define SYSTEM_DATETIMEPARSE_DOSTRICTPARSE_OFFSET UNITYSDK_OFFSET(0x1A53B530)
#define SYSTEM_DATETIMEPARSE_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x1A545470)
#define SYSTEM_DATETIMEPARSE_GETDATEOFDSN_OFFSET UNITYSDK_OFFSET(0x1A540C70)
#define SYSTEM_DATETIMEPARSE_GETDATEOFNDS_OFFSET UNITYSDK_OFFSET(0x1A540CB0)
#define SYSTEM_DATETIMEPARSE_GETDATEOFNNDS_OFFSET UNITYSDK_OFFSET(0x1A540D20)
#define SYSTEM_DATETIMEPARSE_GETDATETIMENOW_OFFSET UNITYSDK_OFFSET(0x1A53EB20)
#define SYSTEM_DATETIMEPARSE_GETDATETIMEPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A53B280)
#define SYSTEM_DATETIMEPARSE_GETDAYOFMNN_OFFSET UNITYSDK_OFFSET(0x1A53FB50)
#define SYSTEM_DATETIMEPARSE_GETDAYOFMN_OFFSET UNITYSDK_OFFSET(0x1A53F340)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNM_OFFSET UNITYSDK_OFFSET(0x1A53F820)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNNN_OFFSET UNITYSDK_OFFSET(0x1A53EF30)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNNY_OFFSET UNITYSDK_OFFSET(0x1A540480)
#define SYSTEM_DATETIMEPARSE_GETDAYOFNN_OFFSET UNITYSDK_OFFSET(0x1A53EC60)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYMN_OFFSET UNITYSDK_OFFSET(0x1A540790)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYM_OFFSET UNITYSDK_OFFSET(0x1A5409F0)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYNN_OFFSET UNITYSDK_OFFSET(0x1A540200)
#define SYSTEM_DATETIMEPARSE_GETDAYOFYN_OFFSET UNITYSDK_OFFSET(0x1A5408C0)
#define SYSTEM_DATETIMEPARSE_GETDEFAULTYEAR_OFFSET UNITYSDK_OFFSET(0x1A53EA60)
#define SYSTEM_DATETIMEPARSE_GETHEBREWDAYOFNM_OFFSET UNITYSDK_OFFSET(0x1A53F670)
#define SYSTEM_DATETIMEPARSE_GETMONTHDAYORDER_OFFSET UNITYSDK_OFFSET(0x1A53E360)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFNNN_OFFSET UNITYSDK_OFFSET(0x1A540C20)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFNN_OFFSET UNITYSDK_OFFSET(0x1A540BD0)
#define SYSTEM_DATETIMEPARSE_GETTIMEOFN_OFFSET UNITYSDK_OFFSET(0x1A540B90)
#define SYSTEM_DATETIMEPARSE_GETTIMEZONENAME_OFFSET UNITYSDK_OFFSET(0x1A53C2D0)
#define SYSTEM_DATETIMEPARSE_GETYEARMONTHDAYORDER_OFFSET UNITYSDK_OFFSET(0x1A53DF20)
#define SYSTEM_DATETIMEPARSE_GETYEARMONTHORDER_OFFSET UNITYSDK_OFFSET(0x1A53E1C0)
#define SYSTEM_DATETIMEPARSE_HANDLETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1A53C870)
#define SYSTEM_DATETIMEPARSE_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1A53C340)
#define SYSTEM_DATETIMEPARSE_LEX_OFFSET UNITYSDK_OFFSET(0x1A53CA00)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDDAYNAME_OFFSET UNITYSDK_OFFSET(0x1A544420)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDMONTHNAME_OFFSET UNITYSDK_OFFSET(0x1A543E40)
#define SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1A545300)
#define SYSTEM_DATETIMEPARSE_MATCHDAYNAME_OFFSET UNITYSDK_OFFSET(0x1A5449E0)
#define SYSTEM_DATETIMEPARSE_MATCHERANAME_OFFSET UNITYSDK_OFFSET(0x1A544FA0)
#define SYSTEM_DATETIMEPARSE_MATCHHEBREWDIGITS_OFFSET UNITYSDK_OFFSET(0x1A543540)
#define SYSTEM_DATETIMEPARSE_MATCHMONTHNAME_OFFSET UNITYSDK_OFFSET(0x1A5440E0)
#define SYSTEM_DATETIMEPARSE_MATCHTIMEMARK_OFFSET UNITYSDK_OFFSET(0x1A5451A0)
#define SYSTEM_DATETIMEPARSE_MATCHWORD_OFFSET UNITYSDK_OFFSET(0x1A53C110)
#define SYSTEM_DATETIMEPARSE_PARSEBYFORMAT_OFFSET UNITYSDK_OFFSET(0x1A545D30)
#define SYSTEM_DATETIMEPARSE_PARSEDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1A543630)
#define SYSTEM_DATETIMEPARSE_PARSEDIGITS_OFFSET UNITYSDK_OFFSET(0x1A543340)
#define SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_1_OFFSET UNITYSDK_OFFSET(0x1A539880)
#define SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1A531960)
#define SYSTEM_DATETIMEPARSE_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1A5395B0)
#define SYSTEM_DATETIMEPARSE_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1A5316F0)
#define SYSTEM_DATETIMEPARSE_PARSEFRACTIONEXACT_OFFSET UNITYSDK_OFFSET(0x1A543700)
#define SYSTEM_DATETIMEPARSE_PARSEFRACTION_OFFSET UNITYSDK_OFFSET(0x1A53C350)
#define SYSTEM_DATETIMEPARSE_PARSEISO8601_OFFSET UNITYSDK_OFFSET(0x1A542060)
#define SYSTEM_DATETIMEPARSE_PARSESIGN_OFFSET UNITYSDK_OFFSET(0x1A543860)
#define SYSTEM_DATETIMEPARSE_PARSETIMEZONEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A5438E0)
#define SYSTEM_DATETIMEPARSE_PARSETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1A53C460)
#define SYSTEM_DATETIMEPARSE_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1A5390F0)
#define SYSTEM_DATETIMEPARSE_PARSE_OFFSET UNITYSDK_OFFSET(0x1A5314F0)
#define SYSTEM_DATETIMEPARSE_PROCESSDATETIMESUFFIX_OFFSET UNITYSDK_OFFSET(0x1A541150)
#define SYSTEM_DATETIMEPARSE_PROCESSHEBREWTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x1A541240)
#define SYSTEM_DATETIMEPARSE_PROCESSTERMINALTSTATE_OFFSET UNITYSDK_OFFSET(0x1A53D880)
#define SYSTEM_DATETIMEPARSE_SETDATEDMY_OFFSET UNITYSDK_OFFSET(0x1A53E880)
#define SYSTEM_DATETIMEPARSE_SETDATEMDY_OFFSET UNITYSDK_OFFSET(0x1A53E790)
#define SYSTEM_DATETIMEPARSE_SETDATEYDM_OFFSET UNITYSDK_OFFSET(0x1A53E970)
#define SYSTEM_DATETIMEPARSE_SETDATEYMD_OFFSET UNITYSDK_OFFSET(0x1A53E6B0)
#define SYSTEM_DATETIMEPARSE_TRYADJUSTYEAR_OFFSET UNITYSDK_OFFSET(0x1A53E580)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_1_OFFSET UNITYSDK_OFFSET(0x1A532900)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_2_OFFSET UNITYSDK_OFFSET(0x1A53BE50)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1A53A900)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1A53A610)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1A53B1C0)
#define SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1A5326D0)
#define SYSTEM_DATETIMEPARSE_TRYPARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x1A5471B0)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1A53A160)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_2_OFFSET UNITYSDK_OFFSET(0x1A541570)
#define SYSTEM_DATETIMEPARSE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1A532370)
#define SYSTEM_DATETIMEPARSE_VERIFYVALIDPUNCTUATION_OFFSET UNITYSDK_OFFSET(0x1A53DD10)
#define SYSTEM_DATETIMEPARSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5474D0)

namespace System
{
	inline static constexpr unsigned int DateTimeParse_TypeDefinitionIndex = 252;

	class DateTimeParse : public ::System::Object
	{
	public:
		static ::System::DateTimeParse_MatchNumberDelegate** StaticGet_m_hebrewNumberParser()
		{
			return (::System::DateTimeParse_MatchNumberDelegate**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParse_TypeDefinitionIndex)->GetStaticField(0x7CB0);
		}
		static ::Il2CppArray<::Il2CppArray<::System::DateTimeParse_DS>*>** StaticGet_dateParsingStates()
		{
			return (::Il2CppArray<::Il2CppArray<::System::DateTimeParse_DS>*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParse_TypeDefinitionIndex)->GetStaticField(0x7CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE__CCTOR_OFFSET))();
		}

		static ::System::DateTime ParseExact(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime ParseExact_1(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExact_1(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5, ::System::TimeSpan& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TryParseExact_2(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTimeResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACT_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::DateTime ParseExactMultiple(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime ParseExactMultiple_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEEXACTMULTIPLE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExactMultiple(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5, ::System::TimeSpan& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TryParseExactMultiple_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExactMultiple_2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTimeResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEEXACTMULTIPLE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean MatchWord(::System::__DTString& a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHWORD_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetTimeZoneName(::System::__DTString& a1)
		{
			return ((::System::Boolean(*)(::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEZONENAME_OFFSET))(a1);
		}

		static ::System::Boolean IsDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ISDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean ParseFraction(::System::__DTString& a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEFRACTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean ParseTimeZone(::System::__DTString& a1, ::System::TimeSpan& a2)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSETIMEZONE_OFFSET))(a1, a2);
		}

		static ::System::Boolean HandleTimeZone(::System::__DTString& a1, ::System::DateTimeResult& a2)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_HANDLETIMEZONE_OFFSET))(a1, a2);
		}

		static ::System::Boolean Lex(::System::DateTimeParse_DS a1, ::System::__DTString& a2, ::System::DateTimeToken& a3, ::System::DateTimeRawInfo& a4, ::System::DateTimeResult& a5, ::System::Globalization::DateTimeFormatInfo*& a6, ::System::Globalization::DateTimeStyles a7)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::__DTString&, ::System::DateTimeToken&, ::System::DateTimeRawInfo&, ::System::DateTimeResult&, ::System::Globalization::DateTimeFormatInfo*&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_LEX_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean VerifyValidPunctuation(::System::__DTString& a1)
		{
			return ((::System::Boolean(*)(::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_VERIFYVALIDPUNCTUATION_OFFSET))(a1);
		}

		static ::System::Boolean GetYearMonthDayOrder(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETYEARMONTHDAYORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetYearMonthOrder(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETYEARMONTHORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetMonthDayOrder(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETMONTHDAYORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryAdjustYear(::System::DateTimeResult& a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYADJUSTYEAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetDateYMD(::System::DateTimeResult& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEYMD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetDateMDY(::System::DateTimeResult& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEMDY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetDateDMY(::System::DateTimeResult& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEDMY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetDateYDM(::System::DateTimeResult& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_SETDATEYDM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetDefaultYear(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles& a2)
		{
			return ((::System::Void(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDEFAULTYEAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDayOfNN(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles& a2, ::System::DateTimeRawInfo& a3, ::System::Globalization::DateTimeFormatInfo* a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetDayOfNNN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfMN(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles& a2, ::System::DateTimeRawInfo& a3, ::System::Globalization::DateTimeFormatInfo* a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFMN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetHebrewDayOfNM(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETHEBREWDAYOFNM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfNM(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles& a2, ::System::DateTimeRawInfo& a3, ::System::Globalization::DateTimeFormatInfo* a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetDayOfMNN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFMNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfYNN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfNNY(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFNNY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfYMN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYMN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfYN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDayOfYM(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDAYOFYM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* a1, ::System::DateTimeRawInfo& a2)
		{
			return ((::System::Void(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEMARK_OFFSET))(a1, a2);
		}

		static ::System::Boolean AdjustHour(::System::Int32& a1, ::System::DateTimeParse_TM a2)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::DateTimeParse_TM))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTHOUR_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetTimeOfN(::System::Globalization::DateTimeFormatInfo* a1, ::System::DateTimeResult& a2, ::System::DateTimeRawInfo& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetTimeOfNN(::System::Globalization::DateTimeFormatInfo* a1, ::System::DateTimeResult& a2, ::System::DateTimeRawInfo& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetTimeOfNNN(::System::Globalization::DateTimeFormatInfo* a1, ::System::DateTimeResult& a2, ::System::DateTimeRawInfo& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETTIMEOFNNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDateOfDSN(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFDSN_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDateOfNDS(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFNDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDateOfNNDS(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATEOFNNDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessDateTimeSuffix(::System::DateTimeResult& a1, ::System::DateTimeRawInfo& a2, ::System::DateTimeToken& a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::DateTimeRawInfo&, ::System::DateTimeToken&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSDATETIMESUFFIX_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessHebrewTerminalState(::System::DateTimeParse_DS a1, ::System::DateTimeResult& a2, ::System::Globalization::DateTimeStyles& a3, ::System::DateTimeRawInfo& a4, ::System::Globalization::DateTimeFormatInfo* a5)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSHEBREWTERMINALSTATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ProcessTerminaltState(::System::DateTimeParse_DS a1, ::System::DateTimeResult& a2, ::System::Globalization::DateTimeStyles& a3, ::System::DateTimeRawInfo& a4, ::System::Globalization::DateTimeFormatInfo* a5)
		{
			return ((::System::Boolean(*)(::System::DateTimeParse_DS, ::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&, ::System::DateTimeRawInfo&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PROCESSTERMINALTSTATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::DateTime Parse(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Globalization::DateTimeStyles a3)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTime Parse_1(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Globalization::DateTimeStyles a3, ::System::TimeSpan& a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTime& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTime& a4, ::System::TimeSpan& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTime&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParse_2(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTimeResult& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DetermineTimeZoneAdjustments(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DETERMINETIMEZONEADJUSTMENTS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DateTimeOffsetTimeZonePostProcessing(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DATETIMEOFFSETTIMEZONEPOSTPROCESSING_OFFSET))(a1, a2);
		}

		static ::System::Boolean AdjustTimeZoneToUniversal(::System::DateTimeResult& a1)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOUNIVERSAL_OFFSET))(a1);
		}

		static ::System::Boolean AdjustTimeZoneToLocal(::System::DateTimeResult& a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_ADJUSTTIMEZONETOLOCAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean ParseISO8601(::System::DateTimeRawInfo& a1, ::System::__DTString& a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTimeResult& a4)
		{
			return ((::System::Boolean(*)(::System::DateTimeRawInfo&, ::System::__DTString&, ::System::Globalization::DateTimeStyles, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEISO8601_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean MatchHebrewDigits(::System::__DTString& a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHHEBREWDIGITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ParseDigits(::System::__DTString& a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEDIGITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ParseDigits_1(::System::__DTString& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEDIGITS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParseFractionExact(::System::__DTString& a1, ::System::Int32 a2, ::System::Double& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEFRACTIONEXACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ParseSign(::System::__DTString& a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSESIGN_OFFSET))(a1, a2);
		}

		static ::System::Boolean ParseTimeZoneOffset(::System::__DTString& a1, ::System::Int32 a2, ::System::TimeSpan& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Int32, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSETIMEZONEOFFSET_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchAbbreviatedMonthName(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDMONTHNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchMonthName(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHMONTHNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchAbbreviatedDayName(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDDAYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchDayName(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHDAYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchEraName(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHERANAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchTimeMark(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::DateTimeParse_TM& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeParse_TM&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHTIMEMARK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchAbbreviatedTimeMark(::System::__DTString& a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::DateTimeParse_TM& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeParse_TM&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHABBREVIATEDTIMEMARK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckNewValue(::System::Int32& a1, ::System::Int32 a2, ::System::Char a3, ::System::DateTimeResult& a4)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32, ::System::Char, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_CHECKNEWVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime GetDateTimeNow(::System::DateTimeResult& a1, ::System::Globalization::DateTimeStyles& a2)
		{
			return ((::System::DateTime(*)(::System::DateTimeResult&, ::System::Globalization::DateTimeStyles&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATETIMENOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckDefaultDateTime(::System::DateTimeResult& a1, ::System::Globalization::Calendar*& a2, ::System::Globalization::DateTimeStyles a3)
		{
			return ((::System::Boolean(*)(::System::DateTimeResult&, ::System::Globalization::Calendar*&, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_CHECKDEFAULTDATETIME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ExpandPredefinedFormat(::System::String* a1, ::System::Globalization::DateTimeFormatInfo*& a2, ::System::ParsingInfo& a3, ::System::DateTimeResult& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*&, ::System::ParsingInfo&, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_EXPANDPREDEFINEDFORMAT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParseByFormat(::System::__DTString& a1, ::System::__DTString& a2, ::System::ParsingInfo& a3, ::System::Globalization::DateTimeFormatInfo* a4, ::System::DateTimeResult& a5)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::__DTString&, ::System::ParsingInfo&, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_PARSEBYFORMAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseQuoteString(::System::String* a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_TRYPARSEQUOTESTRING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DoStrictParse(::System::String* a1, ::System::String* a2, ::System::Globalization::DateTimeStyles a3, ::System::Globalization::DateTimeFormatInfo* a4, ::System::DateTimeResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::DateTimeStyles, ::System::Globalization::DateTimeFormatInfo*, ::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_DOSTRICTPARSE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* GetDateTimeParseException(::System::DateTimeResult& a1)
		{
			return ((::System::Exception*(*)(::System::DateTimeResult&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_GETDATETIMEPARSEEXCEPTION_OFFSET))(a1);
		}
	};
}
