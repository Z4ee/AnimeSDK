#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int SynchronizationContextProperties_TypeDefinitionIndex = 838;

	enum class SynchronizationContextProperties : ::System::Int32
	{
		None = 0,
		RequireWaitNotification = 1,
	};
}
