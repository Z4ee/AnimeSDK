#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA63770)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1E3D0CF0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PointerState_TypeDefinitionIndex = 31887;

	struct alignas(4) PointerState
	{
		::System::UInt32 pointerId; // 0x10
		::UnityEngine::Vector2 position; // 0x14
		::UnityEngine::Vector2 delta; // 0x1C
		::System::Single pressure; // 0x24
		::UnityEngine::Vector2 radius; // 0x28
		::System::UInt16 buttons; // 0x30

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
