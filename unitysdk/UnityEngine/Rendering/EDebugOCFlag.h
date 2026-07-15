#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int EDebugOCFlag_TypeDefinitionIndex = 35976;

	enum class EDebugOCFlag : ::System::Int32
	{
		None = 0,
		Atlas = 1,
		MipCopy = 2,
	};
}
