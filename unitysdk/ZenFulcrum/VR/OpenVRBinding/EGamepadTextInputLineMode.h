#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EGamepadTextInputLineMode_TypeDefinitionIndex = 37098;

	enum class EGamepadTextInputLineMode : ::System::Int32
	{
		k_EGamepadTextInputLineModeSingleLine = 0,
		k_EGamepadTextInputLineModeMultipleLines = 1,
	};
}
