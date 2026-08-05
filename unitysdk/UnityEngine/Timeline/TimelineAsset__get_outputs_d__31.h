#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F712250)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F712990)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7128D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F712A10)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F712940)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F7128F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F711E90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31__CTOR_OFFSET UNITYSDK_OFFSET(0x1F711E70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F712170)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1F712090)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset__get_outputs_d__31_TypeDefinitionIndex = 32904;

	class TimelineAsset__get_outputs_d__31 : public ::System::Object
	{
	public:
		::UnityEngine::Playables::PlayableBinding __2__current; // 0x10
		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>* __7__wrap1; // 0x30
		::UnityEngine::Timeline::TimelineAsset* __4__this; // 0x38
		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* __7__wrap2; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31___M__FINALLY2_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__GET_OUTPUTS_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
