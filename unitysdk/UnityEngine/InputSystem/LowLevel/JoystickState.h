#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x965000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1B355150)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int JoystickState_TypeDefinitionIndex = 29224;

	struct alignas(4) JoystickState
	{
		::System::Int32 buttons; // 0x10
		::UnityEngine::Vector2 stick; // 0x14

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
