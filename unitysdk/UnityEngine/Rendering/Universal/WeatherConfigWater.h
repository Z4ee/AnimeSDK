#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class WaterResources; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x19AD3910)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x19AD3990)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_LERP_OFFSET UNITYSDK_OFFSET(0x19AD3BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD3F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD3EC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigWater_TypeDefinitionIndex = 29809;

	class WeatherConfigWater : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater** StaticGet_s_CachedSingleWaterConfig()
		{
			return (::UnityEngine::Rendering::Universal::SingleWeatherConfigWater**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigWater_TypeDefinitionIndex)->GetStaticField(0x23E00);
		}
		::UnityEngine::Rendering::Universal::WaterResources* waterResources; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*>* configs; // 0x20
		::System::Int32 selectedIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* DefaultConfig()
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_DEFAULTCONFIG_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* GetIndex(::UnityEngine::Rendering::Universal::WeatherConfigWater* source, ::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*(*)(::UnityEngine::Rendering::Universal::WeatherConfigWater*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_GETINDEX_OFFSET))(source, index);
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* Lerp(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* left, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* right, ::System::Single lerpV)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*(*)(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWATER_LERP_OFFSET))(left, right, lerpV);
		}
	};
}
