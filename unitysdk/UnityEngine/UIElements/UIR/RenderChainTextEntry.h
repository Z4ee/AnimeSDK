#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainTextEntry_TypeDefinitionIndex = 25109;

	struct alignas(8) RenderChainTextEntry
	{
		::UnityEngine::UIElements::UIR::RenderChainCommand* command; // 0x10
		::System::Int32 firstVertex; // 0x18
		::System::Int32 vertexCount; // 0x1C
	};
}
