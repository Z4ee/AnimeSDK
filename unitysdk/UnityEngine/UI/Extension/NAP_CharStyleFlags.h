#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharStyleFlags_TypeDefinitionIndex = 41466;

	enum class NAP_CharStyleFlags : ::System::UInt16
	{
		Italic = 0x2,
		Link = 0x8,
		Bold = 0x1,
		None = 0x0,
		Underline = 0x4,
	};
}
