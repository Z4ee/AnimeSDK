#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int VirtualMouseInput_CursorMode_TypeDefinitionIndex = 29121;

	enum class VirtualMouseInput_CursorMode : ::System::Int32
	{
		SoftwareCursor = 0,
		HardwareCursorIfAvailable = 1,
	};
}
