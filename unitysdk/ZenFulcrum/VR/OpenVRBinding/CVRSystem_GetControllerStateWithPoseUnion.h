#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem__GetControllerStateWithPosePacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerStateWithPose; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem_GetControllerStateWithPoseUnion_TypeDefinitionIndex = 37039;

	struct alignas(8) CVRSystem_GetControllerStateWithPoseUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerStateWithPose* pGetControllerStateWithPose; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked; // 0x10
	};
}
