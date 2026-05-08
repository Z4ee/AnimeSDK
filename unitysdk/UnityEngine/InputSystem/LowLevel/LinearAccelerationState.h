#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x94A2C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1AF9E880)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int LinearAccelerationState_TypeDefinitionIndex = 29236;

	struct alignas(4) LinearAccelerationState
	{
		::UnityEngine::Vector3 acceleration; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
