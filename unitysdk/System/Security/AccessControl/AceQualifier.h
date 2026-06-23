#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AceQualifier_TypeDefinitionIndex = 967;

	enum class AceQualifier : ::System::Int32
	{
		AccessAllowed = 0,
		AccessDenied = 1,
		SystemAudit = 2,
		SystemAlarm = 3,
	};
}
