#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Globalization/EastAsianLunisolarCalendar.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1CE7FCA0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1CE7F970)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETYEARINFO_OFFSET UNITYSDK_OFFSET(0x1CE7F7F0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1CE7F950)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1CE7FCC0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_CALERAINFO_OFFSET UNITYSDK_OFFSET(0x1CE7F790)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1CE7F6A0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1CE7FCE0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CE7FCD0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1CE7F6C0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1CE7F730)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1CE7F640)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1CE7F6B0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1CE7F6D0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1CE7F5E0)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_TRIMERAS_OFFSET UNITYSDK_OFFSET(0x1CE7F990)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7FD00)
#define SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7FB50)

namespace System::Globalization
{
	inline static constexpr unsigned int JapaneseLunisolarCalendar_TypeDefinitionIndex = 738;

	class JapaneseLunisolarCalendar : public ::System::Globalization::EastAsianLunisolarCalendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_yinfo()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JapaneseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0xEE0);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(JapaneseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x490);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(JapaneseLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x498);
		}
		// static const ::System::Int32 JapaneseEra = 0x1; // 0x0
		// static const ::System::Int32 MIN_LUNISOLAR_YEAR = 0x7A8; // 0x0
		// static const ::System::Int32 MAX_LUNISOLAR_YEAR = 0x801; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_YEAR = 0x7A8; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_MONTH = 0x1; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_DAY = 0x1C; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_YEAR = 0x802; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_MONTH = 0x1; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_DAY = 0x16; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int32 get_MinCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET))(this);
		}

		::System::Int32 get_MaxCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET))(this);
		}

		::System::DateTime get_MinDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MINDATE_OFFSET))(this);
		}

		::System::DateTime get_MaxDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_MAXDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::EraInfo*>* get_CalEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_CALERAINFO_OFFSET))(this);
		}

		::System::Int32 GetYearInfo(::System::Int32 LunarYear, ::System::Int32 Index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETYEARINFO_OFFSET))(this, LunarYear, Index);
		}

		::System::Int32 GetYear(::System::Int32 year, ::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETYEAR_OFFSET))(this, year, time);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* TrimEras(::Il2CppArray<::System::Globalization::EraInfo*>* baseEras)
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)(::Il2CppArray<::System::Globalization::EraInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_TRIMERAS_OFFSET))(baseEras);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESELUNISOLARCALENDAR_GET_ERAS_OFFSET))(this);
		}
	};
}
