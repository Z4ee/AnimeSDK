#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVREye_TypeDefinitionIndex = 37058;

	enum class EVREye : ::System::Int32
	{
		Eye_Left = 0,
		Eye_Right = 1,
	};
}
