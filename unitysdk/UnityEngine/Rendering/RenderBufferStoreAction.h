#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderBufferStoreAction_TypeDefinitionIndex = 6160;

	enum class RenderBufferStoreAction : ::System::Int32
	{
		Store = 0,
		Resolve = 1,
		StoreAndResolve = 2,
		DontCare = 3,
	};
}
