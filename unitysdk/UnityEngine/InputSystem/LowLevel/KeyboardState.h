#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/KeyboardState__keys_e__FixedBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0xA63760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E3D0B80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_PRESS_OFFSET UNITYSDK_OFFSET(0xA63720)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA63740)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_SET_OFFSET UNITYSDK_OFFSET(0xA636E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA636D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int KeyboardState_TypeDefinitionIndex = 31882;

	struct alignas(1) KeyboardState
	{
		// static const ::System::Int32 kSizeInBits = 0x6E; // 0x0
		// static const ::System::Int32 kSizeInBytes = 0xE; // 0x0
		::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer keys; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::InputSystem::Key>* pressedKeys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Key>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE__CTOR_OFFSET))(this, pressedKeys);
		}

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET))();
		}
		*/

		::System::Void Set(::UnityEngine::InputSystem::Key key, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_SET_OFFSET))(this, key, state);
		}

		::System::Void Press(::UnityEngine::InputSystem::Key key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_PRESS_OFFSET))(this, key);
		}

		::System::Void Release(::UnityEngine::InputSystem::Key key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_RELEASE_OFFSET))(this, key);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_1_OFFSET))(this);
		}
		*/
	};
}
