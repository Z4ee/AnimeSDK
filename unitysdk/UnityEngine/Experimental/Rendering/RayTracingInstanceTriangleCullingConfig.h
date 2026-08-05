#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceTriangleCullingConfig_TypeDefinitionIndex = 6346;

	struct alignas(8) RayTracingInstanceTriangleCullingConfig
	{
		::Il2CppArray<::System::String*>* optionalDoubleSidedShaderKeywords; // 0x10
		::System::Boolean frontTriangleCounterClockwise; // 0x18
		::System::Boolean checkDoubleSidedGIMaterial; // 0x19
		::System::Boolean forceDoubleSided; // 0x1A
	};
}
