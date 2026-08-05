#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/XR/Haptics/SendBufferedHapticCommand__buffer_e__FixedBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1F37DFD0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xAA0FA0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F37DFB0)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int SendBufferedHapticCommand_TypeDefinitionIndex = 32357;

	struct alignas(4) SendBufferedHapticCommand
	{
		// static const ::System::Int32 kMaxHapticBufferSize = 0x400; // 0x0
		// static const ::System::Int32 kSize = 0x410; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Int32 channel; // 0x18
		::System::Int32 bufferSize; // 0x1C
		::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer buffer; // 0x20

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand Create(::Il2CppArray<::System::Byte>* rumbleBuffer)
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_CREATE_OFFSET))(rumbleBuffer);
		}
	};
}
