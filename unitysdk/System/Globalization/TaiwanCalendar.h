#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1BD2CDA0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1BD2CE50)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1BD2CD80)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD17DF0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1BD2CEF0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1BD2CEC0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1BD2CF10)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1BD2CFC0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1BD2D050)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BD2CD70)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BD2CD60)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BD2CD00)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1BD2D070)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1BD2CFE0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1BD2D030)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1BD2D0B0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD2D1D0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2CB90)

namespace System::Globalization
{
	inline static constexpr unsigned int TaiwanCalendar_TypeDefinitionIndex = 764;

	class TaiwanCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_taiwanEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0xA290);
		}
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0xA298);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0x23C0);
		}
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CCTOR_OFFSET))();
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET))(this, a1);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime a1)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET))(this, a1);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetEra(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET))(this, a1);
		}

		::System::Int32 GetMonth(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET))(this, a1);
		}

		::System::Int32 GetYear(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET))(this, a1);
		}

		::System::Boolean IsLeapYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET))(this, a1, a2);
		}

		::System::DateTime ToDateTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, a1);
		}
	};
}
