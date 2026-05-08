#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1B3F6A10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x96A3A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3FF230)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SetIMECursorPositionCommand_TypeDefinitionIndex = 29213;

	struct alignas(4) SetIMECursorPositionCommand
	{
		// static const ::System::Int32 kSize = 0x10; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::Vector2 m_Position; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_POSITION_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand Create(::UnityEngine::Vector2 cursorPosition)
		{
			return ((::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_CREATE_OFFSET))(cursorPosition);
		}
	};
}
