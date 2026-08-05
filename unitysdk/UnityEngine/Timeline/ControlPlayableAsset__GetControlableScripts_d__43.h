#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EF75F80)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MONOBEHAVIOUR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF761F0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MONOBEHAVIOUR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF76180)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF76270)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF761E0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EF76190)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF75F70)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF75F50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlPlayableAsset__GetControlableScripts_d__43_TypeDefinitionIndex = 32987;

	class ControlPlayableAsset__GetControlableScripts_d__43 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* root; // 0x10
		::Il2CppArray<::UnityEngine::MonoBehaviour*>* __7__wrap1; // 0x18
		::UnityEngine::GameObject* __3__root; // 0x20
		::UnityEngine::MonoBehaviour* __2__current; // 0x28
		::System::Int32 __7__wrap2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MONOBEHAVIOUR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>* System_Collections_Generic_IEnumerable_UnityEngine_MonoBehaviour__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MONOBEHAVIOUR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
