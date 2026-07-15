#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVROverlayIntersectionMaskPrimitiveType_TypeDefinitionIndex = 37100;

	enum class EVROverlayIntersectionMaskPrimitiveType : ::System::Int32
	{
		OverlayIntersectionPrimitiveType_Rectangle = 0,
		OverlayIntersectionPrimitiveType_Circle = 1,
	};
}
