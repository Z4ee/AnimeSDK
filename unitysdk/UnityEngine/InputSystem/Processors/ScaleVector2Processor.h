#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C0888C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C0888F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0889A0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector2Processor_TypeDefinitionIndex = 29315;

	class ScaleVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single y; // 0x10
		::System::Single x; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
