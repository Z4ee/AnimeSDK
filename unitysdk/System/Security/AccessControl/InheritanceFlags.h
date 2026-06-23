#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int InheritanceFlags_TypeDefinitionIndex = 985;

	enum class InheritanceFlags : ::System::Int32
	{
		None = 0,
		ContainerInherit = 1,
		ObjectInherit = 2,
	};
}
