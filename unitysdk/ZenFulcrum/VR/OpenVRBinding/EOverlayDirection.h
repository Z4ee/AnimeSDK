#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EOverlayDirection_TypeDefinitionIndex = 37099;

	enum class EOverlayDirection : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
		Count = 4,
	};
}
