#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Keyboard_t_TypeDefinitionIndex = 37134;

	struct alignas(8) VREvent_Keyboard_t
	{
		::System::Byte cNewInput0; // 0x10
		::System::Byte cNewInput1; // 0x11
		::System::Byte cNewInput2; // 0x12
		::System::Byte cNewInput3; // 0x13
		::System::Byte cNewInput4; // 0x14
		::System::Byte cNewInput5; // 0x15
		::System::Byte cNewInput6; // 0x16
		::System::Byte cNewInput7; // 0x17
		::System::UInt64 uUserValue; // 0x18
	};
}
