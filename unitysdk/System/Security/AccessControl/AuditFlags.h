#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AuditFlags_TypeDefinitionIndex = 969;

	enum class AuditFlags : ::System::Int32
	{
		None = 0,
		Success = 1,
		Failure = 2,
	};
}
