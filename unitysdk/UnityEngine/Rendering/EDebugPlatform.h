#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int EDebugPlatform_TypeDefinitionIndex = 35977;

	enum class EDebugPlatform : ::System::Int32
	{
		EDebugPC = 0,
		EDebugIOS = 1,
		EDebugAndroid = 2,
		EDebugPS5 = 3,
		EDebugPS4 = 4,
	};
}
