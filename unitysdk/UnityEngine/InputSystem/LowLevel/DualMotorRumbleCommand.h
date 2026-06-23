#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1D8DE2D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA14580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D8DE2B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DualMotorRumbleCommand_TypeDefinitionIndex = 31874;

	struct alignas(4) DualMotorRumbleCommand
	{
		// static const ::System::Int32 kSize = 0x10; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Single lowFrequencyMotorSpeed; // 0x18
		::System::Single highFrequencyMotorSpeed; // 0x1C

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand Create(::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_CREATE_OFFSET))(lowFrequency, highFrequency);
		}
	};
}
