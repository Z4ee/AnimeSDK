#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharStyleFlags_TypeDefinitionIndex = 58042;

	enum class NAP_CharStyleFlags : ::System::UInt16
	{
		Italic = 0x2,
		Underline = 0x4,
		None = 0x0,
		Bold = 0x1,
		Mark = 0x10,
		Link = 0x8,
	};
}
