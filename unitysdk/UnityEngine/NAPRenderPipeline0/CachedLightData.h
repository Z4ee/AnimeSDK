#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CachedLightData_TypeDefinitionIndex = 18485;

	struct alignas(4) CachedLightData
	{
		::UnityEngine::LightType LightType; // 0x10
		::UnityEngine::Vector3 LightForward; // 0x14
		::UnityEngine::Vector3 SelfPosition; // 0x20
		::UnityEngine::Vector3 worldFocusPosition; // 0x2C
		::System::Single SpotAngle; // 0x38
		::System::Single InnerSpotAngle; // 0x3C
		::UnityEngine::Color LightColorFactor; // 0x40
		::System::Boolean HasLight; // 0x50
		::System::Boolean HasWorldFocusPosition; // 0x51
	};
}
