#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRNotificationStyle_TypeDefinitionIndex = 37104;

	enum class EVRNotificationStyle : ::System::Int32
	{
		None = 0,
		Application = 100,
		Contact_Disabled = 200,
		Contact_Enabled = 201,
		Contact_Active = 202,
	};
}
