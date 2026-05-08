#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/IMECompositionString.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1AF9C5C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x949DD0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionEvent_TypeDefinitionIndex = 29250;

	struct alignas(4) IMECompositionEvent
	{
		// static const ::System::Int32 kIMECharBufferSize = 0x40; // 0x0
		// static const ::System::Int32 Type = 0x494D4553; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString; // 0x24

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent Create(::System::Int32 deviceId, ::System::String* compositionString, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::IMECompositionEvent(*)(::System::Int32, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONEVENT_CREATE_OFFSET))(deviceId, compositionString, time);
		}
	};
}
