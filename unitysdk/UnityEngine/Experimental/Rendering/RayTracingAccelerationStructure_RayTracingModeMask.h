#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingAccelerationStructure_RayTracingModeMask_TypeDefinitionIndex = 6346;

	enum class RayTracingAccelerationStructure_RayTracingModeMask : ::System::Int32
	{
		Nothing = 0,
		Static = 2,
		DynamicTransform = 4,
		DynamicGeometry = 8,
		Everything = 14,
	};
}
