#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B238590)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MONOBEHAVIOUR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B238710)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MONOBEHAVIOUR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B2386A0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B238790)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B238700)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B2386B0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B238580)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1B236BC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlPlayableAsset__GetControlableScripts_d__41_TypeDefinitionIndex = 35876;

	class ControlPlayableAsset__GetControlableScripts_d__41 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::MonoBehaviour*>* __7__wrap1; // 0x10
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::MonoBehaviour* __2__current; // 0x20
		::UnityEngine::GameObject* __3__root; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __7__wrap2; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MONOBEHAVIOUR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>* System_Collections_Generic_IEnumerable_UnityEngine_MonoBehaviour__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MONOBEHAVIOUR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__GETCONTROLABLESCRIPTS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
