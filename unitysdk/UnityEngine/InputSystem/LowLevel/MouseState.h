#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0xA12130)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1D8B3CB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0xA120E0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int MouseState_TypeDefinitionIndex = 31884;

	struct alignas(4) MouseState
	{
		::UnityEngine::Vector2 position; // 0x10
		::UnityEngine::Vector2 delta; // 0x18
		::UnityEngine::Vector2 scroll; // 0x20
		::System::UInt16 buttons; // 0x28
		::System::UInt16 displayIndex; // 0x2A
		::System::UInt16 clickCount; // 0x2C

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET))();
		}
		*/

		::UnityEngine::InputSystem::LowLevel::MouseState WithButton(::UnityEngine::InputSystem::LowLevel::MouseButton button, ::System::Boolean state)
		{
			return ((::UnityEngine::InputSystem::LowLevel::MouseState(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET))(this, button, state);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_1_OFFSET))(this);
		}
		*/
	};
}
