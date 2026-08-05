#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualSenseHIDOutputReportPayload.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x1F167DE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA37A20)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F167DC0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDUSBOutputReport_TypeDefinitionIndex = 32451;

	struct alignas(4) DualSenseHIDUSBOutputReport
	{
		// static const ::System::Int32 kSize = 0x38; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload payload; // 0x19

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDUSBOutputReport Create(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload payload)
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDUSBOutputReport(*)(::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDUSBOUTPUTREPORT_CREATE_OFFSET))(payload);
		}
	};
}
