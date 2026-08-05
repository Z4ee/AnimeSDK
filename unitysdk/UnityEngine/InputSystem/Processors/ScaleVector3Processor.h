#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F16C480)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F16C4B0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F16C580)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector3Processor_TypeDefinitionIndex = 32592;

	class ScaleVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>
	{
	public:
		::System::Single y; // 0x10
		::System::Single z; // 0x14
		::System::Single x; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR3PROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
