#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxNetworkChange_EventType_TypeDefinitionIndex = 3806;

	enum class LinuxNetworkChange_EventType : ::System::Int32
	{
		Availability = 1,
		Address = 2,
	};
}
