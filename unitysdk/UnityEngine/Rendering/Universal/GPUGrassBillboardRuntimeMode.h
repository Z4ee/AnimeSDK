#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardRuntimeMode_TypeDefinitionIndex = 27932;

	enum class GPUGrassBillboardRuntimeMode : ::System::Int32
	{
		MergedMesh = 1,
		BothForDebug = 2,
		ProxyBillboard = 0,
	};
}
