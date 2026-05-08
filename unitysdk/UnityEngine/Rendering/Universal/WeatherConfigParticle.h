#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigParticle; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B08E720)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1B08E7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_LERP_OFFSET UNITYSDK_OFFSET(0x1B08E960)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B08EE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08ED90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigParticle_TypeDefinitionIndex = 29807;

	class WeatherConfigParticle : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle** StaticGet_s_CachedParticleConfig()
		{
			return (::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigParticle_TypeDefinitionIndex)->GetStaticField(0x23B20);
		}
		::System::Boolean isDynamicTime; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*>* configs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* DefaultConfig()
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_DEFAULTCONFIG_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* GetIndex(::UnityEngine::Rendering::Universal::WeatherConfigParticle* source, ::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*(*)(::UnityEngine::Rendering::Universal::WeatherConfigParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_GETINDEX_OFFSET))(source, index);
		}

		static ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* Lerp(::UnityEngine::Rendering::Universal::WeatherConfigParticle* source, ::System::Int32 leftIndex, ::System::Int32 rightIndex, ::System::Single lerpV)
		{
			return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*(*)(::UnityEngine::Rendering::Universal::WeatherConfigParticle*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGPARTICLE_LERP_OFFSET))(source, leftIndex, rightIndex, lerpV);
		}
	};
}
