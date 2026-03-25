#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x16313300)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x16313340)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x163132E0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x162FDE10)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x163133E0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x163133B0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x16313400)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x16313440)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x163134D0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x163132D0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x163132C0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x16313260)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x163134F0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x16313460)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x163134B0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x16313530)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16313650)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16313090)

namespace System::Globalization
{
	inline static constexpr unsigned int TaiwanCalendar_TypeDefinitionIndex = 761;

	class TaiwanCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_taiwanEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0x4C00);
		}
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0x4C08);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0x2860);
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

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}
