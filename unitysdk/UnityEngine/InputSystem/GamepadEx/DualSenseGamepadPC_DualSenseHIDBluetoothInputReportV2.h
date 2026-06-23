#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDBLUETOOTHINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0xA3BF80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDBLUETOOTHINPUTREPORTV2_TOHIDINPUTREPORT_OLD_OFFSET UNITYSDK_OFFSET(0xA3C070)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2_TypeDefinitionIndex = 39067;

	struct alignas(1) DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2
	{
		// static const ::System::Int32 ExpectedReportId = 0x31; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x12
		::System::Byte leftStickY; // 0x13
		::System::Byte rightStickX; // 0x14
		::System::Byte rightStickY; // 0x15
		::System::Byte leftTrigger; // 0x16
		::System::Byte rightTrigger; // 0x17
		::System::Byte buttons0; // 0x19
		::System::Byte buttons1; // 0x1A
		::System::Byte buttons2; // 0x1B

		/*
		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDBLUETOOTHINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport ToHIDInputReport_Old()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDBLUETOOTHINPUTREPORTV2_TOHIDINPUTREPORT_OLD_OFFSET))(this);
		}
		*/
	};
}
