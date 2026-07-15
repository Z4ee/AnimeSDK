#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_ComponentState_t_TypeDefinitionIndex = 37162;

	struct alignas(4) RenderModel_ComponentState_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t mTrackingToComponentRenderModel; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t mTrackingToComponentLocal; // 0x40
		::System::UInt32 uProperties; // 0x70
	};
}
