#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int LogOutput_TypeDefinitionIndex = 41567;

	enum class LogOutput : ::System::Int32
	{
		None = 0,
		Console = 1,
		File = 2,
	};
}
