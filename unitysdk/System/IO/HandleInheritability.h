#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int HandleInheritability_TypeDefinitionIndex = 3111;

	enum class HandleInheritability : ::System::Int32
	{
		None = 0,
		Inheritable = 1,
	};
}
