#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EB038F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB03AC0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB03B00)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateRotationProcessor_TypeDefinitionIndex = 32583;

	class CompensateRotationProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEROTATIONPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
