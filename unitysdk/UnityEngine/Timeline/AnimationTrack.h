#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Timeline/AnimationPlayableAsset_LoopMode.h"
#include "unitysdk/UnityEngine/Timeline/AppliedOffsetMode.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_ClipExtrapolation.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Timeline/TrackOffset.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B22F550)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22E770)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1B22D370)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B22FFA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0x1B22DEA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1B22CDB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B22E210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B22D2D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEDEFAULTBLEND_OFFSET UNITYSDK_OFFSET(0x1B22FF80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET UNITYSDK_OFFSET(0x1B22FAE0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1B22D5F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B22FB40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET UNITYSDK_OFFSET(0x1B22D8A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B230A30)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x1B230A40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET UNITYSDK_OFFSET(0x1B2300F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0x1B2302B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET UNITYSDK_OFFSET(0x1B22FA80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0x1B2305A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0x1B22CD90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1B22CCA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0x1B22CD70)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B22CC60)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INCLIPMODE_OFFSET UNITYSDK_OFFSET(0x1B22CE90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1B22D1E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0x1B22D260)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B22D1A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B22D010)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1B22D050)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B22D240)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B22D220)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22CD50)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22D200)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1B22CD30)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1B22CCE0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2311A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B231010)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1B231050)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B231200)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B2311E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B22CE30)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B22CAD0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B22CB10)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22CCC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1B22CAC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B2301E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIPPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1B22E990)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B22DD20)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1B231220)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B22FEB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1B22D280)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0x1B22CDA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1B22CCB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0x1B22CD80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B22CC80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1B22D1F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0x1B22D270)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B22D1C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B22D030)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1B22D0B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B22D250)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B22D230)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22CD60)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22D210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1B22CD40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1B22CCF0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2311C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B231030)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1B2310B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B231210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B2311F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B22CAF0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B22CB70)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1B22CCD0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0x1B22E930)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0x1B22E980)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET UNITYSDK_OFFSET(0x1B22D2C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0x1B22FF90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B231720)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_TypeDefinitionIndex = 35842;

	class AnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		// static const ::System::String* k_DefaultInfiniteClipName; // 0x0
		// static const ::System::String* k_DefaultRecordableClipName; // 0x0
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPreExtrapolation; // 0xC8
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPostExtrapolation; // 0xCC
		::UnityEngine::Vector3 m_InfiniteClipOffsetPosition; // 0xD0
		::UnityEngine::Vector3 m_InfiniteClipOffsetEulerAngles; // 0xDC
		::System::Double m_InfiniteClipTimeOffset; // 0xE8
		::System::Boolean m_InfiniteClipRemoveOffset; // 0xF0
		::System::Boolean m_InfiniteClipApplyFootIK; // 0xF1
		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode mInfiniteClipLoop; // 0xF4
		::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields; // 0xF8
		::UnityEngine::Vector3 m_Position; // 0xFC
		::UnityEngine::Vector3 m_EulerAngles; // 0x108
		::UnityEngine::AvatarMask* m_AvatarMask; // 0x118
		::System::Boolean m_ApplyAvatarMask; // 0x120
		::UnityEngine::Timeline::TrackOffset m_TrackOffset; // 0x124
		::UnityEngine::AnimationClip* m_InfiniteClip; // 0x128
		::UnityEngine::Quaternion m_OpenClipOffsetRotation; // 0x130
		::UnityEngine::Quaternion m_Rotation; // 0x140
		::System::Boolean m_ApplyOffsets; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET))(this);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET))(this, a1);
		}

		::System::Boolean get_applyOffsets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET))(this);
		}

		::System::Void set_applyOffsets(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TrackOffset get_trackOffset()
		{
			return ((::UnityEngine::Timeline::TrackOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET))(this);
		}

		::System::Void set_trackOffset(::UnityEngine::Timeline::TrackOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackOffset))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields()
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET))(this);
		}

		::System::Void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* get_infiniteClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET))(this);
		}

		::System::Void set_infiniteClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_infiniteClipRemoveOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET))(this);
		}

		::System::Void set_infiniteClipRemoveOffset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::AvatarMask* get_avatarMask()
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET))(this);
		}

		::System::Void set_avatarMask(::UnityEngine::AvatarMask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET))(this, a1);
		}

		::System::Boolean get_applyAvatarMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET))(this);
		}

		::System::Void set_applyAvatarMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET))(this, a1);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Boolean get_inClipMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INCLIPMODE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_infiniteClipOffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_infiniteClipOffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_infiniteClipOffsetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(this);
		}

		::System::Void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(this, a1);
		}

		::System::Boolean get_infiniteClipApplyFootIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET))(this);
		}

		::System::Void set_infiniteClipApplyFootIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET))(this, a1);
		}

		::System::Double get_infiniteClipTimeOffset()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET))(this);
		}

		::System::Void set_infiniteClipTimeOffset(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPreExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPostExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode get_infiniteClipLoop()
		{
			return ((::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET))(this);
		}

		::System::Void set_infiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET))(this, a1);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET))(this, a1);
		}

		::System::Void CreateInfiniteClip(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::System::String* a1)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET))(this, a1);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::System::Int32 CalculateItemsHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET))(this);
		}

		::System::Void UpdateClipOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Timeline::TrackAsset* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* a4, ::UnityEngine::Timeline::AppliedOffsetMode a5)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UnityEngine_Timeline_ILayerable_ShowDefaultLayeredTrackCommands()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable OnCreateClipPlayableGraph(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIPPLAYABLEGRAPH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateDefaultBlend(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Playables::Playable a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEDEFAULTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Playables::Playable AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET))(a1);
		}

		::System::Boolean HasController(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* GetBinding(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET))(this, a1);
		}

		static ::UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* a3, ::UnityEngine::Timeline::AppliedOffsetMode a4)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Playables::Playable ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::GameObject* a3, ::UnityEngine::Timeline::AppliedOffsetMode a4)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetEvaluationTime(::System::Double& a1, ::System::Double& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET))(this, a1, a2);
		}

		::System::Void GetSequenceTime(::System::Double& a1, ::System::Double& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET))(this, a1, a2);
		}

		::System::Void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET))(this, a1, a2);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void GetAnimationClips(::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Timeline::AppliedOffsetMode(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AnimatesRootTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_openClipOffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_openClipOffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_openClipOffsetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_openClipOffsetRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_openClipOffsetEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET))(this);
		}

		::System::Void set_openClipOffsetEulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPreExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_openClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPostExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_openClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(this, a1);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET))(this, a1);
		}
	};
}
