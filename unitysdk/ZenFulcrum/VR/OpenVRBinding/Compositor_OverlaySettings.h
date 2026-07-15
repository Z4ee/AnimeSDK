#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int Compositor_OverlaySettings_TypeDefinitionIndex = 37152;

	struct alignas(4) Compositor_OverlaySettings
	{
		::System::UInt32 size; // 0x10
		::System::Boolean curved; // 0x14
		::System::Boolean antialias; // 0x15
		::System::Single scale; // 0x18
		::System::Single distance; // 0x1C
		::System::Single alpha; // 0x20
		::System::Single uOffset; // 0x24
		::System::Single vOffset; // 0x28
		::System::Single uScale; // 0x2C
		::System::Single vScale; // 0x30
		::System::Single gridDivs; // 0x34
		::System::Single gridWidth; // 0x38
		::System::Single gridScale; // 0x3C
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t transform; // 0x40
	};
}
