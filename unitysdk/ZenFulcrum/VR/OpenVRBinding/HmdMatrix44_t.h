#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdMatrix44_t_TypeDefinitionIndex = 37110;

	struct alignas(4) HmdMatrix44_t
	{
		::System::Single m0; // 0x10
		::System::Single m1; // 0x14
		::System::Single m2; // 0x18
		::System::Single m3; // 0x1C
		::System::Single m4; // 0x20
		::System::Single m5; // 0x24
		::System::Single m6; // 0x28
		::System::Single m7; // 0x2C
		::System::Single m8; // 0x30
		::System::Single m9; // 0x34
		::System::Single m10; // 0x38
		::System::Single m11; // 0x3C
		::System::Single m12; // 0x40
		::System::Single m13; // 0x44
		::System::Single m14; // 0x48
		::System::Single m15; // 0x4C
	};
}
