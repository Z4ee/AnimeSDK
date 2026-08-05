#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0xA92350)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2_TOHIDINPUTREPORT_OLD_OFFSET UNITYSDK_OFFSET(0xA92440)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F163E40)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2_TypeDefinitionIndex = 39734;

	struct alignas(1) DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2
	{
		static ::System::Int32* StaticGet_ExpectedSize1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2_TypeDefinitionIndex)->GetStaticField(0x94F0);
		}
		static ::System::Int32* StaticGet_ExpectedSize2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2_TypeDefinitionIndex)->GetStaticField(0x94F4);
		}
		::System::Byte reportId; // 0x10
		::System::Byte leftStickX; // 0x11
		::System::Byte leftStickY; // 0x12
		::System::Byte rightStickX; // 0x13
		::System::Byte rightStickY; // 0x14
		::System::Byte buttons0; // 0x15
		::System::Byte buttons1; // 0x16
		::System::Byte buttons2; // 0x17
		::System::Byte leftTrigger; // 0x18
		::System::Byte rightTrigger; // 0x19

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2__CCTOR_OFFSET))();
		}

		/*
		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport ToHIDInputReport_Old()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_DUALSENSEHIDMINIMALINPUTREPORTV2_TOHIDINPUTREPORT_OLD_OFFSET))(this);
		}
		*/
	};
}
