#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem__PollNextEventPacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__PollNextEvent; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem_PollNextEventUnion_TypeDefinitionIndex = 37035;

	struct alignas(8) CVRSystem_PollNextEventUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent* pPollNextEvent; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRSystem__PollNextEventPacked* pPollNextEventPacked; // 0x10
	};
}
