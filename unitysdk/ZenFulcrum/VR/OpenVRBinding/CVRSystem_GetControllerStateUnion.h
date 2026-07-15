#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem__GetControllerStatePacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerState; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem_GetControllerStateUnion_TypeDefinitionIndex = 37037;

	struct alignas(8) CVRSystem_GetControllerStateUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerState* pGetControllerState; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStatePacked* pGetControllerStatePacked; // 0x10
	};
}
