#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/CutScene/ArrayLightSystem/ArrayLightType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Timeline::CutScene::ArrayLightSystem { class AttrRandomConfig; }

#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_CLEARSUBTRACKS_OFFSET UNITYSDK_OFFSET(0x1E3DCDA0)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_COLLECTLIGHT_OFFSET UNITYSDK_OFFSET(0x1E3DCC40)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_GET_BASELIGHT_OFFSET UNITYSDK_OFFSET(0x1E3DC950)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E3DCAF0)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1E3DC990)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E3DCAE0)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_SETINFINITECLIP_OFFSET UNITYSDK_OFFSET(0x1E3DCDB0)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCDD0)

namespace UnityEngine::Timeline::CutScene::ArrayLightSystem
{
	inline static constexpr unsigned int ArrayLightSystemBehavior_TypeDefinitionIndex = 32453;

	class ArrayLightSystemBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x18
		::UnityEngine::Timeline::TrackAsset* parentTrack; // 0x20
		::UnityEngine::GameObject* refGo; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Light*>* Lights; // 0x30
		::UnityEngine::Timeline::CutScene::ArrayLightSystem::ArrayLightType LightType; // 0x38
		::UnityEngine::Color lightColor; // 0x3C
		::System::Int32 followInterval; // 0x4C
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::CutScene::ArrayLightSystem::AttrRandomConfig*>* RandomConfigs; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Light* get_BaseLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_GET_BASELIGHT_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void CollectLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_COLLECTLIGHT_OFFSET))(this);
		}

		::System::Void ClearSubTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_CLEARSUBTRACKS_OFFSET))(this);
		}

		::System::Void SetInfiniteClip(::UnityEngine::Timeline::AnimationTrack* followChildTrack, ::UnityEngine::AnimationClip* infiniteClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMBEHAVIOR_SETINFINITECLIP_OFFSET))(this, followChildTrack, infiniteClip);
		}
	};
}
