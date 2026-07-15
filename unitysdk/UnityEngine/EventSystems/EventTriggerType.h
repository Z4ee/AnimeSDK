#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTriggerType_TypeDefinitionIndex = 6094;

	enum class EventTriggerType : ::System::Int32
	{
		PointerEnter = 0,
		PointerExit = 1,
		PointerDown = 2,
		PointerUp = 3,
		PointerClick = 4,
		Drag = 5,
		Drop = 6,
		Scroll = 7,
		UpdateSelected = 8,
		Select = 9,
		Deselect = 10,
		Move = 11,
		InitializePotentialDrag = 12,
		BeginDrag = 13,
		EndDrag = 14,
		Submit = 15,
		Cancel = 16,
	};
}
