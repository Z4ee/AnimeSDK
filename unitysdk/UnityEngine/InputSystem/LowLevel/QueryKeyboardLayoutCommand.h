#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/QueryKeyboardLayoutCommand__nameBuffer_e__FixedBuffer.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1EB03830)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA596D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EB037A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_READLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9A7140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_WRITELAYOUTNAME_OFFSET UNITYSDK_OFFSET(0xA596A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryKeyboardLayoutCommand_TypeDefinitionIndex = 32478;

	struct alignas(4) QueryKeyboardLayoutCommand
	{
		// static const ::System::Int32 kMaxNameLength = 0x100; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand__nameBuffer_e__FixedBuffer nameBuffer; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		::System::String* ReadLayoutName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_READLAYOUTNAME_OFFSET))(this);
		}

		::System::Void WriteLayoutName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_WRITELAYOUTNAME_OFFSET))(this, name);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_CREATE_OFFSET))();
		}
	};
}
