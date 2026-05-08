#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDBLUETOOTHINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x971EA0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_DualSenseHIDBluetoothInputReport_TypeDefinitionIndex = 29166;

	struct alignas(1) DualSenseGamepadHID_DualSenseHIDBluetoothInputReport
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
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDBLUETOOTHINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/
	};
}
