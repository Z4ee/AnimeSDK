#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDUSBINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0x999680)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseGamepadPC_DualSenseHIDUSBInputReportV2_TypeDefinitionIndex = 37440;

	struct alignas(4) DualSenseGamepadPC_DualSenseHIDUSBInputReportV2
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
		::System::Int32 timestamp; // 0x1C
		::System::Int16 gyroPitch; // 0x20
		::System::Int16 gyroYaw; // 0x22
		::System::Int16 gyroRoll; // 0x24
		::System::Int16 accelX; // 0x26
		::System::Int16 accelY; // 0x28
		::System::Int16 accelZ; // 0x2A
		::System::Byte touch0data0; // 0x31
		::System::Byte touch0data1; // 0x32
		::System::Byte touch0data2; // 0x33
		::System::Byte touch0data3; // 0x34
		::System::Byte touch1data0; // 0x35
		::System::Byte touch1data1; // 0x36
		::System::Byte touch1data2; // 0x37
		::System::Byte touch1data3; // 0x38

		/*
		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDUSBINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/
	};
}
