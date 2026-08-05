#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Animations/BlendTarget.h"
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

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ADDANIMATIONPLAYABLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1F3A0EC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F3A3E00)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A2DC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1F3A1B30)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A4940)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0x1F3A25C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1F3A1470)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CLEARANIMATIONPLAYABLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1F3A0E80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A2700)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A1990)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEDEFAULTBLEND_OFFSET UNITYSDK_OFFSET(0x1F3A4920)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET UNITYSDK_OFFSET(0x1F3A40D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A2080)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A4150)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A2230)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F3A5600)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x1F3A5610)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET UNITYSDK_OFFSET(0x1F3A4AF0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0x1F3A5440)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET UNITYSDK_OFFSET(0x1F3A4060)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0x1F3A54F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0x1F3A1450)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3A1340)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0x1F3A1430)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A1300)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INCLIPMODE_OFFSET UNITYSDK_OFFSET(0x1F3A1690)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1F3A18A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0x1F3A1920)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A1860)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A16D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A1710)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A1900)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A18E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A1410)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A18C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A13F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1F3A1380)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A5F50)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A5DC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A5E00)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A5FB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A5F90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTANIMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F3A1150)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1F3A1610)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F3A1170)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A11B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A1360)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1F3A50B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIPPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1F3A3080)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A2570)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1F3A5FD0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_PREPOSTPROCESSTRACK_OFFSET UNITYSDK_OFFSET(0x1F3A26F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A4650)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3A1940)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SETBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1F3A0F50)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SETOUTPUTANIMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F3A1160)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0x1F3A1460)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3A1350)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0x1F3A1440)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A1320)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x1F3A18B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0x1F3A1930)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A1880)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A16F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A1770)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A1910)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A18F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A1420)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A18D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1F3A1400)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0x1F3A1390)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1F3A5F70)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A5DE0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A5E60)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A5FC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1F3A5FA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F3A1190)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F3A1210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0x1F3A1370)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0x1F3A2FD0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3A1980)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0x1F3A4930)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A6070)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_TypeDefinitionIndex = 32889;

	class AnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		// static const ::System::String* k_DefaultInfiniteClipName; // 0x0
		// static const ::System::String* k_DefaultRecordableClipName; // 0x0
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPreExtrapolation; // 0xB0
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPostExtrapolation; // 0xB4
		::UnityEngine::Vector3 m_InfiniteClipOffsetPosition; // 0xB8
		::UnityEngine::Vector3 m_InfiniteClipOffsetEulerAngles; // 0xC4
		::System::Double m_InfiniteClipTimeOffset; // 0xD0
		::System::Boolean m_InfiniteClipRemoveOffset; // 0xD8
		::System::Boolean m_InfiniteClipApplyFootIK; // 0xD9
		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode mInfiniteClipLoop; // 0xDC
		::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields; // 0xE0
		::UnityEngine::Vector3 m_Position; // 0xE4
		::UnityEngine::Vector3 m_EulerAngles; // 0xF0
		::UnityEngine::AvatarMask* m_AvatarMask; // 0x100
		::System::Boolean m_ApplyAvatarMask; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Animations::AnimationPlayableOutput>* _animationPlayableOutputs; // 0x110
		::System::Single _outputAnimWeight; // 0x118
		::UnityEngine::Timeline::TrackOffset m_TrackOffset; // 0x11C
		::UnityEngine::AnimationClip* m_InfiniteClip; // 0x120
		::System::Boolean banCompile; // 0x128
		::UnityEngine::Quaternion m_OpenClipOffsetRotation; // 0x12C
		::UnityEngine::Quaternion m_Rotation; // 0x13C
		::System::Boolean m_ApplyOffsets; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Void ClearAnimationPlayableOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CLEARANIMATIONPLAYABLEOUTPUT_OFFSET))(this);
		}

		::System::Void AddAnimationPlayableOutput(::UnityEngine::Animations::AnimationPlayableOutput animPlayableOutput)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ADDANIMATIONPLAYABLEOUTPUT_OFFSET))(this, animPlayableOutput);
		}

		::System::Void SetBlendTarget(::UnityEngine::Animations::BlendTarget blendTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::BlendTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SETBLENDTARGET_OFFSET))(this, blendTarget);
		}

		::System::Single get_OutputAnimWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTANIMWEIGHT_OFFSET))(this);
		}

		::System::Void SetOutputAnimWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SETOUTPUTANIMWEIGHT_OFFSET))(this, weight);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET))(this);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET))(this, value);
		}

		::System::Boolean get_applyOffsets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET))(this);
		}

		::System::Void set_applyOffsets(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TrackOffset get_trackOffset()
		{
			return ((::UnityEngine::Timeline::TrackOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET))(this);
		}

		::System::Void set_trackOffset(::UnityEngine::Timeline::TrackOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackOffset))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields()
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET))(this);
		}

		::System::Void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET))(this, value);
		}

		::UnityEngine::AnimationClip* get_infiniteClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET))(this);
		}

		::System::Void set_infiniteClip(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET))(this, value);
		}

		::System::Boolean get_infiniteClipRemoveOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET))(this);
		}

		::System::Void set_infiniteClipRemoveOffset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::AvatarMask* get_avatarMask()
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET))(this);
		}

		::System::Void set_avatarMask(::UnityEngine::AvatarMask* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET))(this, value);
		}

		::System::Boolean get_applyAvatarMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET))(this);
		}

		::System::Void set_applyAvatarMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET))(this, value);
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

		::System::Void set_infiniteClipOffsetPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_infiniteClipOffsetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(this);
		}

		::System::Void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(this, value);
		}

		::System::Boolean get_infiniteClipApplyFootIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET))(this);
		}

		::System::Void set_infiniteClipApplyFootIK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET))(this, value);
		}

		::System::Double get_infiniteClipTimeOffset()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET))(this);
		}

		::System::Void set_infiniteClipTimeOffset(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPreExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPostExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode get_infiniteClipLoop()
		{
			return ((::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET))(this);
		}

		::System::Void set_infiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET))(this, value);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip* clip)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET))(this, clip);
		}

		::System::Void CreateInfiniteClip(::System::String* infiniteClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET))(this, infiniteClipName);
		}

		::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::System::String* animClipName)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET))(this, animClipName);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}

		::System::Int32 CalculateItemsHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET))(this);
		}

		::System::Void UpdateClipOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET))(this);
		}

		::System::Void PrePostProcessTrack(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_PREPOSTPROCESSTRACK_OFFSET))(this, graph, gameObject, clip);
		}

		::UnityEngine::Playables::Playable CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::Timeline::AppliedOffsetMode mode)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET))(this, graph, track, go, tree, mode);
		}

		::UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::UnityEngine::Playables::Playable OnCreateClipPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIPPLAYABLEGRAPH_OFFSET))(this, graph, go, tree);
		}

		::UnityEngine::Playables::Playable CreateDefaultBlend(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable mixer, ::System::Boolean requireOffset)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEDEFAULTBLEND_OFFSET))(this, graph, go, mixer, requireOffset);
		}

		::UnityEngine::Playables::Playable AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET))(this, graph, playable, pos, rot);
		}

		::System::Boolean RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET))(this, mode, gameObject);
		}

		static ::System::Boolean UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode mode)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET))(mode);
		}

		::System::Boolean HasController(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET))(this, gameObject);
		}

		::UnityEngine::Animator* GetBinding(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET))(this, director);
		}

		static ::UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET))(graph, go, inputCount);
		}

		::UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::Timeline::AppliedOffsetMode mode)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET))(this, graph, go, tree, mode);
		}

		::UnityEngine::Playables::Playable ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable root, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::AppliedOffsetMode mode)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AppliedOffsetMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET))(this, graph, root, go, mode);
		}

		::System::Void GetEvaluationTime(::System::Double& outStart, ::System::Double& outDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET))(this, outStart, outDuration);
		}

		::System::Void GetSequenceTime(::System::Double& outStart, ::System::Double& outDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET))(this, outStart, outDuration);
		}

		::System::Void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::AnimationClip* animClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET))(this, clip, animClip);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::System::Void GetAnimationClips(::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* animClips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET))(this, animClips);
		}

		::UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(::UnityEngine::GameObject* go, ::System::Boolean animatesRootTransform)
		{
			return ((::UnityEngine::Timeline::AppliedOffsetMode(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET))(this, go, animatesRootTransform);
		}

		::System::Boolean AnimatesRootTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_openClipOffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_openClipOffsetPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_openClipOffsetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_openClipOffsetRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_openClipOffsetEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET))(this);
		}

		::System::Void set_openClipOffsetEulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPreExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_openClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPostExtrapolation()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(this);
		}

		::System::Void set_openClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(this, value);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 oldVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET))(this, oldVersion);
		}
	};
}
