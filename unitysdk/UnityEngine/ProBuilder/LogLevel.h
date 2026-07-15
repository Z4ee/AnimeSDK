#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int LogLevel_TypeDefinitionIndex = 41566;

	enum class LogLevel : ::System::Int32
	{
		None = 0,
		Error = 1,
		Warning = 2,
		Info = 4,
		Default = 3,
		All = 255,
	};
}
