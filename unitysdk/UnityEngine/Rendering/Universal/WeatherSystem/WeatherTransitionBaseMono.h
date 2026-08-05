#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D3152B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D315210)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_UPDATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1D3151A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D315350)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherTransitionBaseMono_TypeDefinitionIndex = 27946;

	class WeatherTransitionBaseMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO__CTOR_OFFSET))(this);
		}

		::System::Void UpdateTransition(::System::Single foggyIntensity, ::System::Single specialRedIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_UPDATETRANSITION_OFFSET))(this, foggyIntensity, specialRedIntensity);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONBASEMONO_ONDISABLE_OFFSET))(this);
		}
	};
}
