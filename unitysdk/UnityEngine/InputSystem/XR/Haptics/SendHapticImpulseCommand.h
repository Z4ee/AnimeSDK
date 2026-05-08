#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1BA70280)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9A17A0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BA70260)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int SendHapticImpulseCommand_TypeDefinitionIndex = 29083;

	struct alignas(4) SendHapticImpulseCommand
	{
		// static const ::System::Int32 kSize = 0x14; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Int32 channel; // 0x18
		::System::Single amplitude; // 0x1C
		::System::Single duration; // 0x20

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand Create(::System::Int32 motorChannel, ::System::Single motorAmplitude, ::System::Single motorDuration)
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_CREATE_OFFSET))(motorChannel, motorAmplitude, motorDuration);
		}
	};
}
