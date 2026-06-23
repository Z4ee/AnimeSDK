#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int PropagationFlags_TypeDefinitionIndex = 998;

	enum class PropagationFlags : ::System::Int32
	{
		None = 0,
		NoPropagateInherit = 1,
		InheritOnly = 2,
	};
}
