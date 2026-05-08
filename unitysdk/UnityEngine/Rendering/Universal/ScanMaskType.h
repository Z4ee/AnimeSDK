#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanMaskType_TypeDefinitionIndex = 29881;

	enum class ScanMaskType : ::System::Int32
	{
		Screen = 0,
		WorldSpace = 1,
	};
}
