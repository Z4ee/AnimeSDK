#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphExecuteParams_TypeDefinitionIndex = 18642;

	struct alignas(4) RenderGraphExecuteParams
	{
		::System::Int32 renderingWidth; // 0x10
		::System::Int32 renderingHeight; // 0x14
		::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples; // 0x18
	};
}
