#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0B3AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9C1E10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C0B3AB0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SetSamplingFrequencyCommand_TypeDefinitionIndex = 29214;

	struct alignas(4) SetSamplingFrequencyCommand
	{
		// static const ::System::Int32 kSize = 0xC; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Single frequency; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand Create(::System::Single frequency)
		{
			return ((::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET))(frequency);
		}
	};
}
