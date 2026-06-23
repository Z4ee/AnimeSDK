#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1DDEE190)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEE490)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEE4D0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int CompensateDirectionProcessor_TypeDefinitionIndex = 31962;

	class CompensateDirectionProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_COMPENSATEDIRECTIONPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
