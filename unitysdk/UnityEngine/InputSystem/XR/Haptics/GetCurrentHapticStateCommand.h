#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1B400E50)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x96A740)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B400E20)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int GetCurrentHapticStateCommand_TypeDefinitionIndex = 29078;

	struct alignas(4) GetCurrentHapticStateCommand
	{
		// static const ::System::Int32 kSize = 0x10; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::UInt32 samplesQueued; // 0x18
		::System::UInt32 samplesAvailable; // 0x1C

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::XR::Haptics::HapticState get_currentState()
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::HapticState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_CURRENTSTATE_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand Create()
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_CREATE_OFFSET))();
		}
	};
}
