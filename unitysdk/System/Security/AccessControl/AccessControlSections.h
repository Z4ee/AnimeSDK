#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AccessControlSections_TypeDefinitionIndex = 962;

	enum class AccessControlSections : ::System::Int32
	{
		None = 0,
		Audit = 1,
		Access = 2,
		Owner = 4,
		Group = 8,
		All = 15,
	};
}
