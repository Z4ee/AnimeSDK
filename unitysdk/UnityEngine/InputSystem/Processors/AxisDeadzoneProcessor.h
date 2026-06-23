#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CD2EC50)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CD2EB70)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1CD2ED30)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD2EF90)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2F220)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int AxisDeadzoneProcessor_TypeDefinitionIndex = 31960;

	class AxisDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::System::Single>
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_minOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET))(this);
		}

		::System::Single get_maxOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
