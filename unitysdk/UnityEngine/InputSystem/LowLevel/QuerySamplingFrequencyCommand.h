#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1B979140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x92A560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B979120)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QuerySamplingFrequencyCommand_TypeDefinitionIndex = 31864;

	struct alignas(4) QuerySamplingFrequencyCommand
	{
		// static const ::System::Int32 kSize = 0xC; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Single frequency; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET))();
		}
	};
}
