#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTReflectionSettings_TypeDefinitionIndex = 4813;

	struct alignas(4) RTReflectionSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Single RenderScale; // 0x14
		::System::Single CullingDistance; // 0x18
		::System::Int32 RayGenShader; // 0x1C
		::System::Int32 PBRLightingMat; // 0x20
		::System::Boolean Debug; // 0x24
	};
}
