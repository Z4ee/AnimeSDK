#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1B3FF200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_ID_OFFSET UNITYSDK_OFFSET(0x96A310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96A350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x96A390)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3FEF90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_ID_OFFSET UNITYSDK_OFFSET(0x96A340)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_NAME_OFFSET UNITYSDK_OFFSET(0x96A380)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryPairedUserAccountCommand_TypeDefinitionIndex = 29204;

	struct alignas(8) QueryPairedUserAccountCommand
	{
		// static const ::System::Int32 kMaxNameLength = 0x100; // 0x0
		// static const ::System::Int32 kMaxIdLength = 0x100; // 0x0
		// static const ::System::Int32 kSize = 0x410; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::UInt64 handle; // 0x18
		::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer nameBuffer; // 0x20
		::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer idBuffer; // 0x220

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::System::String* get_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_NAME_OFFSET))(this, value);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_CREATE_OFFSET))();
		}
	};
}
