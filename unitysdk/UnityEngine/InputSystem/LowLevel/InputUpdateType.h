#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdateType_TypeDefinitionIndex = 31933;

	enum class InputUpdateType : ::System::Int32
	{
		None = 0,
		Dynamic = 1,
		Fixed = 2,
		BeforeRender = 4,
		Editor = 8,
		Manual = 16,
		Default = 11,
	};
}
