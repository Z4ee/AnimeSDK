#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA435B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1DDED7B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GravityState_TypeDefinitionIndex = 31890;

	struct alignas(4) GravityState
	{
		::UnityEngine::Vector3 gravity; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
