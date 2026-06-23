#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1DD07930)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD07940)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD07980)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertProcessor_TypeDefinitionIndex = 31964;

	class InvertProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
