#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceCullingShaderTagConfig.h"

namespace System { class String; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceCullingMaterialTest_TypeDefinitionIndex = 6345;

	struct alignas(8) RayTracingInstanceCullingMaterialTest
	{
		::Il2CppArray<::System::String*>* deniedShaderPasses; // 0x10
		::Il2CppArray<::System::String*>* requiredShaderPasses; // 0x18
		::Il2CppArray<::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingShaderTagConfig>* requiredShaderTags; // 0x20
	};
}
