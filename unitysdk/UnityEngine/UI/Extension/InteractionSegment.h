#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 43438;

	enum class InteractionSegment : ::System::Int32
	{
		EndDrag = 4,
		Drag = 2,
		None = 0,
		BeginDrag = 1,
		EndScroll = 16,
		EndTwoPointDrag = 64,
		BeforeTwoPointDrag = 32,
		BeforeScroll = 8,
	};
}
