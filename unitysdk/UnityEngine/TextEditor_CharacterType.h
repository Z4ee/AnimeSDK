#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_CharacterType_TypeDefinitionIndex = 5248;

	enum class TextEditor_CharacterType : ::System::Int32
	{
		LetterLike = 0,
		Symbol = 1,
		Symbol2 = 2,
		WhiteSpace = 3,
	};
}
