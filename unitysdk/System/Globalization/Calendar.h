#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD03DC0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1BD04010)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET UNITYSDK_OFFSET(0x1BD049D0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1BD03D40)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET UNITYSDK_OFFSET(0x1BD03EB0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BD03D30)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BD03D10)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BD03D00)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1BD04810)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1BD040A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET UNITYSDK_OFFSET(0x1BD046D0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET UNITYSDK_OFFSET(0x1BD045B0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x1BD043B0)
#define SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x1BD03EA0)
#define SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1BD04130)
#define SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1BD04820)
#define SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x1BD04220)
#define SYSTEM_GLOBALIZATION_CALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD03D20)

namespace System::Globalization
{
	inline static constexpr unsigned int Calendar_TypeDefinitionIndex = 734;

	class Calendar : public ::System::Object
	{
	public:
		::System::Int32 m_currentEraValue; // 0x10
		::System::Boolean m_isReadOnly; // 0x14
		::System::Int32 twoDigitYearMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR__CTOR_OFFSET))(this);
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentEraValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET))(this);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET))(this, a1);
		}

		::System::Boolean IsLeapYear(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean TryToDateTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::DateTime& a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean IsValidYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValidMonth(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsValidDay(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET))(this, a1);
		}

		static ::System::Int32 GetSystemTwoDigitYearSetting(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET))(a1, a2);
		}
	};
}
