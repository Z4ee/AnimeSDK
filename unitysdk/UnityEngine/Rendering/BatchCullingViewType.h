#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingViewType_TypeDefinitionIndex = 6215;

	enum class BatchCullingViewType : ::System::Int32
	{
		Unknown = 0,
		Camera = 1,
		Light = 2,
		Picking = 3,
		SelectionOutline = 4,
	};
}
