#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D734A10)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1D734A70)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D734AD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET UNITYSDK_OFFSET(0x1D734CB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D734CE0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableAsset_TypeDefinitionIndex = 6287;

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

		static ::System::Void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET))(asset, graph, go, ptr);
		}

		static ::System::Void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* asset, ::System::IntPtr ptrToDouble)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET))(asset, ptrToDouble);
		}
	};
}
