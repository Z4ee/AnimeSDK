#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogPermissionAccess_TypeDefinitionIndex = 4170;

	enum class EventLogPermissionAccess : ::System::Int32
	{
		Administer = 48,
		Audit = 10,
		Browse = 2,
		Instrument = 6,
		None = 0,
		Write = 16,
	};
}
