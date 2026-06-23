#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardRuntimeMode_TypeDefinitionIndex = 27000;

	enum class GPUGrassBillboardRuntimeMode : ::System::Int32
	{
		MergedMesh = 1,
		ProxyBillboard = 0,
		BothForDebug = 2,
	};
}
