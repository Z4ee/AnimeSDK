#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1EAD9540)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1EAD9490)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x1EAD93D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA57F30)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TextEvent_TypeDefinitionIndex = 32547;

	struct alignas(4) TextEvent
	{
		// static const ::System::Int32 Type = 0x54455854; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::System::Int32 character; // 0x24

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::TextEvent* From(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::TextEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_FROM_OFFSET))(eventPtr);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::TextEvent Create(::System::Int32 deviceId, ::System::Char character, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::TextEvent(*)(::System::Int32, ::System::Char, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_OFFSET))(deviceId, character, time);
		}

		static ::UnityEngine::InputSystem::LowLevel::TextEvent Create_1(::System::Int32 deviceId, ::System::Int32 character, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::TextEvent(*)(::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TEXTEVENT_CREATE_1_OFFSET))(deviceId, character, time);
		}
	};
}
