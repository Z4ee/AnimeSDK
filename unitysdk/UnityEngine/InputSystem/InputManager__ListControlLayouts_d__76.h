#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputManager; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EB41DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB42730)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EB426C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB427D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EB42720)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EB426D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EB41D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB41D30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EB41D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1EB41D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1EB41DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1EB41DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY5_OFFSET UNITYSDK_OFFSET(0x1EB41DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY6_OFFSET UNITYSDK_OFFSET(0x1EB41DD0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager__ListControlLayouts_d__76_TypeDefinitionIndex = 32309;

	class InputManager__ListControlLayouts_d__76 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString _internedBasedOn_5__2; // 0x10
		::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> __7__wrap2; // 0x20
		::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*> __7__wrap3; // 0x50
		::System::String* basedOn; // 0x80
		::System::String* __3__basedOn; // 0x88
		::System::String* __2__current; // 0x90
		::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> __7__wrap4; // 0x98
		::UnityEngine::InputSystem::InputManager* __4__this; // 0xC8
		::System::Int32 __1__state; // 0xD0
		::System::Int32 __l__initialThreadId; // 0xD4

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY3_OFFSET))(this);
		}

		::System::Void __m__Finally4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY4_OFFSET))(this);
		}

		::System::Void __m__Finally5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY5_OFFSET))(this);
		}

		::System::Void __m__Finally6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY6_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
