#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B0BF9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1B0BF830)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_LERP_OFFSET UNITYSDK_OFFSET(0x1B0BFA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0BFEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BFE50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigWind_TypeDefinitionIndex = 26776;

	class WeatherConfigWind : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind** StaticGet_s_CachedWindConfig()
		{
			return (::UnityEngine::Rendering::Universal::SingleWeatherConfigWind**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigWind_TypeDefinitionIndex)->GetStaticField(0x21CB0);
		}
		::Il2CppArray<::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*>* configs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* GetIndex(::UnityEngine::Rendering::Universal::WeatherConfigWind* source, ::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*(*)(::UnityEngine::Rendering::Universal::WeatherConfigWind*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_GETINDEX_OFFSET))(source, index);
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* DefaultConfig()
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_DEFAULTCONFIG_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* Lerp(::UnityEngine::Rendering::Universal::WeatherConfigWind* source, ::System::Int32 leftIndex, ::System::Int32 rightIndex, ::System::Single lerpV)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*(*)(::UnityEngine::Rendering::Universal::WeatherConfigWind*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_LERP_OFFSET))(source, leftIndex, rightIndex, lerpV);
		}
	};
}
