#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventCommand_TypeDefinitionIndex = 1688;

	enum class EventCommand : ::System::Int32
	{
		Update = 0,
		SendManifest = -1,
		Enable = -2,
		Disable = -3,
	};
}
