#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/ImgSplitScreenGroupBehavior_ClearCtx.h"
#include "unitysdk/UnityEngine/Timeline/ImgSplitScreenGroupBehavior___c__DisplayClass16_0.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ComicImgStyle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class ComicGroupTrack; }
namespace UnityEngine::Timeline { class ImageExchangeEvent; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }
namespace UnityEngine::Timeline { class PictureDecorateEvent; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_COMINIT_OFFSET UNITYSDK_OFFSET(0x1DD0D100)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD0A830)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETBELONGPOS_OFFSET UNITYSDK_OFFSET(0x1DD0CF30)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETIFHIDEINSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1DD0DD60)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETSELFCOMICGROUPTRACK_OFFSET UNITYSDK_OFFSET(0x1DD0DF50)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_HANDLESPLITANIM_OFFSET UNITYSDK_OFFSET(0x1DD0ADD0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_IMAGEEXCHANGE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1DD0DD50)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DD0A970)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_INITPARTOFFSETMAP_OFFSET UNITYSDK_OFFSET(0x1DD0A990)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PICTUREDECORATIONCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1DD0DF90)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PICTUREDECORATIONCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1DD0DFA0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1DD0D590)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1DD0D370)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_RESET_OFFSET UNITYSDK_OFFSET(0x1DD0DCE0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1DD0CEB0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_TAGSNEEDCLEAR_OFFSET UNITYSDK_OFFSET(0x1DD0D3E0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1DD0DF60)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1DD0DF80)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_TOFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x1DD0DF70)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD0E050)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0DFB0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__INITPARTOFFSETMAP_G__RECORDMAP_16_0_OFFSET UNITYSDK_OFFSET(0x1DD0C5F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior_TypeDefinitionIndex = 32342;

	class ImgSplitScreenGroupBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::UnityEngine::Timeline::ComicGroupTrack** StaticGet_CurComicGroupTrack()
		{
			return (::UnityEngine::Timeline::ComicGroupTrack**)Il2CppClass::FromTypeDefinitionIndex(ImgSplitScreenGroupBehavior_TypeDefinitionIndex)->GetStaticField(0x26860);
		}
		static ::System::Boolean* StaticGet_MUTE_BEHABIOUR()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ImgSplitScreenGroupBehavior_TypeDefinitionIndex)->GetStaticField(0x7EE0);
		}
		// static const ::System::Single kUnsetTime; // 0x0
		// static const ::System::String* ARROW_PATH; // 0x0
		// static const ::System::String* ARROR_ROOT_PART_PATH; // 0x0
		// static const ::System::String* TEXT_PATH; // 0x0
		// static const ::System::String* MAX_RANGE_CONTENT_PATH; // 0x0
		// static const ::System::String* MAX_RANGE_ROOT_PATH; // 0x0
		// static const ::System::String* MAX_RANGE_TEXT_PATH; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>* m_mapPartOffset; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ImgSplitScreenGroupBehavior_ClearCtx>* m_arrClearTags; // 0x18
		::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* m_stData; // 0x20
		::UnityEngine::Timeline::TimelineAsset* m_stTimelineData; // 0x28
		::UnityEngine::Timeline::ComicGroupTrack* m_stComicGroupTrack; // 0x30
		::System::Single m_LastTime; // 0x38
		::System::Boolean m_bComIsInit; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ImgSplitScreenGroupBehavior*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* data, ::UnityEngine::Timeline::TimelineAsset* timelineData, ::UnityEngine::Timeline::ComicGroupTrack* comicGroupTrack)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ImgSplitScreenGroupBehavior*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Timeline::ComicGroupTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_CREATE_OFFSET))(graph, data, timelineData, comicGroupTrack);
		}

		::System::Void Initialize(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* data, ::UnityEngine::Timeline::TimelineAsset* timelineData, ::UnityEngine::Timeline::ComicGroupTrack* comicGroupTrack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Timeline::ComicGroupTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_INITIALIZE_OFFSET))(this, data, timelineData, comicGroupTrack);
		}

		::System::Void InitPartOffsetMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_INITPARTOFFSETMAP_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetBelongPos(::System::String* belongName, ::System::Double markerTime, ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* allSplitClips, ::UnityEngine::Vector2 nowBelongPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::System::Double, ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETBELONGPOS_OFFSET))(this, belongName, markerTime, allSplitClips, nowBelongPos);
		}

		::System::Void ComInit(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_COMINIT_OFFSET))(this, go);
		}

		::System::Boolean TagsNeedClear(::System::Double time, ::System::Collections::Generic::List_1<::System::Int32>* tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_TAGSNEEDCLEAR_OFFSET))(this, time, tags);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::UnityEngine::Transform* HandleSplitAnim(::UnityEngine::Timeline::ComicGroupTrack* groupTrack, ::System::Double time)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Timeline::ComicGroupTrack*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_HANDLESPLITANIM_OFFSET))(this, groupTrack, time);
		}

		::System::Boolean GetIfHideInSplitScreen(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* allSplitClips, ::System::Int32 parmID, ::System::Double markerTime, ::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*, ::System::Int32, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETIFHIDEINSPLITSCREEN_OFFSET))(this, allSplitClips, parmID, markerTime, curTime);
		}

		::UnityEngine::Timeline::ComicGroupTrack* GetSelfComicGroupTrack()
		{
			return ((::UnityEngine::Timeline::ComicGroupTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_GETSELFCOMICGROUPTRACK_OFFSET))(this);
		}

		::System::Void SplitImgCom_Init(::UnityEngine::GameObject* go, ::MoleMole::ComicImgStyle* styleData, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>* spriteItems)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_INIT_OFFSET))(this, go, styleData, spriteItems);
		}

		::System::Void SplitImgCom_Simulate(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::SplitScreenEvent* e, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_SIMULATE_OFFSET))(this, go, e, progress);
		}

		::System::Void SplitImgCom_Reset(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_SPLITIMGCOM_RESET_OFFSET))(this, go);
		}

		::System::Void VoiceDecorationCom_Init(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::VoiceDecorateEvent* voiceDecorateEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_INIT_OFFSET))(this, go, voiceDecorateEvent);
		}

		::System::Void VoiceDecorationCom_ToFinishState(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_TOFINISHSTATE_OFFSET))(this, go);
		}

		::System::Void VoiceDecorationCom_Simulate(::UnityEngine::GameObject* go, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_VOICEDECORATIONCOM_SIMULATE_OFFSET))(this, go, progress);
		}

		::System::Void ImageExchange_Trigger(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::ImageExchangeEvent* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_IMAGEEXCHANGE_TRIGGER_OFFSET))(this, go, e);
		}

		::System::Void PictureDecorationCom_Init(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::PictureDecorateEvent* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PICTUREDECORATIONCOM_INIT_OFFSET))(this, go, e);
		}

		::System::Void PictureDecorationCom_Simulate(::UnityEngine::GameObject* go, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_PICTUREDECORATIONCOM_SIMULATE_OFFSET))(this, go, progress);
		}

		::System::Void _InitPartOffsetMap_g__RecordMap_16_0(::UnityEngine::Timeline::ImgSplitScreenGroupBehavior___c__DisplayClass16_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ImgSplitScreenGroupBehavior___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR__INITPARTOFFSETMAP_G__RECORDMAP_16_0_OFFSET))(this, a1);
		}
	};
}
