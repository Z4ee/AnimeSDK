#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1DDEE710)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEE790)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEE7D0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector2Processor_TypeDefinitionIndex = 31968;

	class NormalizeVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
