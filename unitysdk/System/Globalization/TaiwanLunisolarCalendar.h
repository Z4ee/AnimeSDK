#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Globalization/EastAsianLunisolarCalendar.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1AE48700)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1AE485C0)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETYEARINFO_OFFSET UNITYSDK_OFFSET(0x1AE48430)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1AE485A0)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1AE48720)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_CALERAINFO_OFFSET UNITYSDK_OFFSET(0x1AE483D0)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1AE482E0)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1AE48740)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE48730)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1AE48300)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1AE48370)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1AE48280)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1AE482F0)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1AE48310)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1AE48220)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE48760)
#define SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE485E0)

namespace System::Globalization
{
	inline static constexpr unsigned int TaiwanLunisolarCalendar_TypeDefinitionIndex = 747;

	class TaiwanLunisolarCalendar : public ::System::Globalization::EastAsianLunisolarCalendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_yinfo()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TaiwanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x1060);
		}
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_taiwanLunisolarEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TaiwanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x1068);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TaiwanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TaiwanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x548);
		}
		// static const ::System::Int32 MIN_LUNISOLAR_YEAR = 0x778; // 0x0
		// static const ::System::Int32 MAX_LUNISOLAR_YEAR = 0x802; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_YEAR = 0x778; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_MONTH = 0x2; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_DAY = 0x12; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_YEAR = 0x803; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_MONTH = 0x2; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_DAY = 0xA; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int32 get_MinCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET))(this);
		}

		::System::Int32 get_MaxCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET))(this);
		}

		::System::DateTime get_MinDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MINDATE_OFFSET))(this);
		}

		::System::DateTime get_MaxDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_MAXDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::EraInfo*>* get_CalEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_CALERAINFO_OFFSET))(this);
		}

		::System::Int32 GetYearInfo(::System::Int32 LunarYear, ::System::Int32 Index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETYEARINFO_OFFSET))(this, LunarYear, Index);
		}

		::System::Int32 GetYear(::System::Int32 year, ::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETYEAR_OFFSET))(this, year, time);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_GET_ERAS_OFFSET))(this);
		}
	};
}
