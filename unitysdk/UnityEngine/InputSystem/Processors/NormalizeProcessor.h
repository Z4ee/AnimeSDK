#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_1.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1E01F490)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1E01F400)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1E01F370)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E01F4E0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01F5B0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeProcessor_TypeDefinitionIndex = 31967;

	class NormalizeProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::System::Single>
	{
	public:
		::System::Single zero; // 0x10
		::System::Single min; // 0x14
		::System::Single max; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Process(::System::Single value, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET))(this, value, control);
		}

		static ::System::Single Normalize(::System::Single value, ::System::Single min, ::System::Single max, ::System::Single zero)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET))(value, min, max, zero);
		}

		static ::System::Single Denormalize(::System::Single value, ::System::Single min, ::System::Single max, ::System::Single zero)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET))(value, min, max, zero);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET))(this);
		}
	};
}
