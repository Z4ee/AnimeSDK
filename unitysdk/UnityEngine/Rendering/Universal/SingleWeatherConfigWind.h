#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BC420)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleWeatherConfigWind_TypeDefinitionIndex = 27160;

	class SingleWeatherConfigWind : public ::System::Object
	{
	public:
		::System::Single mainWindDirection; // 0x10
		::System::Single mainWindIntensity; // 0x14
		::System::Single extraWindIntensity; // 0x18
		::System::Single shakeFrequence; // 0x1C
		::System::Single animationLoopTime; // 0x20
		::UnityEngine::AnimationCurve* mainWindIntensityCurve; // 0x28
		::UnityEngine::Vector3 pbdWindDirection; // 0x30
		::System::Single pbdWindIntensity; // 0x3C
		::System::Boolean useProceduralWindCurve; // 0x40
		::System::Single pbdWindFerquence; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWIND__CTOR_OFFSET))(this);
		}
	};
}
