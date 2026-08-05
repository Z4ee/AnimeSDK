#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsFenceType_TypeDefinitionIndex = 6204;

	enum class GraphicsFenceType : ::System::Int32
	{
		AsyncQueueSynchronisation = 0,
		CPUSynchronisation = 1,
	};
}
