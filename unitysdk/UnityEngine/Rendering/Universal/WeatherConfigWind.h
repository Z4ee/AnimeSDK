#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x191500E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1914FF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND_LERP_OFFSET UNITYSDK_OFFSET(0x19150160)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CCTOR_OFFSET UNITYSDK_OFFSET(0x191505D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x19150540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigWind_TypeDefinitionIndex = 29811;

	class WeatherConfigWind : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind** StaticGet_s_CachedWindConfig()
		{
			return (::UnityEngine::Rendering::Universal::SingleWeatherConfigWind**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigWind_TypeDefinitionIndex)->GetStaticField(0x24480);
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
