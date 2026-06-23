#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;

#define WEATHERCONFIGLERPUTILS_LERP_OFFSET UNITYSDK_OFFSET(0x1AF6F200)
#define WEATHERCONFIGLERPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF85060)

inline static constexpr unsigned int WeatherConfigLerpUtils_TypeDefinitionIndex = 26628;

class WeatherConfigLerpUtils : public ::System::Object
{
public:
	static ::WeatherConfig** StaticGet_result()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigLerpUtils_TypeDefinitionIndex)->GetStaticField(0x20A30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIGLERPUTILS__CCTOR_OFFSET))();
	}

	static ::WeatherConfig* Lerp(::WeatherConfig* from, ::WeatherConfig* to, ::System::Single t, ::System::Boolean isPartialOverride)
	{
		return ((::WeatherConfig*(*)(::WeatherConfig*, ::WeatherConfig*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIGLERPUTILS_LERP_OFFSET))(from, to, t, isPartialOverride);
	}
};
