#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingAccelerationStructure_ManagementMode_TypeDefinitionIndex = 6347;

	enum class RayTracingAccelerationStructure_ManagementMode : ::System::Int32
	{
		Manual = 0,
		Automatic = 1,
	};
}
