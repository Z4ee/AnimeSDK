#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Timeline/AnimationPlayableAsset_LoopMode.h"
#include "unitysdk/UnityEngine/Timeline/AppliedOffsetMode.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_1_OFFSET UNITYSDK_OFFSET(0x1BF55F40)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF55E30)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF56530)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLIEDOFFSETMODE_OFFSET UNITYSDK_OFFSET(0x1BF55B60)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1BF55A20)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF564A0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF55B80)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BF55C00)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1BF55990)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_HASROOTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BF55A60)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1BF55A40)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF559E0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1BF55DB0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BF55820)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_REMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1BF55A00)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1BF55850)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_USETRACKMATCHFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF559C0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_HASROOTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BF55AF0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1BF567B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1BF56500)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLIEDOFFSETMODE_OFFSET UNITYSDK_OFFSET(0x1BF55B70)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1BF55A30)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF55B90)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1BF559B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1BF55A50)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF559F0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BF55840)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_REMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1BF55A10)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1BF558B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_USETRACKMATCHFIELDS_OFFSET UNITYSDK_OFFSET(0x1BF559D0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BF56410)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYSCALEREMOVE_OFFSET UNITYSDK_OFFSET(0x1BF563F0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BF56690)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BF56660)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF56A20)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF569A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPlayableAsset_TypeDefinitionIndex = 37473;

	class AnimationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Int32* StaticGet_k_LatestVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x100D0);
		}
		::UnityEngine::AnimationClip* m_Clip; // 0x18
		::UnityEngine::Vector3 m_Position; // 0x20
		::UnityEngine::Vector3 m_EulerAngles; // 0x2C
		::System::Boolean m_UseTrackMatchFields; // 0x38
		::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields; // 0x3C
		::System::Boolean m_RemoveStartOffset; // 0x40
		::System::Boolean m_ApplyFootIK; // 0x41
		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode m_Loop; // 0x44
		::UnityEngine::Timeline::AppliedOffsetMode _appliedOffsetMode_k__BackingField; // 0x48
		::System::Int32 m_Version; // 0x4C
		::UnityEngine::Quaternion m_Rotation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_EULERANGLES_OFFSET))(this);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_EULERANGLES_OFFSET))(this, a1);
		}

		::System::Boolean get_useTrackMatchFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_USETRACKMATCHFIELDS_OFFSET))(this);
		}

		::System::Void set_useTrackMatchFields(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_USETRACKMATCHFIELDS_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields()
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_MATCHTARGETFIELDS_OFFSET))(this);
		}

		::System::Void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_MATCHTARGETFIELDS_OFFSET))(this, a1);
		}

		::System::Boolean get_removeStartOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_REMOVESTARTOFFSET_OFFSET))(this);
		}

		::System::Void set_removeStartOffset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_REMOVESTARTOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_applyFootIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLYFOOTIK_OFFSET))(this);
		}

		::System::Void set_applyFootIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLYFOOTIK_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode get_loop()
		{
			return ((::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Boolean get_hasRootTransforms()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_HASROOTTRANSFORMS_OFFSET))(this);
		}

		::UnityEngine::Timeline::AppliedOffsetMode get_appliedOffsetMode()
		{
			return ((::UnityEngine::Timeline::AppliedOffsetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLIEDOFFSETMODE_OFFSET))(this);
		}

		::System::Void set_appliedOffsetMode(::UnityEngine::Timeline::AppliedOffsetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLIEDOFFSETMODE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Playables::Playable CreatePlayable_1(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::UnityEngine::Timeline::AppliedOffsetMode a6, ::System::Boolean a7, ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode a8)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Timeline::AppliedOffsetMode, ::System::Boolean, ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean ShouldApplyOffset(::UnityEngine::Timeline::AppliedOffsetMode a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYOFFSET_OFFSET))(a1, a2);
		}

		static ::System::Boolean ShouldApplyScaleRemove(::UnityEngine::Timeline::AppliedOffsetMode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYSCALEREMOVE_OFFSET))(a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_RESETOFFSETS_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HasRootTransforms(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_HASROOTTRANSFORMS_OFFSET))(a1);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ONUPGRADEFROMVERSION_OFFSET))(this, a1);
		}
	};
}
