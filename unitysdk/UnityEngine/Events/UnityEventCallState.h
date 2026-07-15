#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventCallState_TypeDefinitionIndex = 4472;

	enum class UnityEventCallState : ::System::Int32
	{
		Off = 0,
		EditorAndRuntime = 1,
		RuntimeOnly = 2,
	};
}
