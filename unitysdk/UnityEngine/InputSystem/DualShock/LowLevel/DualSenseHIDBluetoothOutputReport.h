#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualSenseHIDBluetoothOutputReport__rawData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualSenseHIDOutputReportPayload.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B3F37E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9492B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3F37C0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDBluetoothOutputReport_TypeDefinitionIndex = 29176;

	struct alignas(4) DualSenseHIDBluetoothOutputReport
	{
		// static const ::System::Int32 kSize = 0x56; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::System::Byte tag1; // 0x19
		::System::Byte tag2; // 0x1A
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload payload; // 0x1B
		::System::UInt32 crc32; // 0x62
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport__rawData_e__FixedBuffer rawData; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport Create(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload payload, ::System::Byte outputSequenceId)
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport(*)(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDBLUETOOTHOUTPUTREPORT_CREATE_OFFSET))(payload, outputSequenceId);
		}
	};
}
