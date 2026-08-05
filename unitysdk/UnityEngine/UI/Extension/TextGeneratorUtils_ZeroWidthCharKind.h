#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_ZeroWidthCharKind_TypeDefinitionIndex = 83740;

	enum class TextGeneratorUtils_ZeroWidthCharKind : ::System::Byte
	{
		Whitespace = 0x1,
		TagBody = 0x0,
		CombiningMark = 0x2,
	};
}
