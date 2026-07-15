#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceType_TypeDefinitionIndex = 34024;

	enum class RenderGraphResourceType : ::System::Int32
	{
		Invalid = 0,
		Texture = 1,
		RendererList = 2,
	};
}
