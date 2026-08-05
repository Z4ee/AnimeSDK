#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_ComponentContext_TypeDefinitionIndex = 26963;

	struct alignas(4) LensFlareCommonSRP_ComponentContext
	{
		::System::Boolean visible; // 0x10
		::System::Boolean isDirLight; // 0x11
		::UnityEngine::Vector3 positionWS; // 0x14
		::UnityEngine::Vector3 viewportPos; // 0x20
		::System::Single fade; // 0x2C
		::System::Single occlusionOffscreen; // 0x30
	};
}
