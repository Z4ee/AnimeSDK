#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9492A0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock4HIDInputReport_TypeDefinitionIndex = 29178;

	struct alignas(1) DualShock4HIDInputReport
	{
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x11
		::System::Byte leftStickY; // 0x12
		::System::Byte rightStickX; // 0x13
		::System::Byte rightStickY; // 0x14
		::System::Byte buttons1; // 0x15
		::System::Byte buttons2; // 0x16
		::System::Byte buttons3; // 0x17
		::System::Byte leftTrigger; // 0x18
		::System::Byte rightTrigger; // 0x19
		::System::Byte batteryLevel; // 0x2E

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
