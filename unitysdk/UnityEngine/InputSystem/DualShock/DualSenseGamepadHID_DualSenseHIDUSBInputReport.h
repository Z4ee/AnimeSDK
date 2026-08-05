#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDUSBINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0xAB3A60)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_DualSenseHIDUSBInputReport_TypeDefinitionIndex = 32441;

	struct alignas(1) DualSenseGamepadHID_DualSenseHIDUSBInputReport
	{
		// static const ::System::Int32 ExpectedReportId = 0x1; // 0x0
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x11
		::System::Byte leftStickY; // 0x12
		::System::Byte rightStickX; // 0x13
		::System::Byte rightStickY; // 0x14
		::System::Byte leftTrigger; // 0x15
		::System::Byte rightTrigger; // 0x16
		::System::Byte buttons0; // 0x18
		::System::Byte buttons1; // 0x19
		::System::Byte buttons2; // 0x1A

		/*
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDUSBINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/
	};
}
