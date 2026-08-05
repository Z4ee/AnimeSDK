#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EAD95F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD9660)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD96A0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector3Processor_TypeDefinitionIndex = 32589;

	class NormalizeVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR3PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
