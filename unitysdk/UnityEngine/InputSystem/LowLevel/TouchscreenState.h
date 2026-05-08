#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState__primaryTouchData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState__touchData_e__FixedBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x8B6F20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1A04FEA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x8B6F00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x8B6F10)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState_TypeDefinitionIndex = 29239;

	struct alignas(1) TouchscreenState
	{
		// static const ::System::Int32 MaxTouches = 0xA; // 0x0
		// static const ::System::Int32 kTouchDataOffset = 0x38; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer primaryTouchData; // 0x10
		::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer touchData; // 0x48

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::LowLevel::TouchState* get_primaryTouch()
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::LowLevel::TouchState* get_touches()
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_1_OFFSET))(this);
		}
		*/
	};
}
