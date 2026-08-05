#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharStyleFlags_TypeDefinitionIndex = 73259;

	enum class NAP_CharStyleFlags : ::System::UInt16
	{
		Underline = 0x4,
		Bold = 0x1,
		Link = 0x8,
		Italic = 0x2,
		Mark = 0x10,
		None = 0x0,
	};
}
