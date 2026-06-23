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
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class ITimelineEvaluateCallback; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET UNITYSDK_OFFSET(0x1DE67FA0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET UNITYSDK_OFFSET(0x1DE66270)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1DE65F60)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1DE67F30)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DE67060)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DE666E0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DE65C00)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEANIMATIONPREVIEWUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DE67EB0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DE67C50)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1DE68090)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_FORAOTCOMPILATIONONLY_OFFSET UNITYSDK_OFFSET(0x1DE68850)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_GET_JUSTCOMPILECHANGEDASSET_OFFSET UNITYSDK_OFFSET(0x1DE666D0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1DE68040)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE68A30)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE688D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelinePlayable_TypeDefinitionIndex = 32426;

	class TimelinePlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::UnityEngine::Object** StaticGet_CompileObject()
		{
			return (::UnityEngine::Object**)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x267F0);
		}
		static ::System::Boolean* StaticGet_justThisTrack()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x7E90);
		}
		static ::System::Boolean* StaticGet_muteAudioScrubbing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x7E91);
		}
		static ::System::Int32* StaticGet_ControlPlayableIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x7E94);
		}
		static ::System::Int32* StaticGet_CompileTrackInstanceId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimelinePlayable_TypeDefinitionIndex)->GetStaticField(0x7E98);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>* m_PlayableCache; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks; // 0x18
		::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips; // 0x28
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

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, ::System::Boolean autoRebalance, ::System::Boolean createOutputs)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET))(graph, tracks, go, autoRebalance, createOutputs);
		}

		::System::Void Compile(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, ::System::Boolean autoRebalance, ::System::Boolean createOutputs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET))(this, graph, timelinePlayable, tracks, go, autoRebalance, createOutputs);
		}

		static ::System::Boolean get_JustCompileChangedAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_GET_JUSTCOMPILECHANGEDASSET_OFFSET))();
		}

		::System::Void CompileTrackList(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, ::System::Boolean createOutputs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET))(this, graph, timelinePlayable, tracks, go, createOutputs);
		}

		::System::Void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable playable, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET))(this, graph, track, go, playable, port);
		}

		::System::Void EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET))(this, track, animOutput);
		}

		::System::Void EvaluateAnimationPreviewUpdateCallback(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEANIMATIONPREVIEWUPDATECALLBACK_OFFSET))(this, track, animOutput);
		}

		static ::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::Playables::Playable timelinePlayable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATEPLAYABLEGRAPH_OFFSET))(graph, asset, go, tree, timelinePlayable);
		}

		::UnityEngine::Playables::Playable CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::System::Boolean createOutputs)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET))(this, graph, timelinePlayable, track, go, createOutputs);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void Evaluate(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET))(this, playable, frameData);
		}

		::System::Void CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable, ::System::Int32 port, ::UnityEngine::Playables::Playable parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable, ::System::Int32, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET))(this, track, playable, port, parent);
		}

		static ::System::Void ForAOTCompilationOnly()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_FORAOTCOMPILATIONONLY_OFFSET))();
		}
	};
}
