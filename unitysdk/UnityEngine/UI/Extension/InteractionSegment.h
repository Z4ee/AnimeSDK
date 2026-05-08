#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 38475;

	enum class InteractionSegment : ::System::Int32
	{
		EndScroll = 16,
		EndTwoPointDrag = 64,
		BeforeScroll = 8,
		BeforeTwoPointDrag = 32,
		None = 0,
		BeginDrag = 1,
		EndDrag = 4,
		Drag = 2,
	};
}
