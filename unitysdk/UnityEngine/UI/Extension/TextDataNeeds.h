#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextDataNeeds_TypeDefinitionIndex = 72376;

	enum class TextDataNeeds : ::System::Byte
	{
		LinkInfo = 0x4,
		RichTag = 0x1,
		None = 0x0,
		CharLineInfo = 0x2,
		QuadInfo = 0x8,
		LayoutAdjustment = 0x10,
	};
}
