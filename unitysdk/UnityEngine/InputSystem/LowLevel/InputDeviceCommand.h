#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_ALLOCATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D7521C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADPTR_OFFSET UNITYSDK_OFFSET(0xA0B7B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0xA0B7A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceCommand_TypeDefinitionIndex = 31852;

	struct alignas(4) InputDeviceCommand
	{
		// static const ::System::Int32 kBaseCommandSize = 0x8; // 0x0
		// static const ::System::Int32 BaseCommandSize = 0x8; // 0x0
		// static const ::System::Int64 GenericFailure = 0xFFFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int64 GenericSuccess = 0x1; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC type; // 0x10
		::System::Int32 sizeInBytes; // 0x14

		::System::Void _ctor(::UnityEngine::InputSystem::Utilities::FourCC type, ::System::Int32 sizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND__CTOR_OFFSET))(this, type, sizeInBytes);
		}

		::System::Int32 get_payloadSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADSIZEINBYTES_OFFSET))(this);
		}

		::System::Void* get_payloadPtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADPTR_OFFSET))(this);
		}

		/*
		static ::Unity::Collections::NativeArray_1<::System::Byte> AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC type, ::System::Int32 payloadSize)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::UnityEngine::InputSystem::Utilities::FourCC, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_ALLOCATENATIVE_OFFSET))(type, payloadSize);
		}
		*/

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
	};
}
