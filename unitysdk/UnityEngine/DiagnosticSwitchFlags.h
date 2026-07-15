#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DiagnosticSwitchFlags_TypeDefinitionIndex = 4062;

	enum class DiagnosticSwitchFlags : ::System::Int32
	{
		None = 0,
		CanChangeAfterEngineStart = 1,
	};
}
