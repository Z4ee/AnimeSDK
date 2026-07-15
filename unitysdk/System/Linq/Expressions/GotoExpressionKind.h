#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int GotoExpressionKind_TypeDefinitionIndex = 3212;

	enum class GotoExpressionKind : ::System::Int32
	{
		Goto = 0,
		Return = 1,
		Break = 2,
		Continue = 3,
	};
}
