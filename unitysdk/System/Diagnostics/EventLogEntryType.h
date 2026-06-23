#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogEntryType_TypeDefinitionIndex = 4092;

	enum class EventLogEntryType : ::System::Int32
	{
		Error = 1,
		FailureAudit = 16,
		Information = 4,
		SuccessAudit = 8,
		Warning = 2,
	};
}
