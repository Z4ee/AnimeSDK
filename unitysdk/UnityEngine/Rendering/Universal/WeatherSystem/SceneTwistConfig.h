#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENETWISTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1AF14C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENETWISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF150C0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SceneTwistConfig_TypeDefinitionIndex = 26991;

	class SceneTwistConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig*>
	{
	public:
		::System::Boolean mainCameraAsPivot; // 0x18
		::UnityEngine::GameObject* worldTwistPivot; // 0x20
		::System::Single worldTwistBendSize; // 0x28
		::System::Single worldTwistRotationSpeed; // 0x2C
		::System::Single worldTwistSafeDistance; // 0x30
		::System::Single worldTwistFadeDistance; // 0x34
		::UnityEngine::Texture* worldTwistAdditionalNoiseMap; // 0x38
		::System::Single worldTwistNoise1Tiling; // 0x40
		::UnityEngine::Vector2 worldTwistNoise1Speed; // 0x44
		::System::Single worldTwistNoise1Intensity; // 0x4C
		::System::Single worldTwistNoise2Tiling; // 0x50
		::UnityEngine::Vector2 worldTwistNoise2Speed; // 0x54
		::System::Single worldTwistNoise2Intensity; // 0x5C
		::System::Boolean worldTwistEnableCustomDirection; // 0x60
		::System::Single worldTwistCustomDirection; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENETWISTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneTwistConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENETWISTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
