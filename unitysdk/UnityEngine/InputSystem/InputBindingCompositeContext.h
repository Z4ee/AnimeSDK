#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA92F20)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0xA92EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET UNITYSDK_OFFSET(0xA92F50)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0xA92FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0xA92FB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingCompositeContext_TypeDefinitionIndex = 32201;

	struct alignas(8) InputBindingCompositeContext
	{
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::System::Int32 m_BindingIndex; // 0x18

		/*
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* get_controls()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET))(this);
		}
		*/

		::System::Single EvaluateMagnitude(::System::Int32 partNumber)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET))(this, partNumber);
		}

		::System::Boolean ReadValueAsButton(::System::Int32 partNumber)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET))(this, partNumber);
		}

		::System::Void ReadValue(::System::Int32 partNumber, ::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(this, partNumber, buffer, bufferSize);
		}

		::System::Object* ReadValueAsObject(::System::Int32 partNumber)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET))(this, partNumber);
		}
	};
}
