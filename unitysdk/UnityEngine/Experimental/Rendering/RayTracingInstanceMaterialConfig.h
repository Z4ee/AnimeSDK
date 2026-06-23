#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceCullingShaderTagConfig.h"

namespace System { class String; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceMaterialConfig_TypeDefinitionIndex = 6340;

	struct alignas(8) RayTracingInstanceMaterialConfig
	{
		::System::Int32 renderQueueLowerBound; // 0x10
		::System::Int32 renderQueueUpperBound; // 0x14
		::Il2CppArray<::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingShaderTagConfig>* optionalShaderTags; // 0x18
		::Il2CppArray<::System::String*>* optionalShaderKeywords; // 0x20
	};
}
