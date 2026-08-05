#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapEnvLightData_TypeDefinitionIndex = 5927;

	struct alignas(4) NapEnvLightData
	{
		::UnityEngine::Vector4 influencePositionWS_Weight; // 0x10
		::UnityEngine::Vector4 influenceExtents_Multiplier; // 0x20
		::UnityEngine::Vector4 blendXYZAndRotationY; // 0x30
		::System::Int32 envIndex; // 0x40
	};
}
