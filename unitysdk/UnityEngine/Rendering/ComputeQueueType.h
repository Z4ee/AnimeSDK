#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ComputeQueueType_TypeDefinitionIndex = 4712;

	enum class ComputeQueueType : ::System::Int32
	{
		Default = 0,
		Background = 1,
		Urgent = 2,
	};
}
