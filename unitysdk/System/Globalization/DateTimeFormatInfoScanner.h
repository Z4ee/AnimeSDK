#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/DateTimeFormatInfoScanner_FoundDatePattern.h"
#include "unitysdk/System/Globalization/FORMATFLAGS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET UNITYSDK_OFFSET(0x193CFD70)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET UNITYSDK_OFFSET(0x193D0190)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET UNITYSDK_OFFSET(0x193D00A0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET UNITYSDK_OFFSET(0x193D0F20)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET UNITYSDK_OFFSET(0x193D12D0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET UNITYSDK_OFFSET(0x193D0D90)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET UNITYSDK_OFFSET(0x193D0A10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET UNITYSDK_OFFSET(0x193D0D50)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET UNITYSDK_OFFSET(0x193D14B0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET UNITYSDK_OFFSET(0x193D1480)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x193D0E90)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GET_KNOWNWORDS_OFFSET UNITYSDK_OFFSET(0x193CF610)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET UNITYSDK_OFFSET(0x193D0640)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET UNITYSDK_OFFSET(0x193D0530)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET UNITYSDK_OFFSET(0x193CFC90)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x193D14C0)

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfoScanner_TypeDefinitionIndex = 717;

	class DateTimeFormatInfoScanner : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_s_knownWords()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfoScanner_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		// static const ::System::Char MonthPostfixChar; // 0x0
		// static const ::System::Char IgnorableSymbolChar; // 0x0
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
		::System::Collections::Generic::List_1<::System::String*>* m_dateWords; // 0x10
		::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern m_ymdFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_KnownWords()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GET_KNOWNWORDS_OFFSET))();
		}

		static ::System::Int32 SkipWhiteSpacesAndNonLetter(::System::String* pattern, ::System::Int32 currentIndex)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET))(pattern, currentIndex);
		}

		::System::Void AddDateWordOrPostfix(::System::String* formatPostfix, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET))(this, formatPostfix, str);
		}

		::System::Int32 AddDateWords(::System::String* pattern, ::System::Int32 index, ::System::String* formatPostfix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET))(this, pattern, index, formatPostfix);
		}

		static ::System::Int32 ScanRepeatChar(::System::String* pattern, ::System::Char ch, ::System::Int32 index, ::System::Int32& count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Char, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET))(pattern, ch, index, count);
		}

		::System::Void AddIgnorableSymbols(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET))(this, text);
		}

		::System::Void ScanDateWord(::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET))(this, pattern);
		}

		::Il2CppArray<::System::String*>* GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET))(this, dtfi);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::Il2CppArray<::System::String*>* monthNames, ::Il2CppArray<::System::String*>* genitveMonthNames, ::Il2CppArray<::System::String*>* abbrevMonthNames, ::Il2CppArray<::System::String*>* genetiveAbbrevMonthNames)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET))(monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::Il2CppArray<::System::String*>* monthNames, ::Il2CppArray<::System::String*>* genitveMonthNames, ::Il2CppArray<::System::String*>* abbrevMonthNames, ::Il2CppArray<::System::String*>* genetiveAbbrevMonthNames)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET))(monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::Il2CppArray<::System::String*>* dayNames, ::Il2CppArray<::System::String*>* abbrevDayNames)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET))(dayNames, abbrevDayNames);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(::System::Int32 calID)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET))(calID);
		}

		static ::System::Boolean EqualStringArrays(::Il2CppArray<::System::String*>* array1, ::Il2CppArray<::System::String*>* array2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET))(array1, array2);
		}

		static ::System::Boolean ArrayElementsHaveSpace(::Il2CppArray<::System::String*>* array)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET))(array);
		}

		static ::System::Boolean ArrayElementsBeginWithDigit(::Il2CppArray<::System::String*>* array)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET))(array);
		}
	};
}
