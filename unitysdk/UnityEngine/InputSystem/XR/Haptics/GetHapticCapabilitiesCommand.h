#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1BC4A630)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9AD6A0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9AD690)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BC4A5F0)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int GetHapticCapabilitiesCommand_TypeDefinitionIndex = 29080;

	struct alignas(4) GetHapticCapabilitiesCommand
	{
		// static const ::System::Int32 kSize = 0x14; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::UInt32 numChannels; // 0x18
		::System::UInt32 frequencyHz; // 0x1C
		::System::UInt32 maxBufferSize; // 0x20

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities()
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_CAPABILITIES_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand Create()
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_CREATE_OFFSET))();
		}
	};
}
