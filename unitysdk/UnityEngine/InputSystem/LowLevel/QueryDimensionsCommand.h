#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3D0D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA63780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E3D0D10)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryDimensionsCommand_TypeDefinitionIndex = 31854;

	struct alignas(4) QueryDimensionsCommand
	{
		// static const ::System::Int32 kSize = 0x10; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::Vector2 outDimensions; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_CREATE_OFFSET))();
		}
	};
}
