#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int PluginEvent_TypeDefinitionIndex = 5010;

	enum class PluginEvent : ::System::Int32
	{
		DestroyFeature = 0,
		DLSSExecute = 1,
		DLSSInit = 2,
	};
}
