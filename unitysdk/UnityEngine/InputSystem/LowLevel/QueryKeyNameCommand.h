#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/QueryKeyNameCommand__nameBuffer_e__FixedBuffer.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD81E70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA407D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DD81E20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_READKEYNAME_OFFSET UNITYSDK_OFFSET(0xA407A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryKeyNameCommand_TypeDefinitionIndex = 31856;

	struct alignas(4) QueryKeyNameCommand
	{
		// static const ::System::Int32 kMaxNameLength = 0x100; // 0x0
		// static const ::System::Int32 kSize = 0x10C; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Int32 scanOrKeyCode; // 0x18
		::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer nameBuffer; // 0x1C

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::System::String* ReadKeyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_READKEYNAME_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand Create(::UnityEngine::InputSystem::Key key)
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_CREATE_OFFSET))(key);
		}
	};
}
