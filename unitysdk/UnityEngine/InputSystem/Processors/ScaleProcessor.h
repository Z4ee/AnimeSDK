#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1D754AA0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D754AB0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D754B30)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleProcessor_TypeDefinitionIndex = 31970;

	class ScaleProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::System::Single>
	{
	public:
		::System::Single factor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
