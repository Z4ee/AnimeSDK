#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CALENDARDATA_CALENDARIDTOCULTURENAME_OFFSET UNITYSDK_OFFSET(0x18B8DE70)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_FILL_CALENDAR_DATA_OFFSET UNITYSDK_OFFSET(0x18B8DEE0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_GETCALENDARDATA_OFFSET UNITYSDK_OFFSET(0x18B8DDB0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEABBREVIATEDERANAMES_OFFSET UNITYSDK_OFFSET(0x18B8DA70)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEERANAMES_OFFSET UNITYSDK_OFFSET(0x18B8D510)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETCALENDARDATA_OFFSET UNITYSDK_OFFSET(0x18B8D4C0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETTWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x18B8DED0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8C3C0)
#define SYSTEM_GLOBALIZATION_CALENDARDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B8CD50)
#define SYSTEM_GLOBALIZATION_CALENDARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8C3B0)

namespace System::Globalization
{
	inline static constexpr unsigned int CalendarData_TypeDefinitionIndex = 704;

	class CalendarData : public ::System::Object
	{
	public:
		static ::System::Globalization::CalendarData** StaticGet_Invariant()
		{
			return (::System::Globalization::CalendarData**)Il2CppClass::FromTypeDefinitionIndex(CalendarData_TypeDefinitionIndex)->GetStaticField(0x11C0);
		}
		// static const ::System::Int32 MAX_CALENDARS = 0x17; // 0x0
		::System::String* sNativeName; // 0x10
		::Il2CppArray<::System::String*>* saShortDates; // 0x18
		::Il2CppArray<::System::String*>* saYearMonths; // 0x20
		::Il2CppArray<::System::String*>* saLongDates; // 0x28
		::System::String* sMonthDay; // 0x30
		::Il2CppArray<::System::String*>* saEraNames; // 0x38
		::Il2CppArray<::System::String*>* saAbbrevEraNames; // 0x40
		::Il2CppArray<::System::String*>* saAbbrevEnglishEraNames; // 0x48
		::Il2CppArray<::System::String*>* saDayNames; // 0x50
		::Il2CppArray<::System::String*>* saAbbrevDayNames; // 0x58
		::Il2CppArray<::System::String*>* saSuperShortDayNames; // 0x60
		::Il2CppArray<::System::String*>* saMonthNames; // 0x68
		::Il2CppArray<::System::String*>* saAbbrevMonthNames; // 0x70
		::Il2CppArray<::System::String*>* saMonthGenitiveNames; // 0x78
		::Il2CppArray<::System::String*>* saAbbrevMonthGenitiveNames; // 0x80
		::Il2CppArray<::System::String*>* saLeapYearMonthNames; // 0x88
		::System::Int32 iTwoDigitYearMax; // 0x90
		::System::Int32 iCurrentEra; // 0x94
		::System::Boolean bUseUserOverrides; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1(::System::String* localeName, ::System::Int32 calendarId, ::System::Boolean bUseUserOverrides)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA__CTOR_1_OFFSET))(this, localeName, calendarId, bUseUserOverrides);
		}

		::System::Void InitializeEraNames(::System::String* localeName, ::System::Int32 calendarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEERANAMES_OFFSET))(this, localeName, calendarId);
		}

		::System::Void InitializeAbbreviatedEraNames(::System::String* localeName, ::System::Int32 calendarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_INITIALIZEABBREVIATEDERANAMES_OFFSET))(this, localeName, calendarId);
		}

		static ::System::Globalization::CalendarData* GetCalendarData(::System::Int32 calendarId)
		{
			return ((::System::Globalization::CalendarData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_GETCALENDARDATA_OFFSET))(calendarId);
		}

		static ::System::String* CalendarIdToCultureName(::System::Int32 calendarId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_CALENDARIDTOCULTURENAME_OFFSET))(calendarId);
		}

		static ::System::Int32 nativeGetTwoDigitYearMax(::System::Int32 calID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETTWODIGITYEARMAX_OFFSET))(calID);
		}

		static ::System::Boolean nativeGetCalendarData(::System::Globalization::CalendarData* data, ::System::String* localeName, ::System::Int32 calendarId)
		{
			return ((::System::Boolean(*)(::System::Globalization::CalendarData*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_NATIVEGETCALENDARDATA_OFFSET))(data, localeName, calendarId);
		}

		::System::Boolean fill_calendar_data(::System::String* localeName, ::System::Int32 datetimeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDARDATA_FILL_CALENDAR_DATA_OFFSET))(this, localeName, datetimeIndex);
		}
	};
}
