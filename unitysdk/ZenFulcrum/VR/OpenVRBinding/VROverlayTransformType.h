#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayTransformType_TypeDefinitionIndex = 37094;

	enum class VROverlayTransformType : ::System::Int32
	{
		VROverlayTransform_Absolute = 0,
		VROverlayTransform_TrackedDeviceRelative = 1,
		VROverlayTransform_SystemOverlay = 2,
		VROverlayTransform_TrackedComponent = 3,
	};
}
