#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int MaskedTextResultHint_TypeDefinitionIndex = 2948;

	enum class MaskedTextResultHint : ::System::Int32
	{
		Unknown = 0,
		CharacterEscaped = 1,
		NoEffect = 2,
		SideEffect = 3,
		Success = 4,
		AsciiCharacterExpected = -1,
		AlphanumericCharacterExpected = -2,
		DigitExpected = -3,
		LetterExpected = -4,
		SignedDigitExpected = -5,
		InvalidInput = -51,
		PromptCharNotAllowed = -52,
		UnavailableEditPosition = -53,
		NonEditPosition = -54,
		PositionOutOfRange = -55,
	};
}
