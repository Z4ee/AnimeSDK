#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_ParsedPathComponent.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x979F20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_MOVETONEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x979F70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_PARSECOMPONENTPART_OFFSET UNITYSDK_OFFSET(0x979F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x979F30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_PathParser_TypeDefinitionIndex = 32242;

	struct alignas(8) InputControlPath_PathParser
	{
		::System::String* path; // 0x10
		::System::Int32 length; // 0x18
		::System::Int32 leftIndexInPath; // 0x1C
		::System::Int32 rightIndexInPath; // 0x20
		::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent current; // 0x28

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER__CTOR_OFFSET))(this, path);
		}

		::System::Boolean get_isAtEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_GET_ISATEND_OFFSET))(this);
		}

		::System::Boolean MoveToNextComponent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_MOVETONEXTCOMPONENT_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::Substring ParseComponentPart(::System::Char terminator)
		{
			return ((::UnityEngine::InputSystem::Utilities::Substring(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHPARSER_PARSECOMPONENTPART_OFFSET))(this, terminator);
		}
		*/
	};
}
