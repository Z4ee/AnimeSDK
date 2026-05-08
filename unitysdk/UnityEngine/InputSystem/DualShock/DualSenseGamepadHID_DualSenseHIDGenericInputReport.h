#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B34C2B0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_DualSenseHIDGenericInputReport_TypeDefinitionIndex = 29164;

	struct alignas(1) DualSenseGamepadHID_DualSenseHIDGenericInputReport
	{
		::System::Byte reportId; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_DUALSENSEHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET))();
		}
		*/
	};
}
