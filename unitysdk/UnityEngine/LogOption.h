#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LogOption_TypeDefinitionIndex = 4010;

	enum class LogOption : ::System::Int32
	{
		None = 0,
		NoStacktrace = 1,
	};
}
