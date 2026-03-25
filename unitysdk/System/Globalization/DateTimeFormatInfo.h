#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/DateTimeFormatFlags.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/Globalization/MonthNameStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TokenType.h"
#include "unitysdk/System/__DTString.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class Calendar; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureData; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class TokenHashValue; }

#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ADDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x16300690)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLEARTOKENHASHTABLE_OFFSET UNITYSDK_OFFSET(0x162FAD60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x162F3E50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CREATETOKENHASHTABLE_OFFSET UNITYSDK_OFFSET(0x162FDF10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDDAYNAME_OFFSET UNITYSDK_OFFSET(0x162FC4D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDERANAME_OFFSET UNITYSDK_OFFSET(0x162FAF80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDMONTHNAME_OFFSET UNITYSDK_OFFSET(0x162FCDB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETALLDATETIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FC7E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETCOMBINEDPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FC670)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETDAYNAME_OFFSET UNITYSDK_OFFSET(0x162FCC10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETERANAME_OFFSET UNITYSDK_OFFSET(0x162FADF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x162FACB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x162FAB60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETJAPANESECALENDARDTFI_OFFSET UNITYSDK_OFFSET(0x162FDAD0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMERGEDPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FD0F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMONTHNAME_OFFSET UNITYSDK_OFFSET(0x162FCF50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETTAIWANCALENDARDTFI_OFFSET UNITYSDK_OFFSET(0x162FDCF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDDAYNAMES_OFFSET UNITYSDK_OFFSET(0x162FB980)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x162FB0F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDERANAMES_OFFSET UNITYSDK_OFFSET(0x162FAF10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162FBBE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FA5F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FA520)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FA750)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FA680)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLYEARMONTHPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FA7E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_AMDESIGNATOR_OFFSET UNITYSDK_OFFSET(0x162FAD00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x162FAD10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x162FD6F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x162F8D80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x162F8DB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x162FAA60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x162FB160)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATETIMEOFFSETPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB570)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DAYNAMES_OFFSET UNITYSDK_OFFSET(0x162FBAB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ERANAMES_OFFSET UNITYSDK_OFFSET(0x162FAD80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x162FBE60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB170)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FD680)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FD540)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALLONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB4D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALSHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB430)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASFORCETWODIGITYEARS_OFFSET UNITYSDK_OFFSET(0x162FD960)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINDAYNAMES_OFFSET UNITYSDK_OFFSET(0x162FC0F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162FBE40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASYEARMONTHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x162FD990)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x162FA870)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x162FD400)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LANGUAGENAME_OFFSET UNITYSDK_OFFSET(0x162F8E00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FA2D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FA260)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHDAYPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB2C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHGENITIVENAMES_OFFSET UNITYSDK_OFFSET(0x162FD410)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162FBD10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_OPTIONALCALENDARS_OFFSET UNITYSDK_OFFSET(0x162FAD20)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_PMDESIGNATOR_OFFSET UNITYSDK_OFFSET(0x162FB320)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_RFC1123PATTERN_OFFSET UNITYSDK_OFFSET(0x162FB330)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FA3E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FA370)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SORTABLEDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB420)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_TIMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x162FB8C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FB210)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FB280)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FB370)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FB3E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDYEARMONTHPATTERNS_OFFSET UNITYSDK_OFFSET(0x162FB910)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNIVERSALSORTABLEDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162FB8D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_YEARMONTHPATTERN_OFFSET UNITYSDK_OFFSET(0x162FA480)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITIALIZEOVERRIDABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x162F9400)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITPREFEREXISTINGTOKENS_OFFSET UNITYSDK_OFFSET(0x162F8D70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTATCURRENTHASHNODE_OFFSET UNITYSDK_OFFSET(0x16301250)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTHASH_OFFSET UNITYSDK_OFFSET(0x162FFD70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDDAYOFWEEKNAMES_OFFSET UNITYSDK_OFFSET(0x162F8E30)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162F8F10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETDAYOFWEEKNAMES_OFFSET UNITYSDK_OFFSET(0x162F8EA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETGENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162FC3A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETLEAPYEARMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162FC460)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x162F8F80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAME_OFFSET UNITYSDK_OFFSET(0x162FC110)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ISHEBREWCHAR_OFFSET UNITYSDK_OFFSET(0x16300CE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x162F9630)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x162FA010)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x162F91F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x162F9BC0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162F9E50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x162F9CA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x162F9F40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_YEARMONTHPATTERN_OFFSET UNITYSDK_OFFSET(0x162F9D80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x16300CF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TRYPARSEHEBREWNUMBER_OFFSET UNITYSDK_OFFSET(0x163007A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x162FD780)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_YEARMONTHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x162FD9B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x163015F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162F4C80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8FF0)

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfo_TypeDefinitionIndex = 740;

	class DateTimeFormatInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_s_zhtwDTFI()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4810);
		}
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_invariantInfo()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4818);
		}
		static ::System::Collections::Hashtable** StaticGet_s_calendarNativeNames()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4820);
		}
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_s_jajpDTFI()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4828);
		}
		static ::System::Boolean* StaticGet_preferExistingTokens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x2740);
		}
		// static const ::System::String* rfc1123Pattern; // 0x0
		// static const ::System::String* sortableDateTimePattern; // 0x0
		// static const ::System::String* universalSortableDateTimePattern; // 0x0
		// static const ::System::Int32 DEFAULT_ALL_DATETIMES_SIZE = 0x84; // 0x0
		// static const ::System::Globalization::DateTimeStyles InvalidDateTimeStyles; // 0x0
		// static const ::System::Int32 TOKEN_HASH_SIZE = 0xC7; // 0x0
		// static const ::System::Int32 SECOND_PRIME = 0xC5; // 0x0
		// static const ::System::String* dateSeparatorOrTimeZoneOffset; // 0x0
		// static const ::System::String* invariantDateSeparator; // 0x0
		// static const ::System::String* invariantTimeSeparator; // 0x0
		// static const ::System::String* IgnorablePeriod; // 0x0
		// static const ::System::String* IgnorableComma; // 0x0
		// static const ::System::String* CJKYearSuff; // 0x0
		// static const ::System::String* CJKMonthSuff; // 0x0
		// static const ::System::String* CJKDaySuff; // 0x0
		// static const ::System::String* KoreanYearSuff; // 0x0
		// static const ::System::String* KoreanMonthSuff; // 0x0
		// static const ::System::String* KoreanDaySuff; // 0x0
		// static const ::System::String* KoreanHourSuff; // 0x0
		// static const ::System::String* KoreanMinuteSuff; // 0x0
		// static const ::System::String* KoreanSecondSuff; // 0x0
		// static const ::System::String* CJKHourSuff; // 0x0
		// static const ::System::String* ChineseHourSuff; // 0x0
		// static const ::System::String* CJKMinuteSuff; // 0x0
		// static const ::System::String* CJKSecondSuff; // 0x0
		// static const ::System::String* LocalTimeMark; // 0x0
		// static const ::System::String* KoreanLangName; // 0x0
		// static const ::System::String* JapaneseLangName; // 0x0
		// static const ::System::String* EnglishLangName; // 0x0
		::System::Globalization::CultureData* m_cultureData; // 0x10
		::System::String* m_name; // 0x18
		::System::String* m_langName; // 0x20
		::System::Globalization::CompareInfo* m_compareInfo; // 0x28
		::System::Globalization::CultureInfo* m_cultureInfo; // 0x30
		::System::String* amDesignator; // 0x38
		::System::String* pmDesignator; // 0x40
		::System::String* dateSeparator; // 0x48
		::System::String* generalShortTimePattern; // 0x50
		::System::String* generalLongTimePattern; // 0x58
		::System::String* timeSeparator; // 0x60
		::System::String* monthDayPattern; // 0x68
		::System::String* dateTimeOffsetPattern; // 0x70
		::System::Globalization::Calendar* calendar; // 0x78
		::System::Int32 firstDayOfWeek; // 0x80
		::System::Int32 calendarWeekRule; // 0x84
		::System::String* fullDateTimePattern; // 0x88
		::Il2CppArray<::System::String*>* abbreviatedDayNames; // 0x90
		::Il2CppArray<::System::String*>* m_superShortDayNames; // 0x98
		::Il2CppArray<::System::String*>* dayNames; // 0xA0
		::Il2CppArray<::System::String*>* abbreviatedMonthNames; // 0xA8
		::Il2CppArray<::System::String*>* monthNames; // 0xB0
		::Il2CppArray<::System::String*>* genitiveMonthNames; // 0xB8
		::Il2CppArray<::System::String*>* m_genitiveAbbreviatedMonthNames; // 0xC0
		::Il2CppArray<::System::String*>* leapYearMonthNames; // 0xC8
		::System::String* longDatePattern; // 0xD0
		::System::String* shortDatePattern; // 0xD8
		::System::String* yearMonthPattern; // 0xE0
		::System::String* longTimePattern; // 0xE8
		::System::String* shortTimePattern; // 0xF0
		::Il2CppArray<::System::String*>* allYearMonthPatterns; // 0xF8
		::Il2CppArray<::System::String*>* allShortDatePatterns; // 0x100
		::Il2CppArray<::System::String*>* allLongDatePatterns; // 0x108
		::Il2CppArray<::System::String*>* allShortTimePatterns; // 0x110
		::Il2CppArray<::System::String*>* allLongTimePatterns; // 0x118
		::Il2CppArray<::System::String*>* m_eraNames; // 0x120
		::Il2CppArray<::System::String*>* m_abbrevEraNames; // 0x128
		::Il2CppArray<::System::String*>* m_abbrevEnglishEraNames; // 0x130
		::Il2CppArray<::System::Int32>* optionalCalendars; // 0x138
		::System::Boolean m_isReadOnly; // 0x140
		::System::Globalization::DateTimeFormatFlags formatFlags; // 0x144
		::System::Int32 CultureID; // 0x148
		::System::Boolean m_useUserOverride; // 0x14C
		::System::Boolean bUseCalendarInfo; // 0x14D
		::System::Int32 nDataItem; // 0x150
		::System::Boolean m_isDefaultCalendar; // 0x154
		::Il2CppArray<::System::String*>* m_dateWords; // 0x158
		::System::String* m_fullTimeSpanPositivePattern; // 0x160
		::System::String* m_fullTimeSpanNegativePattern; // 0x168
		::Il2CppArray<::System::Globalization::TokenHashValue*>* m_dtfiTokenHash; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_1_OFFSET))(this, cultureData, cal);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CCTOR_OFFSET))();
		}

		static ::System::Boolean InitPreferExistingTokens()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITPREFEREXISTINGTOKENS_OFFSET))();
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURENAME_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURE_OFFSET))(this);
		}

		::System::String* get_LanguageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LANGUAGENAME_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* internalGetAbbreviatedDayOfWeekNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDDAYOFWEEKNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* internalGetDayOfWeekNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETDAYOFWEEKNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* internalGetAbbreviatedMonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDMONTHNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* internalGetMonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAMES_OFFSET))(this);
		}

		::System::Void InitializeOverridableProperties(::System::Globalization::CultureData* cultureData, ::System::Int32 calendarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITIALIZEOVERRIDABLEPROPERTIES_OFFSET))(this, cultureData, calendarID);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONSERIALIZING_OFFSET))(this, ctx);
		}

		static ::System::Globalization::DateTimeFormatInfo* get_InvariantInfo()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_INVARIANTINFO_OFFSET))();
		}

		static ::System::Globalization::DateTimeFormatInfo* get_CurrentInfo()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CURRENTINFO_OFFSET))();
		}

		static ::System::Globalization::DateTimeFormatInfo* GetInstance(::System::IFormatProvider* provider)
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETINSTANCE_OFFSET))(provider);
		}

		::System::Object* GetFormat(::System::Type* formatType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETFORMAT_OFFSET))(this, formatType);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_AMDesignator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_AMDESIGNATOR_OFFSET))(this);
		}

		::System::Globalization::Calendar* get_Calendar()
		{
			return ((::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CALENDAR_OFFSET))(this);
		}

		::System::Void set_Calendar(::System::Globalization::Calendar* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_CALENDAR_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_OptionalCalendars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_OPTIONALCALENDARS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_EraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ERANAMES_OFFSET))(this);
		}

		::System::String* GetEraName(::System::Int32 era)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETERANAME_OFFSET))(this, era);
		}

		::Il2CppArray<::System::String*>* get_AbbreviatedEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDERANAMES_OFFSET))(this);
		}

		::System::String* GetAbbreviatedEraName(::System::Int32 era)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDERANAME_OFFSET))(this, era);
		}

		::Il2CppArray<::System::String*>* get_AbbreviatedEnglishEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDENGLISHERANAMES_OFFSET))(this);
		}

		::System::String* get_DateSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATESEPARATOR_OFFSET))(this);
		}

		::System::String* get_FullDateTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLDATETIMEPATTERN_OFFSET))(this);
		}

		::System::String* get_LongDatePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGDATEPATTERN_OFFSET))(this);
		}

		::System::Void set_LongDatePattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGDATEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_LongTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGTIMEPATTERN_OFFSET))(this);
		}

		::System::Void set_LongTimePattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGTIMEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_MonthDayPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHDAYPATTERN_OFFSET))(this);
		}

		::System::String* get_PMDesignator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_PMDESIGNATOR_OFFSET))(this);
		}

		::System::String* get_RFC1123Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_RFC1123PATTERN_OFFSET))(this);
		}

		::System::String* get_ShortDatePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTDATEPATTERN_OFFSET))(this);
		}

		::System::Void set_ShortDatePattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTDATEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_ShortTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTTIMEPATTERN_OFFSET))(this);
		}

		::System::Void set_ShortTimePattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTTIMEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_SortableDateTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SORTABLEDATETIMEPATTERN_OFFSET))(this);
		}

		::System::String* get_GeneralShortTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALSHORTTIMEPATTERN_OFFSET))(this);
		}

		::System::String* get_GeneralLongTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALLONGTIMEPATTERN_OFFSET))(this);
		}

		::System::String* get_DateTimeOffsetPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATETIMEOFFSETPATTERN_OFFSET))(this);
		}

		::System::String* get_TimeSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_TIMESEPARATOR_OFFSET))(this);
		}

		::System::String* get_UniversalSortableDateTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNIVERSALSORTABLEDATETIMEPATTERN_OFFSET))(this);
		}

		::System::String* get_YearMonthPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_YEARMONTHPATTERN_OFFSET))(this);
		}

		::System::Void set_YearMonthPattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_YEARMONTHPATTERN_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_AbbreviatedDayNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDDAYNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_DayNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DAYNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AbbreviatedMonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDMONTHNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHNAMES_OFFSET))(this);
		}

		::System::Boolean get_HasSpacesInMonthNames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINMONTHNAMES_OFFSET))(this);
		}

		::System::Boolean get_HasSpacesInDayNames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINDAYNAMES_OFFSET))(this);
		}

		::System::String* internalGetMonthName(::System::Int32 month, ::System::Globalization::MonthNameStyles style, ::System::Boolean abbreviated)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::MonthNameStyles, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAME_OFFSET))(this, month, style, abbreviated);
		}

		::Il2CppArray<::System::String*>* internalGetGenitiveMonthNames(::System::Boolean abbreviated)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETGENITIVEMONTHNAMES_OFFSET))(this, abbreviated);
		}

		::Il2CppArray<::System::String*>* internalGetLeapYearMonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETLEAPYEARMONTHNAMES_OFFSET))(this);
		}

		::System::String* GetAbbreviatedDayName(::System::DayOfWeek dayofweek)
		{
			return ((::System::String*(*)(::PVOID, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDDAYNAME_OFFSET))(this, dayofweek);
		}

		static ::Il2CppArray<::System::String*>* GetCombinedPatterns(::Il2CppArray<::System::String*>* patterns1, ::Il2CppArray<::System::String*>* patterns2, ::System::String* connectString)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETCOMBINEDPATTERNS_OFFSET))(patterns1, patterns2, connectString);
		}

		::Il2CppArray<::System::String*>* GetAllDateTimePatterns(::System::Char format)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETALLDATETIMEPATTERNS_OFFSET))(this, format);
		}

		::System::String* GetDayName(::System::DayOfWeek dayofweek)
		{
			return ((::System::String*(*)(::PVOID, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETDAYNAME_OFFSET))(this, dayofweek);
		}

		::System::String* GetAbbreviatedMonthName(::System::Int32 month)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDMONTHNAME_OFFSET))(this, month);
		}

		::System::String* GetMonthName(::System::Int32 month)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMONTHNAME_OFFSET))(this, month);
		}

		static ::Il2CppArray<::System::String*>* GetMergedPatterns(::Il2CppArray<::System::String*>* patterns, ::System::String* defaultPattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMERGEDPATTERNS_OFFSET))(patterns, defaultPattern);
		}

		::Il2CppArray<::System::String*>* get_AllYearMonthPatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLYEARMONTHPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AllShortDatePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTDATEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AllShortTimePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTTIMEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AllLongDatePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGDATEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AllLongTimePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGTIMEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UnclonedYearMonthPatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDYEARMONTHPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UnclonedShortDatePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTDATEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UnclonedLongDatePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGDATEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UnclonedShortTimePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTTIMEPATTERNS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UnclonedLongTimePatterns()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGTIMEPATTERNS_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MonthGenitiveNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHGENITIVENAMES_OFFSET))(this);
		}

		::System::String* get_FullTimeSpanPositivePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANPOSITIVEPATTERN_OFFSET))(this);
		}

		::System::String* get_FullTimeSpanNegativePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANNEGATIVEPATTERN_OFFSET))(this);
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return ((::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_COMPAREINFO_OFFSET))(this);
		}

		static ::System::Void ValidateStyles(::System::Globalization::DateTimeStyles style, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::Globalization::DateTimeStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_VALIDATESTYLES_OFFSET))(style, parameterName);
		}

		::System::Globalization::DateTimeFormatFlags get_FormatFlags()
		{
			return ((::System::Globalization::DateTimeFormatFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FORMATFLAGS_OFFSET))(this);
		}

		::System::Boolean get_HasForceTwoDigitYears()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASFORCETWODIGITYEARS_OFFSET))(this);
		}

		::System::Boolean get_HasYearMonthAdjustment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASYEARMONTHADJUSTMENT_OFFSET))(this);
		}

		::System::Boolean YearMonthAdjustment(::System::Int32& year, ::System::Int32& month, ::System::Boolean parsedMonthName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_YEARMONTHADJUSTMENT_OFFSET))(this, year, month, parsedMonthName);
		}

		static ::System::Globalization::DateTimeFormatInfo* GetJapaneseCalendarDTFI()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETJAPANESECALENDARDTFI_OFFSET))();
		}

		static ::System::Globalization::DateTimeFormatInfo* GetTaiwanCalendarDTFI()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETTAIWANCALENDARDTFI_OFFSET))();
		}

		::System::Void ClearTokenHashTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLEARTOKENHASHTABLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::TokenHashValue*>* CreateTokenHashTable()
		{
			return ((::Il2CppArray<::System::Globalization::TokenHashValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CREATETOKENHASHTABLE_OFFSET))(this);
		}

		::System::Void AddMonthNames(::Il2CppArray<::System::Globalization::TokenHashValue*>* temp, ::System::String* monthPostfix)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ADDMONTHNAMES_OFFSET))(this, temp, monthPostfix);
		}

		static ::System::Boolean TryParseHebrewNumber(::System::__DTString& str, ::System::Boolean& badFormat, ::System::Int32& number)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TRYPARSEHEBREWNUMBER_OFFSET))(str, badFormat, number);
		}

		static ::System::Boolean IsHebrewChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ISHEBREWCHAR_OFFSET))(ch);
		}

		::System::Boolean Tokenize(::System::TokenType TokenMask, ::System::TokenType& tokenType, ::System::Int32& tokenValue, ::System::__DTString& str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TokenType, ::System::TokenType&, ::System::Int32&, ::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TOKENIZE_OFFSET))(this, TokenMask, tokenType, tokenValue, str);
		}

		::System::Void InsertAtCurrentHashNode(::Il2CppArray<::System::Globalization::TokenHashValue*>* hashTable, ::System::String* str, ::System::Char ch, ::System::TokenType tokenType, ::System::Int32 tokenValue, ::System::Int32 pos, ::System::Int32 hashcode, ::System::Int32 hashProbe)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*, ::System::Char, ::System::TokenType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTATCURRENTHASHNODE_OFFSET))(this, hashTable, str, ch, tokenType, tokenValue, pos, hashcode, hashProbe);
		}

		::System::Void InsertHash(::Il2CppArray<::System::Globalization::TokenHashValue*>* hashTable, ::System::String* str, ::System::TokenType tokenType, ::System::Int32 tokenValue)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*, ::System::TokenType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTHASH_OFFSET))(this, hashTable, str, tokenType, tokenValue);
		}
	};
}
