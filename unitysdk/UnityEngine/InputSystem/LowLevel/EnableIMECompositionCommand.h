#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE5B900)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_IMEENABLED_OFFSET UNITYSDK_OFFSET(0x622BD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x979FA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CE5B8D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int EnableIMECompositionCommand_TypeDefinitionIndex = 32466;

	struct alignas(4) EnableIMECompositionCommand
	{
		// static const ::System::Int32 kSize = 0xC; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Byte m_ImeEnabled; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::System::Boolean get_imeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_IMEENABLED_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand Create(::System::Boolean enabled)
		{
			return ((::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_CREATE_OFFSET))(enabled);
		}
	};
}
