#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_GLOBALIZATION_REGIONINFO_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1BD2BDB0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_CONSTRUCT_INTERNAL_REGION_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x1BD2B940)
#define SYSTEM_GLOBALIZATION_REGIONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD2BAB0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GETBYTERRITORY_OFFSET UNITYSDK_OFFSET(0x1BD2B750)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD2BC40)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x1BD2B950)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYNATIVENAME_OFFSET UNITYSDK_OFFSET(0x1BD2BA60)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BD2B960)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x1BD2B400)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1BD2B970)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x1BD2B980)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x1BD2B990)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISMETRIC_OFFSET UNITYSDK_OFFSET(0x1BD2B9A0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISOCURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BD2BA40)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD2BA70)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_NATIVENAME_OFFSET UNITYSDK_OFFSET(0x1BD2BA50)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERISOREGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD2BA80)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERWINDOWSREGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD2BA90)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_TWOLETTERISOREGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD2BAA0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD2BD30)
#define SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD2B860)
#define SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD2B530)
#define SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2B6B0)

namespace System::Globalization
{
	inline static constexpr unsigned int RegionInfo_TypeDefinitionIndex = 795;

	class RegionInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::RegionInfo** StaticGet_currentRegion()
		{
			return (::System::Globalization::RegionInfo**)Il2CppClass::FromTypeDefinitionIndex(RegionInfo_TypeDefinitionIndex)->GetStaticField(0xA160);
		}
		::System::Int32 regionId; // 0x10
		::System::String* iso2Name; // 0x18
		::System::String* iso3Name; // 0x20
		::System::String* win3Name; // 0x28
		::System::String* englishName; // 0x30
		::System::String* nativeName; // 0x38
		::System::String* currencySymbol; // 0x40
		::System::String* isoCurrencySymbol; // 0x48
		::System::String* currencyEnglishName; // 0x50
		::System::String* currencyNativeName; // 0x58

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Globalization::RegionInfo* get_CurrentRegion()
		{
			return ((::System::Globalization::RegionInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENTREGION_OFFSET))();
		}

		::System::Boolean GetByTerritory(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GETBYTERRITORY_OFFSET))(this, a1);
		}

		::System::Boolean construct_internal_region_from_name(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_CONSTRUCT_INTERNAL_REGION_FROM_NAME_OFFSET))(this, a1);
		}

		::System::String* get_CurrencyEnglishName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYENGLISHNAME_OFFSET))(this);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_EnglishName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ENGLISHNAME_OFFSET))(this);
		}

		::System::Int32 get_GeoId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_GEOID_OFFSET))(this);
		}

		::System::Boolean get_IsMetric()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISMETRIC_OFFSET))(this);
		}

		::System::String* get_ISOCurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISOCURRENCYSYMBOL_OFFSET))(this);
		}

		::System::String* get_NativeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_NATIVENAME_OFFSET))(this);
		}

		::System::String* get_CurrencyNativeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYNATIVENAME_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ThreeLetterISORegionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERISOREGIONNAME_OFFSET))(this);
		}

		::System::String* get_ThreeLetterWindowsRegionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERWINDOWSREGIONNAME_OFFSET))(this);
		}

		::System::String* get_TwoLetterISORegionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_TWOLETTERISOREGIONNAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Void ClearCachedData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_CLEARCACHEDDATA_OFFSET))();
		}
	};
}
