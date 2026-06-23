#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_ZeroWidthCharKind_TypeDefinitionIndex = 72741;

	enum class TextGeneratorUtils_ZeroWidthCharKind : ::System::Byte
	{
		CombiningMark = 0x2,
		Whitespace = 0x1,
		TagBody = 0x0,
	};
}
