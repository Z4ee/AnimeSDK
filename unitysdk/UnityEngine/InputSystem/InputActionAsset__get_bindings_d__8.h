#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A920070)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTBINDING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A920310)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTBINDING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A920200)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A9203A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A920290)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A920240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A920060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A920040)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset__get_bindings_d__8_TypeDefinitionIndex = 28876;

	class InputActionAsset__get_bindings_d__8 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* _bindings_5__4; // 0x10
		::UnityEngine::InputSystem::InputBinding __2__current; // 0x18
		::UnityEngine::InputSystem::InputActionAsset* __4__this; // 0x70
		::System::Int32 _n_5__6; // 0x78
		::System::Int32 _i_5__3; // 0x7C
		::System::Int32 _numBindings_5__5; // 0x80
		::System::Int32 _numActionMaps_5__2; // 0x84
		::System::Int32 __1__state; // 0x88
		::System::Int32 __l__initialThreadId; // 0x8C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current()
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTBINDING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTBINDING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GET_BINDINGS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
