#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRNotificationType_TypeDefinitionIndex = 30301;

	enum class EVRNotificationType : ::System::Int32
	{
		Transient = 0,
		Persistent = 1,
		Transient_SystemWithUserValue = 2,
	};
}
