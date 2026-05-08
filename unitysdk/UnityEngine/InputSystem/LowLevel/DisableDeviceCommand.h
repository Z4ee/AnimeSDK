#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1C088590)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9C0440)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C088570)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DisableDeviceCommand_TypeDefinitionIndex = 29188;

	struct alignas(4) DisableDeviceCommand
	{
		// static const ::System::Int32 kSize = 0x8; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_CREATE_OFFSET))();
		}
	};
}
