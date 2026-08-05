#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShaderFeatureMapping_TypeDefinitionIndex = 6128;

	struct alignas(8) ShaderFeatureMapping
	{
		::System::String* shaderName; // 0x10
		::System::UInt32 features; // 0x18
	};
}
