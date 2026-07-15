#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_DblClickSnapping_TypeDefinitionIndex = 5247;

	enum class TextEditor_DblClickSnapping : ::System::Byte
	{
		WORDS = 0x0,
		PARAGRAPHS = 0x1,
	};
}
