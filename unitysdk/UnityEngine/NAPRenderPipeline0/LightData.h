#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightData_TypeDefinitionIndex = 5944;

	struct alignas(4) LightData
	{
		::UnityEngine::Vector4 cascadeSplitBorder; // 0x10
		::System::Boolean supportsMixedLighting; // 0x20
		::System::Boolean splitCharacterAndSceneLight; // 0x21
	};
}
