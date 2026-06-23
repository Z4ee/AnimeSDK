#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceCullingTest_TypeDefinitionIndex = 6338;

	struct alignas(4) RayTracingInstanceCullingTest
	{
		::System::UInt32 instanceMask; // 0x10
		::System::Int32 layerMask; // 0x14
		::System::Int32 shadowCastingModeMask; // 0x18
		::System::Boolean allowOpaqueMaterials; // 0x1C
		::System::Boolean allowTransparentMaterials; // 0x1D
		::System::Boolean allowAlphaTestedMaterials; // 0x1E
	};
}
