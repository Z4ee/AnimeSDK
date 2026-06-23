#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Globalization/EastAsianLunisolarCalendar.h"

namespace System::Globalization { class EraInfo; }

#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1D0B1970)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1800)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETYEARINFO_OFFSET UNITYSDK_OFFSET(0x1D0B1680)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B17F0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1D0B19A0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_CALERAINFO_OFFSET UNITYSDK_OFFSET(0x1D0B1670)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1580)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1D0B19B0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D0B1990)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B15A0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1D0B1610)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D0B1520)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1590)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1D0B15B0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D0B14C0)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B1A10)
#define SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B1910)

namespace System::Globalization
{
	inline static constexpr unsigned int ChineseLunisolarCalendar_TypeDefinitionIndex = 706;

	class ChineseLunisolarCalendar : public ::System::Globalization::EastAsianLunisolarCalendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_yinfo()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChineseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0xFA0);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(ChineseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x4F0);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(ChineseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x4F8);
		}
		// static const ::System::Int32 ChineseEra = 0x1; // 0x0
		// static const ::System::Int32 MIN_LUNISOLAR_YEAR = 0x76D; // 0x0
		// static const ::System::Int32 MAX_LUNISOLAR_YEAR = 0x834; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_YEAR = 0x76D; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_MONTH = 0x2; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_DAY = 0x13; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_YEAR = 0x835; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_MONTH = 0x1; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_DAY = 0x1C; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int32 get_MinCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET))(this);
		}

		::System::Int32 get_MaxCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET))(this);
		}

		::System::DateTime get_MinDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MINDATE_OFFSET))(this);
		}

		::System::DateTime get_MaxDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_MAXDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::EraInfo*>* get_CalEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_CALERAINFO_OFFSET))(this);
		}

		::System::Int32 GetYearInfo(::System::Int32 LunarYear, ::System::Int32 Index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETYEARINFO_OFFSET))(this, LunarYear, Index);
		}

		::System::Int32 GetYear(::System::Int32 year, ::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETYEAR_OFFSET))(this, year, time);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHINESELUNISOLARCALENDAR_GET_ERAS_OFFSET))(this);
		}
	};
}
