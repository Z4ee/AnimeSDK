#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF779F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF77B80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF77AD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF77C40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF77B30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DF77AE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF779E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF779C0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Collection__GetBaseLayouts_d__24_TypeDefinitionIndex = 31991;

	class InputControlLayout_Collection__GetBaseLayouts_d__24 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString __3__layout; // 0x10
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection __3____4__this; // 0x20
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection __4__this; // 0x60
		::UnityEngine::InputSystem::Utilities::InternedString __2__current; // 0xA0
		::UnityEngine::InputSystem::Utilities::InternedString layout; // 0xB0
		::System::Int32 __1__state; // 0xC0
		::System::Boolean __3__includeSelf; // 0xC4
		::System::Boolean includeSelf; // 0xC5
		::System::Int32 __l__initialThreadId; // 0xC8

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION__GETBASELAYOUTS_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
