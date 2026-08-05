#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_RTASCULLINGSETTINGS_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1CB1B6E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTASCullingSettings_TypeDefinitionIndex = 27743;

	struct alignas(4) RTASCullingSettings
	{
		::System::Boolean distanceCullingEnable; // 0x10
		::System::Single distanceCullingDistance; // 0x14
		::System::Single distanceCullingDynamicGeometryDistance; // 0x18
		::System::Single distanceCullingCullOutScale; // 0x1C
		::System::Single distanceCullingCullInScale; // 0x20
		::System::Boolean screenCoverageCullingEnable; // 0x24
		::System::Single screenCoverageCullingMinCoverage; // 0x28
		::System::Single screenCoverageCullingDynamicGeometryMinCoverage; // 0x2C
		::System::Single screenCoverageCullingCullInScale; // 0x30

		static ::UnityEngine::Rendering::Universal::RTASCullingSettings Default()
		{
			return ((::UnityEngine::Rendering::Universal::RTASCullingSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTASCULLINGSETTINGS_DEFAULT_OFFSET))();
		}
	};
}
