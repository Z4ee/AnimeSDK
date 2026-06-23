#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SecurityInfos_TypeDefinitionIndex = 1003;

	enum class SecurityInfos : ::System::Int32
	{
		Owner = 1,
		Group = 2,
		DiscretionaryAcl = 4,
		SystemAcl = 8,
	};
}
