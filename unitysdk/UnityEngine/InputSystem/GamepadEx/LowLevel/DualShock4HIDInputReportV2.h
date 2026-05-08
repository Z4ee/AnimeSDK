#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSHOCK4HIDINPUTREPORTV2_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x9492A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSHOCK4HIDINPUTREPORTV2_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B984890)

namespace UnityEngine::InputSystem::GamepadEx::LowLevel
{
	inline static constexpr unsigned int DualShock4HIDInputReportV2_TypeDefinitionIndex = 37459;

	struct alignas(2) DualShock4HIDInputReportV2
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
		::System::Int16 gyroPitch; // 0x1D
		::System::Int16 gyroYaw; // 0x1F
		::System::Int16 gyroRoll; // 0x21
		::System::Int16 accelX; // 0x23
		::System::Int16 accelY; // 0x25
		::System::Int16 accelZ; // 0x27
		::System::Byte batteryLevel; // 0x2E

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSHOCK4HIDINPUTREPORTV2_GET_FORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSHOCK4HIDINPUTREPORTV2_GET_FORMAT_1_OFFSET))(this);
		}
		*/
	};
}
