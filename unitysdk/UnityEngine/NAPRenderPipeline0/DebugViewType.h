#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DebugViewType_TypeDefinitionIndex = 5865;

	enum class DebugViewType : ::System::Int32
	{
		None = 0,
		DirectDiffuse = 1,
		DirectSpecular = 2,
		IndirectDiffuse = 3,
		IndirectSpecular = 4,
		Emission = 5,
		Occlusion = 6,
		Albedo = 7,
		Metallic = 8,
		Smoothness = 9,
		NormalWs = 10,
		BakedGI = 11,
		LightCount = 12,
	};
}
