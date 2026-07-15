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

#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ADDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172BDFA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLEARTOKENHASHTABLE_OFFSET UNITYSDK_OFFSET(0x172B6EB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x172AF770)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_CREATETOKENHASHTABLE_OFFSET UNITYSDK_OFFSET(0x172BAC30)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDDAYNAME_OFFSET UNITYSDK_OFFSET(0x172B8CE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDERANAME_OFFSET UNITYSDK_OFFSET(0x172B71B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDMONTHNAME_OFFSET UNITYSDK_OFFSET(0x172B9620)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETALLDATETIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B8F40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETCOMBINEDPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B8E10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETDAYNAME_OFFSET UNITYSDK_OFFSET(0x172B94F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETERANAME_OFFSET UNITYSDK_OFFSET(0x172B6FA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x172B6E10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x172B6C00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETJAPANESECALENDARDTFI_OFFSET UNITYSDK_OFFSET(0x172BA710)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMERGEDPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B9880)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMONTHNAME_OFFSET UNITYSDK_OFFSET(0x172B9750)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETTAIWANCALENDARDTFI_OFFSET UNITYSDK_OFFSET(0x172BA9A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDDAYNAMES_OFFSET UNITYSDK_OFFSET(0x172B7E10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x172B7320)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDERANAMES_OFFSET UNITYSDK_OFFSET(0x172B70E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B7FD0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B6690)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLLONGTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B65C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B67D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLSHORTTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B6700)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ALLYEARMONTHPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B6840)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_AMDESIGNATOR_OFFSET UNITYSDK_OFFSET(0x172B6E50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x172B6E60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x172B9E00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x172B4A60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x172B4A90)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x172B6AA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x172B73F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DATETIMEOFFSETPATTERN_OFFSET UNITYSDK_OFFSET(0x172B79A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_DAYNAMES_OFFSET UNITYSDK_OFFSET(0x172B7EF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ERANAMES_OFFSET UNITYSDK_OFFSET(0x172B6ED0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x172B81B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B7400)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B9D90)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_FULLTIMESPANPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B9C50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALLONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B78E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_GENERALSHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B7820)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASFORCETWODIGITYEARS_OFFSET UNITYSDK_OFFSET(0x172BA330)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINDAYNAMES_OFFSET UNITYSDK_OFFSET(0x172B88E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASSPACESINMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B8190)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_HASYEARMONTHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x172BA3C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x172B68B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x172B9B60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LANGUAGENAME_OFFSET UNITYSDK_OFFSET(0x172B4AE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B6460)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B63F0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHDAYPATTERN_OFFSET UNITYSDK_OFFSET(0x172B75E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHGENITIVENAMES_OFFSET UNITYSDK_OFFSET(0x172B9B70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_MONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B80B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_OPTIONALCALENDARS_OFFSET UNITYSDK_OFFSET(0x172B6E70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_PMDESIGNATOR_OFFSET UNITYSDK_OFFSET(0x172B76B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_RFC1123PATTERN_OFFSET UNITYSDK_OFFSET(0x172B76C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B6520)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B64B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SORTABLEDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B7810)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_TIMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x172B7CF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B74D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDLONGTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B75A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTDATEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B7700)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDSHORTTIMEPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B77D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNCLONEDYEARMONTHPATTERNS_OFFSET UNITYSDK_OFFSET(0x172B7D40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_UNIVERSALSORTABLEDATETIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B7D00)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_YEARMONTHPATTERN_OFFSET UNITYSDK_OFFSET(0x172B6570)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITIALIZEOVERRIDABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x172B5310)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITPREFEREXISTINGTOKENS_OFFSET UNITYSDK_OFFSET(0x172B4A50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTATCURRENTHASHNODE_OFFSET UNITYSDK_OFFSET(0x172BEAE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTHASH_OFFSET UNITYSDK_OFFSET(0x172BD810)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDDAYOFWEEKNAMES_OFFSET UNITYSDK_OFFSET(0x172B4B10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B4CB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETDAYOFWEEKNAMES_OFFSET UNITYSDK_OFFSET(0x172B4BE0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETGENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B8A70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETLEAPYEARMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B8C10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x172B4D80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAME_OFFSET UNITYSDK_OFFSET(0x172B8900)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ISHEBREWCHAR_OFFSET UNITYSDK_OFFSET(0x172BE5C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x172B5530)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x172B5FF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x172B5040)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B5BA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B5E30)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTDATEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B5C80)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTTIMEPATTERN_OFFSET UNITYSDK_OFFSET(0x172B5F20)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_YEARMONTHPATTERN_OFFSET UNITYSDK_OFFSET(0x172B5D60)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x172BE5D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TRYPARSEHEBREWNUMBER_OFFSET UNITYSDK_OFFSET(0x172BE0B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x172B9E40)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_YEARMONTHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x172BA3E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BEDA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172B0650)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172B4E50)

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfo_TypeDefinitionIndex = 739;

	class DateTimeFormatInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_s_zhtwDTFI()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0xA050);
		}
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_s_jajpDTFI()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0xA058);
		}
		static ::System::Collections::Hashtable** StaticGet_s_calendarNativeNames()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0xA060);
		}
		static ::System::Globalization::DateTimeFormatInfo** StaticGet_invariantInfo()
		{
			return (::System::Globalization::DateTimeFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0xA068);
		}
		static ::System::Boolean* StaticGet_preferExistingTokens()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4240);
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

		::System::Void _ctor_1(::System::Globalization::CultureData* a1, ::System::Globalization::Calendar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO__CTOR_1_OFFSET))(this, a1, a2);
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

		::System::Void InitializeOverridableProperties(::System::Globalization::CultureData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INITIALIZEOVERRIDABLEPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONDESERIALIZED_OFFSET))(this, a1);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ONSERIALIZING_OFFSET))(this, a1);
		}

		static ::System::Globalization::DateTimeFormatInfo* get_InvariantInfo()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_INVARIANTINFO_OFFSET))();
		}

		static ::System::Globalization::DateTimeFormatInfo* get_CurrentInfo()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_CURRENTINFO_OFFSET))();
		}

		static ::System::Globalization::DateTimeFormatInfo* GetInstance(::System::IFormatProvider* a1)
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETINSTANCE_OFFSET))(a1);
		}

		::System::Object* GetFormat(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETFORMAT_OFFSET))(this, a1);
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

		::System::Void set_Calendar(::System::Globalization::Calendar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_CALENDAR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_OptionalCalendars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_OPTIONALCALENDARS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_EraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ERANAMES_OFFSET))(this);
		}

		::System::String* GetEraName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETERANAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_AbbreviatedEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_ABBREVIATEDERANAMES_OFFSET))(this);
		}

		::System::String* GetAbbreviatedEraName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDERANAME_OFFSET))(this, a1);
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

		::System::Void set_LongDatePattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGDATEPATTERN_OFFSET))(this, a1);
		}

		::System::String* get_LongTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_LONGTIMEPATTERN_OFFSET))(this);
		}

		::System::Void set_LongTimePattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_LONGTIMEPATTERN_OFFSET))(this, a1);
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

		::System::Void set_ShortDatePattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTDATEPATTERN_OFFSET))(this, a1);
		}

		::System::String* get_ShortTimePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GET_SHORTTIMEPATTERN_OFFSET))(this);
		}

		::System::Void set_ShortTimePattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_SHORTTIMEPATTERN_OFFSET))(this, a1);
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

		::System::Void set_YearMonthPattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_SET_YEARMONTHPATTERN_OFFSET))(this, a1);
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

		::System::String* internalGetMonthName(::System::Int32 a1, ::System::Globalization::MonthNameStyles a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::MonthNameStyles, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETMONTHNAME_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* internalGetGenitiveMonthNames(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETGENITIVEMONTHNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* internalGetLeapYearMonthNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INTERNALGETLEAPYEARMONTHNAMES_OFFSET))(this);
		}

		::System::String* GetAbbreviatedDayName(::System::DayOfWeek a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDDAYNAME_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::String*>* GetCombinedPatterns(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETCOMBINEDPATTERNS_OFFSET))(a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* GetAllDateTimePatterns(::System::Char a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETALLDATETIMEPATTERNS_OFFSET))(this, a1);
		}

		::System::String* GetDayName(::System::DayOfWeek a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETDAYNAME_OFFSET))(this, a1);
		}

		::System::String* GetAbbreviatedMonthName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETABBREVIATEDMONTHNAME_OFFSET))(this, a1);
		}

		::System::String* GetMonthName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMONTHNAME_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::String*>* GetMergedPatterns(::Il2CppArray<::System::String*>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_GETMERGEDPATTERNS_OFFSET))(a1, a2);
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

		static ::System::Void ValidateStyles(::System::Globalization::DateTimeStyles a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Globalization::DateTimeStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_VALIDATESTYLES_OFFSET))(a1, a2);
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

		::System::Boolean YearMonthAdjustment(::System::Int32& a1, ::System::Int32& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_YEARMONTHADJUSTMENT_OFFSET))(this, a1, a2, a3);
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

		::System::Void AddMonthNames(::Il2CppArray<::System::Globalization::TokenHashValue*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ADDMONTHNAMES_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryParseHebrewNumber(::System::__DTString& a1, ::System::Boolean& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::__DTString&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TRYPARSEHEBREWNUMBER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsHebrewChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_ISHEBREWCHAR_OFFSET))(a1);
		}

		::System::Boolean Tokenize(::System::TokenType a1, ::System::TokenType& a2, ::System::Int32& a3, ::System::__DTString& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TokenType, ::System::TokenType&, ::System::Int32&, ::System::__DTString&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_TOKENIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InsertAtCurrentHashNode(::Il2CppArray<::System::Globalization::TokenHashValue*>* a1, ::System::String* a2, ::System::Char a3, ::System::TokenType a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*, ::System::Char, ::System::TokenType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTATCURRENTHASHNODE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void InsertHash(::Il2CppArray<::System::Globalization::TokenHashValue*>* a1, ::System::String* a2, ::System::TokenType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Globalization::TokenHashValue*>*, ::System::String*, ::System::TokenType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_INSERTHASH_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
