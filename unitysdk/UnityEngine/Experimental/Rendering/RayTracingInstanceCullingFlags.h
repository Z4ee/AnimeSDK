#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceCullingFlags_TypeDefinitionIndex = 6337;

	enum class RayTracingInstanceCullingFlags : ::System::Int32
	{
		None = 0,
		EnableSphereCulling = 1,
		EnablePlaneCulling = 2,
		EnableSolidAngleCulling = 4,
		EnableLODCulling = 8,
		ComputeMaterialsCRC = 16,
		IgnoreReflectionProbes = 32,
	};
}
