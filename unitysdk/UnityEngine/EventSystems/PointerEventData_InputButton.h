#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerEventData_InputButton_TypeDefinitionIndex = 6068;

	enum class PointerEventData_InputButton : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Middle = 2,
	};
}
