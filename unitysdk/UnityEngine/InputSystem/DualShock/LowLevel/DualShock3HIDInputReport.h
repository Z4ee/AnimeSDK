#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualShock3HIDInputReport__padding3_e__FixedBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK3HIDINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9EB710)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock3HIDInputReport_TypeDefinitionIndex = 31835;

	struct alignas(2) DualShock3HIDInputReport
	{
		::System::UInt16 padding1; // 0x10
		::System::Byte buttons1; // 0x12
		::System::Byte buttons2; // 0x13
		::System::Byte buttons3; // 0x14
		::System::Byte padding2; // 0x15
		::System::Byte leftStickX; // 0x16
		::System::Byte leftStickY; // 0x17
		::System::Byte rightStickX; // 0x18
		::System::Byte rightStickY; // 0x19
		::UnityEngine::InputSystem::DualShock::LowLevel::DualShock3HIDInputReport__padding3_e__FixedBuffer padding3; // 0x1A
		::System::Byte leftTrigger; // 0x22
		::System::Byte rightTrigger; // 0x23

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK3HIDINPUTREPORT_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
