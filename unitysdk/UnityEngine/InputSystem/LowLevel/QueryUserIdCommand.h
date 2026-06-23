#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/QueryUserIdCommand__idBuffer_e__FixedBuffer.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1C378350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x95D3D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C378300)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_READID_OFFSET UNITYSDK_OFFSET(0x95D3A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryUserIdCommand_TypeDefinitionIndex = 31865;

	struct alignas(4) QueryUserIdCommand
	{
		// static const ::System::Int32 kMaxIdLength = 0x100; // 0x0
		// static const ::System::Int32 kSize = 0x208; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer idBuffer; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::System::String* ReadId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_READID_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_CREATE_OFFSET))();
		}
	};
}
