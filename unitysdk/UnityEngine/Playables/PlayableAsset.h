#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B2B49E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B2B4A20)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B2B4A50)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET UNITYSDK_OFFSET(0x1B2B4AF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B4B20)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableAsset_TypeDefinitionIndex = 4889;

	class PlayableAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		static ::System::Void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::PlayableGraph a2, ::UnityEngine::GameObject* a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET))(a1, a2);
		}
	};
}
