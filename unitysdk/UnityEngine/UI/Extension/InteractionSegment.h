#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 84744;

	enum class InteractionSegment : ::System::Int32
	{
		None = 0,
		Drag = 2,
		BeginDrag = 1,
		BeforeScroll = 8,
		EndTwoPointDrag = 64,
		EndScroll = 16,
		BeforeTwoPointDrag = 32,
		EndDrag = 4,
	};
}
