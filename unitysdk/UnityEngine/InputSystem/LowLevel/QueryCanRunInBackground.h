#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_CREATE_OFFSET UNITYSDK_OFFSET(0x1BA6F4C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9A1700)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BA6F4A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryCanRunInBackground_TypeDefinitionIndex = 29197;

	struct alignas(4) QueryCanRunInBackground
	{
		// static const ::System::Int32 kSize = 0x9; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Boolean canRunInBackground; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYCANRUNINBACKGROUND_CREATE_OFFSET))();
		}
	};
}
