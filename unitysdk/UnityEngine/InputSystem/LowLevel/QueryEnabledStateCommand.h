#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1E39E0A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA62480)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E39E080)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryEnabledStateCommand_TypeDefinitionIndex = 31855;

	struct alignas(4) QueryEnabledStateCommand
	{
		// static const ::System::Int32 kSize = 0x9; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Boolean isEnabled; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryEnabledStateCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryEnabledStateCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_CREATE_OFFSET))();
		}
	};
}
