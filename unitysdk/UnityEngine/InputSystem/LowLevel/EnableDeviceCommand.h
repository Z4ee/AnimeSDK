#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1B4ED770)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x970400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B4ED750)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int EnableDeviceCommand_TypeDefinitionIndex = 29189;

	struct alignas(4) EnableDeviceCommand
	{
		// static const ::System::Int32 kSize = 0x8; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::EnableDeviceCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::EnableDeviceCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_CREATE_OFFSET))();
		}
	};
}
