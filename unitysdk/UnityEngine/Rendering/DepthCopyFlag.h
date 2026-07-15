#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthCopyFlag_TypeDefinitionIndex = 4799;

	enum class DepthCopyFlag : ::System::Int32
	{
		kNone = 0,
		kFull = 1,
		kHalf = 2,
		kStencil = 4,
		kAll = 7,
	};
}
