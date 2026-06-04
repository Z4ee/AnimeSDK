#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int CallingConventions_TypeDefinitionIndex = 555;

	enum class CallingConventions : ::System::Int32
	{
		Standard = 1,
		VarArgs = 2,
		Any = 3,
		HasThis = 32,
		ExplicitThis = 64,
	};
}
