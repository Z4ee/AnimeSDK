#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Timeline { class AnimationPlayableAsset; }

#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1899E0E0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1899E270)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1899E1D0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1899E2F0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1899E240)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1899E1F0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1899E0D0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45__CTOR_OFFSET UNITYSDK_OFFSET(0x1899D500)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPlayableAsset__get_outputs_d__45_TypeDefinitionIndex = 29816;

	class AnimationPlayableAsset__get_outputs_d__45 : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::AnimationPlayableAsset* __4__this; // 0x10
		::UnityEngine::Playables::PlayableBinding __2__current; // 0x18
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_PLAYABLES_PLAYABLEBINDING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__GET_OUTPUTS_D__45_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
