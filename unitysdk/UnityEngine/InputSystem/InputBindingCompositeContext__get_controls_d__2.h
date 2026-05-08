#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_BindingState.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext_PartBinding.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B4E6D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B4E6F50)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4E6EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B4E6FD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4E6F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B4E6EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4E6D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E6D60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingCompositeContext__get_controls_d__2_TypeDefinitionIndex = 28928;

	class InputBindingCompositeContext__get_controls_d__2 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputBindingCompositeContext __4__this; // 0x10
		::UnityEngine::InputSystem::InputBindingCompositeContext __3____4__this; // 0x20
		::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding __2__current; // 0x30
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::UnityEngine::InputSystem::InputActionState_BindingState _bindingState_5__4; // 0x48
		::System::Int32 _i_5__6; // 0x5C
		::System::Int32 _bindingIndex_5__3; // 0x60
		::System::Int32 _controlStartIndex_5__5; // 0x64
		::System::Int32 _totalBindingCount_5__2; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current()
		{
			return ((::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_PARTBINDING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT__GET_CONTROLS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
