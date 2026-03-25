#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRComponentProperty_TypeDefinitionIndex = 30300;

	enum class EVRComponentProperty : ::System::Int32
	{
		IsStatic = 1,
		IsVisible = 2,
		IsTouched = 4,
		IsPressed = 8,
		IsScrolled = 16,
	};
}
