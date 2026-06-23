#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int DeliveryNotificationOptions_TypeDefinitionIndex = 3584;

	enum class DeliveryNotificationOptions : ::System::Int32
	{
		None = 0,
		OnSuccess = 1,
		OnFailure = 2,
		Delay = 4,
		Never = 134217728,
	};
}
