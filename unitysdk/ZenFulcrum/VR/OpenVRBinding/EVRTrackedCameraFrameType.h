#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRTrackedCameraFrameType_TypeDefinitionIndex = 37085;

	enum class EVRTrackedCameraFrameType : ::System::Int32
	{
		Distorted = 0,
		Undistorted = 1,
		MaximumUndistorted = 2,
		MAX_CAMERA_FRAME_TYPES = 3,
	};
}
