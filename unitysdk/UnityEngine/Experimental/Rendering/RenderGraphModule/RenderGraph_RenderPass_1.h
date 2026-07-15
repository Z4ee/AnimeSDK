#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphContext.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraph_RenderPass.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { template <typename T> class RenderFunc_1; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraph_RenderPass_1_TypeDefinitionIndex = 34017;

	template <typename PassData>
	class RenderGraph_RenderPass_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass
	{
	public:
		PassData data; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* renderFunc; // 0x0
	};
}
