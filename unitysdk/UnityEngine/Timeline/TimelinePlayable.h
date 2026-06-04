#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ITimelineEvaluateCallback; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET UNITYSDK_OFFSET(0x1B24CE90)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET UNITYSDK_OFFSET(0x1B24ABA0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1B24A9A0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1B24CA50)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B24BF80)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B24B930)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B245740)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEANIMATIONPREVIEWUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B24C8A0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B24C740)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B24CF60)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_FORAOTCOMPILATIONONLY_OFFSET UNITYSDK_OFFSET(0x1B24D7F0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B24CF10)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B24D910)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B24D830)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelinePlayable_TypeDefinitionIndex = 35933;

	class TimelinePlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_muteAudioScrubbing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x13B50);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips; // 0x10
		::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>* m_PlayableCache; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips; // 0x30
		::System::Int32 m_ActiveBit; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*> Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Compile(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CompileTrackList(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Timeline::TrackAsset* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::Playables::Playable a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::Animations::AnimationPlayableOutput a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET))(this, a1, a2);
		}

		::System::Void EvaluateAnimationPreviewUpdateCallback(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::Animations::AnimationPlayableOutput a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEANIMATIONPREVIEWUPDATECALLBACK_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Timeline::TrackAsset* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* a4, ::UnityEngine::Playables::Playable a5)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATEPLAYABLEGRAPH_OFFSET))(a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Timeline::TrackAsset* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void Evaluate(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET))(this, a1, a2);
		}

		::System::Void CacheTrack(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::Playables::Playable a2, ::System::Int32 a3, ::UnityEngine::Playables::Playable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable, ::System::Int32, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ForAOTCompilationOnly()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_FORAOTCOMPILATIONONLY_OFFSET))();
		}
	};
}
