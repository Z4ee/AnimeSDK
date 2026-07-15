#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int DepthAccess_TypeDefinitionIndex = 34010;

	enum class DepthAccess : ::System::Int32
	{
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
