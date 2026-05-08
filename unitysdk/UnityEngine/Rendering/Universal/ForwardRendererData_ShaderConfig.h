#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

namespace System { class String; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderConfig_TypeDefinitionIndex = 29851;

	struct alignas(8) ForwardRendererData_ShaderConfig
	{
		::System::String* shaderName; // 0x10
		::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature feature; // 0x18
	};
}
