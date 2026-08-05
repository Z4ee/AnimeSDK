#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

namespace System { class Object; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA66580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA665E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA665F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA66560)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventBuffer_Enumerator_TypeDefinitionIndex = 32532;

	struct alignas(8) InputEventBuffer_Enumerator
	{
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_Buffer; // 0x10
		::System::Int32 m_EventCount; // 0x18
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentEvent; // 0x20
		::System::Int32 m_CurrentIndex; // 0x28

		/*
		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR__CTOR_OFFSET))(this, buffer);
		}
		*/

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_DISPOSE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
