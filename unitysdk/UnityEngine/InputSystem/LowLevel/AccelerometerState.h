#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACCELEROMETERSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x99D010)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACCELEROMETERSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1B9F3FF0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int AccelerometerState_TypeDefinitionIndex = 29232;

	struct alignas(4) AccelerometerState
	{
		::UnityEngine::Vector3 acceleration; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACCELEROMETERSTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACCELEROMETERSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
