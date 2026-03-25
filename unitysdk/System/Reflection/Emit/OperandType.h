#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OperandType_TypeDefinitionIndex = 653;

	enum class OperandType : ::System::Int32
	{
		InlineBrTarget = 0,
		InlineField = 1,
		InlineI = 2,
		InlineI8 = 3,
		InlineMethod = 4,
		InlineNone = 5,
		InlinePhi = 6,
		InlineR = 7,
		InlineSig = 9,
		InlineString = 10,
		InlineSwitch = 11,
		InlineTok = 12,
		InlineType = 13,
		InlineVar = 14,
		ShortInlineBrTarget = 15,
		ShortInlineI = 16,
		ShortInlineR = 17,
		ShortInlineVar = 18,
	};
}
