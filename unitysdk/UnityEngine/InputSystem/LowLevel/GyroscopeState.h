#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA0B780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1D754640)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GyroscopeState_TypeDefinitionIndex = 31889;

	struct alignas(4) GyroscopeState
	{
		::UnityEngine::Vector3 angularVelocity; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
