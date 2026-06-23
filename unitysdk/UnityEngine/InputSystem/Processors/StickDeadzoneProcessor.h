#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GETDEADZONEADJUSTEDVALUE_OFFSET UNITYSDK_OFFSET(0x1D8B45F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D8B4410)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D8B4330)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1D8B44F0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D8B4670)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B4720)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int StickDeadzoneProcessor_TypeDefinitionIndex = 31973;

	class StickDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_minOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET))(this);
		}

		::System::Single get_maxOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		::System::Single GetDeadZoneAdjustedValue(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_GETDEADZONEADJUSTEDVALUE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_STICKDEADZONEPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
