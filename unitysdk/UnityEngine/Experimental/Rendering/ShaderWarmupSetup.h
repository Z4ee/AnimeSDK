#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ShaderWarmupSetup_TypeDefinitionIndex = 4928;

	struct alignas(8) ShaderWarmupSetup
	{
		::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* vdecl; // 0x10
	};
}
