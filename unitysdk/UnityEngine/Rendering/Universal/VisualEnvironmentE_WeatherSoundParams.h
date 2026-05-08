#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherSoundParams_TypeDefinitionIndex = 29916;

	struct alignas(8) VisualEnvironmentE_WeatherSoundParams
	{
		::System::String* soundActionData; // 0x10
		::UnityEngine::Vector3 triggerPosition; // 0x18
	};
}
