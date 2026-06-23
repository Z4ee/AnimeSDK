#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualShockHIDOutputReport__unknown1_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualShockHIDOutputReport__unknown2_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D3B8050)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9EB720)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D3B7F30)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x9EB790)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9EB730)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport_TypeDefinitionIndex = 31837;

	struct alignas(4) DualShockHIDOutputReport
	{
		// static const ::System::Int32 kSize = 0x28; // 0x0
		// static const ::System::Int32 kReportId = 0x5; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::System::Byte flags; // 0x19
		::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport__unknown1_e__FixedBuffer unknown1; // 0x1A
		::System::Byte highFrequencyMotorSpeed; // 0x1C
		::System::Byte lowFrequencyMotorSpeed; // 0x1D
		::System::Byte redColor; // 0x1E
		::System::Byte greenColor; // 0x1F
		::System::Byte blueColor; // 0x20
		::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport__unknown2_e__FixedBuffer unknown2; // 0x21

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		::System::Void SetMotorSpeeds(::System::Single lowFreq, ::System::Single highFreq)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET))(this, lowFreq, highFreq);
		}

		/*
		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_SETCOLOR_OFFSET))(this, color);
		}
		*/

		static ::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport Create()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCKHIDOUTPUTREPORT_CREATE_OFFSET))();
		}
	};
}
