#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_GET_PART_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_SET_PART_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingCompositeContext_PartBinding_TypeDefinitionIndex = 31582;

	struct alignas(8) InputBindingCompositeContext_PartBinding
	{
		::System::Int32 _part_k__BackingField; // 0x10
		::UnityEngine::InputSystem::InputControl* _control_k__BackingField; // 0x18

		::System::Int32 get_part()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_GET_PART_OFFSET))(this);
		}

		::System::Void set_part(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_SET_PART_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_control(::UnityEngine::InputSystem::InputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING_SET_CONTROL_OFFSET))(this, value);
		}
	};
}
