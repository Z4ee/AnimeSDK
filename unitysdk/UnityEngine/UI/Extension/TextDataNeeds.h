#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextDataNeeds_TypeDefinitionIndex = 46485;

	enum class TextDataNeeds : ::System::Byte
	{
		QuadInfo = 0x8,
		RichTag = 0x1,
		LinkInfo = 0x4,
		CharLineInfo = 0x2,
		None = 0x0,
	};
}
