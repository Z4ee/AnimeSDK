#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class CVROverlay__PollNextOverlayEventPacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__PollNextOverlayEvent; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVROverlay_PollNextOverlayEventUnion_TypeDefinitionIndex = 37048;

	struct alignas(8) CVROverlay_PollNextOverlayEventUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__PollNextOverlayEvent* pPollNextOverlayEvent; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVROverlay__PollNextOverlayEventPacked* pPollNextOverlayEventPacked; // 0x10
	};
}
