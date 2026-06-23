#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA09770)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDINPUTREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D73BAC0)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDInputReport_TypeDefinitionIndex = 31829;

	struct alignas(1) DualSenseHIDInputReport
	{
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_Format()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(DualSenseHIDInputReport_TypeDefinitionIndex)->GetStaticField(0x7D00);
		}
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::Byte leftTrigger; // 0x14
		::System::Byte rightTrigger; // 0x15
		::System::Byte buttons0; // 0x16
		::System::Byte buttons1; // 0x17
		::System::Byte buttons2; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDINPUTREPORT__CCTOR_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSENSEHIDINPUTREPORT_GET_FORMAT_OFFSET))(this);
		}
	};
}
