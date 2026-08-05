#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightOptimizeConfig_CommonOptimizeOption.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightOptimizeConfig_FeatureToggleOptimizeOption.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOPTIMIZECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D2F00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_TypeDefinitionIndex = 27161;

	class LightOptimizeConfig : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::LightOptimizeConfig_FeatureToggleOptimizeOption featureToggleOptimizeOption; // 0x10
		::UnityEngine::Rendering::Universal::LightOptimizeConfig_CommonOptimizeOption lightDistanceFadeOption; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOPTIMIZECONFIG__CTOR_OFFSET))(this);
		}
	};
}
