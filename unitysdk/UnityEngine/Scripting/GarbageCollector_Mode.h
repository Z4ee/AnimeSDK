#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int GarbageCollector_Mode_TypeDefinitionIndex = 5511;

	enum class GarbageCollector_Mode : ::System::Int32
	{
		Disabled = 0,
		Enabled = 1,
	};
}
