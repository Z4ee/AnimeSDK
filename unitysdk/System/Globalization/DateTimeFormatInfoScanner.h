#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/DateTimeFormatInfoScanner_FoundDatePattern.h"
#include "unitysdk/System/Globalization/FORMATFLAGS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET UNITYSDK_OFFSET(0x186E3EA0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET UNITYSDK_OFFSET(0x186E4500)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET UNITYSDK_OFFSET(0x186E4370)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET UNITYSDK_OFFSET(0x186E4CC0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET UNITYSDK_OFFSET(0x186E4EC0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET UNITYSDK_OFFSET(0x186E4C10)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET UNITYSDK_OFFSET(0x186E24C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET UNITYSDK_OFFSET(0x186DF7E0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET UNITYSDK_OFFSET(0x186DFBF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET UNITYSDK_OFFSET(0x186DFAB0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186DF820)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GET_KNOWNWORDS_OFFSET UNITYSDK_OFFSET(0x186E3780)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET UNITYSDK_OFFSET(0x186E4950)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET UNITYSDK_OFFSET(0x186E48C0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET UNITYSDK_OFFSET(0x186E3DF0)
#define SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x186E2480)

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfoScanner_TypeDefinitionIndex = 743;

	class DateTimeFormatInfoScanner : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_s_knownWords()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatInfoScanner_TypeDefinitionIndex)->GetStaticField(0x6BD0);
		}
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

		static ::System::Int32 SkipWhiteSpacesAndNonLetter(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SKIPWHITESPACESANDNONLETTER_OFFSET))(a1, a2);
		}

		::System::Void AddDateWordOrPostfix(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDORPOSTFIX_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddDateWords(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDDATEWORDS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 ScanRepeatChar(::System::String* a1, ::System::Char a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Char, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANREPEATCHAR_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void AddIgnorableSymbols(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ADDIGNORABLESYMBOLS_OFFSET))(this, a1);
		}

		::System::Void ScanDateWord(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_SCANDATEWORD_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETDATEWORDSOFDTFI_OFFSET))(this, a1);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGGENITIVEMONTH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINMONTHNAMES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSESPACEINDAYNAMES_OFFSET))(a1, a2);
		}

		static ::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(::System::Int32 a1)
		{
			return ((::System::Globalization::FORMATFLAGS(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_GETFORMATFLAGUSEHEBREWCALENDAR_OFFSET))(a1);
		}

		static ::System::Boolean EqualStringArrays(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_EQUALSTRINGARRAYS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ArrayElementsHaveSpace(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSHAVESPACE_OFFSET))(a1);
		}

		static ::System::Boolean ArrayElementsBeginWithDigit(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DATETIMEFORMATINFOSCANNER_ARRAYELEMENTSBEGINWITHDIGIT_OFFSET))(a1);
		}
	};
}
