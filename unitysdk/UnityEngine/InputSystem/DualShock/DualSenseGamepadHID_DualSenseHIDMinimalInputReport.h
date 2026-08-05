#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDMINIMALINPUTREPORT_TOHIDINPUTREPORT_OFFSET UNITYSDK_OFFSET(0xAB4EC0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDMINIMALINPUTREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F80CDF0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_DualSenseHIDMinimalInputReport_TypeDefinitionIndex = 32443;

	struct alignas(1) DualSenseGamepadHID_DualSenseHIDMinimalInputReport
	{
		static ::System::Int32* StaticGet_ExpectedSize2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadHID_DualSenseHIDMinimalInputReport_TypeDefinitionIndex)->GetStaticField(0x7D50);
		}
		static ::System::Int32* StaticGet_ExpectedSize1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadHID_DualSenseHIDMinimalInputReport_TypeDefinitionIndex)->GetStaticField(0x7D54);
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
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDMINIMALINPUTREPORT__CCTOR_OFFSET))();
		}

		/*
		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport ToHIDInputReport()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDMINIMALINPUTREPORT_TOHIDINPUTREPORT_OFFSET))(this);
		}
		*/
	};
}
