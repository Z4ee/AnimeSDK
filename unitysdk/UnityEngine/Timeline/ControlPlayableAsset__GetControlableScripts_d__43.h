#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB8FDC0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MONOBEHAVIOUR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB90030)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MONOBEHAVIOUR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB8FFC0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB900B0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB90020)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DB8FFD0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB8FDB0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8FD90)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlPlayableAsset__GetControlableScripts_d__43_TypeDefinitionIndex = 32356;

	class ControlPlayableAsset__GetControlableScripts_d__43 : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* __2__current; // 0x10
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::GameObject* __3__root; // 0x20
		::Il2CppArray<::UnityEngine::MonoBehaviour*>* __7__wrap1; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __7__wrap2; // 0x34
		::System::Int32 __1__state; // 0x38

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
