#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/TimelineAsset_DurationMode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class ITimelineClipAsset; }
namespace UnityEngine::Timeline { class MarkerTrack; }
namespace UnityEngine::Timeline { class TimelineAsset_EditorSettings; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1BA8BA00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA8BEC0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADJUSTCHILDTRACK_OFFSET UNITYSDK_OFFSET(0x1BA900D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADJUSTTRACK_OFFSET UNITYSDK_OFFSET(0x1BA8FF00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET UNITYSDK_OFFSET(0x1BA8EF80)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET UNITYSDK_OFFSET(0x1BA89130)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CHECKCLIPISMPBSUBANICLIP_OFFSET UNITYSDK_OFFSET(0x1BA8E190)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA8C3C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1BA8E6C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA8CD20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x1BA8E8A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0x1BA8F390)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1BA8F7E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1BA8FB70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET UNITYSDK_OFFSET(0x1BA8C6F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_FINDPARENTGROUPTRACK_OFFSET UNITYSDK_OFFSET(0x1BA90240)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIESFORMPB_OFFSET UNITYSDK_OFFSET(0x1BA8DB90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1BA8D490)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1BA8D810)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BA8D160)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETALLOUTPUTTRACKBYGUID_OFFSET UNITYSDK_OFFSET(0x1BA8B950)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETALLTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA8C6E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1BA8AAE0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKDIC_OFFSET UNITYSDK_OFFSET(0x1BA8B1F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA8AC60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_1_OFFSET UNITYSDK_OFFSET(0x1BA8ABA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET UNITYSDK_OFFSET(0x1BA8AB50)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA89EA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET UNITYSDK_OFFSET(0x1BA8AAF0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1BA8AA40)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BA899E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1BA89960)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BA89110)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BA89100)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1BA89750)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA8B000)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ISDFS_OFFSET UNITYSDK_OFFSET(0x1BA890E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1BA8BEA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1BA89980)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA89FB0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA8A520)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BA8BEB0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BA8BF40)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x1BA90750)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BA8A900)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0x1BA8C200)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SAVEEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1BA8AAD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1BA89970)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1BA89950)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SORTCHILDTRACK_OFFSET UNITYSDK_OFFSET(0x1BA904C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SORTOUTPUTTRACKGUIDS_OFFSET UNITYSDK_OFFSET(0x1BA8AC80)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SORTSUBTRACKBYNAME_OFFSET UNITYSDK_OFFSET(0x1BA8BF60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SORTTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA8C0E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA8CF30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA8CF20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1BA89FE0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKDICCACHE_OFFSET UNITYSDK_OFFSET(0x1BA8B210)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1BA8A550)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1BA890D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA90A90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x1BA8CF50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_TypeDefinitionIndex = 30716;

	class TimelineAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		// static const ::System::Int32 k_LatestVersion = 0x0; // 0x0
		::System::Int32 m_Version; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Tracks; // 0x20
		::System::Double m_FixedDuration; // 0x28
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* m_CacheOutputTracks; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheRootTracks; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheFlattenedTracks; // 0x40
		::UnityEngine::Timeline::TimelineAsset_EditorSettings* m_EditorSettings; // 0x48
		::UnityEngine::Timeline::TimelineAsset_DurationMode m_DurationMode; // 0x50
		::UnityEngine::Timeline::MarkerTrack* m_MarkerTrack; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::TrackAsset*>* m_CahceAllOutputTrackDic; // 0x60
		::System::String* ExtraData; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET))(this);
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsDFS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ISDFS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineAsset_EditorSettings* get_editorSettings()
		{
			return ((::UnityEngine::Timeline::TimelineAsset_EditorSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Double get_fixedDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET))(this);
		}

		::System::Void set_fixedDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineAsset_DurationMode get_durationMode()
		{
			return ((::UnityEngine::Timeline::TimelineAsset_DurationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET))(this);
		}

		::System::Void set_durationMode(::UnityEngine::Timeline::TimelineAsset_DurationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset_DurationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Int32 get_outputTrackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_rootTrackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET))(this);
		}

		static ::System::Single GetValidFramerate(::System::Single framerate)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET))(framerate);
		}

		::System::Void SaveExtraData(::System::String* extraData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SAVEEXTRADATA_OFFSET))(this, extraData);
		}

		::System::String* GetExtraData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETEXTRADATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetRootTrack(::System::Int32 index)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetRootTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetOutputTrack(::System::Int32 index)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET))(this, index);
		}

		::UnityEngine::Timeline::TrackAsset* GetOutputTrack_1(::System::String* trackName)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_1_OFFSET))(this, trackName);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetOutputTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET))(this);
		}

		::System::Void SortOutputTrackGuids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SORTOUTPUTTRACKGUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::TrackAsset*>* GetOutputTrackDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKDIC_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetAllOutputTrackByGuid(::System::String* guid)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETALLOUTPUTTRACKBYGUID_OFFSET))(this, guid);
		}

		::System::Void UpdateRootTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET))(this);
		}

		::System::Void UpdateOutputTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET))(this);
		}

		::System::Void UpdateOutputTrackDicCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKDICCACHE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* get_flattenedTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET))(this);
		}

		::UnityEngine::Timeline::MarkerTrack* get_markerTrack()
		{
			return ((::UnityEngine::Timeline::MarkerTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* get_trackObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET))(this);
		}

		::System::Void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET))(this, track);
		}

		::System::Void SortSubTrackByName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SORTSUBTRACKBYNAME_OFFSET))(this);
		}

		::System::Void SortTracks(::System::Func_3<::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*, ::System::Int32>* cmp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SORTTRACKS_OFFSET))(this, cmp);
		}

		::System::Void RemoveTrack(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET))(this, track);
		}

		::System::Void ClearTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CLEARTRACKS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __internalAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetAllTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETALLTRACKS_OFFSET))(this);
		}

		::System::Void GatherProperties_1(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver, ::UnityEngine::Timeline::ITimelineClipAsset* clipAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::UnityEngine::Timeline::ITimelineClipAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_1_OFFSET))(this, director, driver, clipAsset);
		}

		::System::Void GatherProperties_2(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver, ::UnityEngine::Timeline::TrackAsset* frameTrackAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_2_OFFSET))(this, director, driver, frameTrackAsset);
		}

		::System::Void GatherPropertiesForMpb(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver, ::UnityEngine::AnimationClip* animationClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIESFORMPB_OFFSET))(this, director, driver, animationClip);
		}

		::System::Boolean CheckClipIsMpbSubAniClip(::UnityEngine::AnimationClip* animationClip)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CHECKCLIPISMPBSUBANICLIP_OFFSET))(this, animationClip);
		}

		::System::Void CreateMarkerTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET))(this);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET))(this);
		}

		::System::Double CalculateDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET))(this);
		}

		static ::System::Void AddSubTracksRecursive(::System::Boolean IsDFS, ::UnityEngine::Timeline::TrackAsset* track, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*& allTracks)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET))(IsDFS, track, allTracks);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrack(::System::Type* type, ::UnityEngine::Timeline::TrackAsset* parent, ::System::String* name)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(this, type, parent, name);
		}

		::System::Boolean DeleteClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET))(this, clip);
		}

		::System::Boolean DeleteTrack(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET))(this, track);
		}

		::System::Boolean AdjustTrack(::UnityEngine::Timeline::TrackAsset* asset, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADJUSTTRACK_OFFSET))(this, asset, index);
		}

		::System::Boolean AdjustChildTrack(::UnityEngine::Timeline::TrackAsset* asset, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADJUSTCHILDTRACK_OFFSET))(this, asset, index);
		}

		::UnityEngine::Timeline::GroupTrack* FindParentGroupTrack(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::UnityEngine::Timeline::GroupTrack*(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_FINDPARENTGROUPTRACK_OFFSET))(this, asset);
		}

		::System::Void SortChildTrack(::UnityEngine::Timeline::GroupTrack* groupTrack, ::System::Comparison_1<::UnityEngine::Timeline::TrackAsset*>* cmp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::GroupTrack*, ::System::Comparison_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SORTCHILDTRACK_OFFSET))(this, groupTrack, cmp);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET))(this, asset);
		}

		::UnityEngine::Timeline::TrackAsset* AllocateTrack(::UnityEngine::Timeline::TrackAsset* trackAssetParent, ::System::String* trackName, ::System::Type* trackType)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET))(this, trackAssetParent, trackName, trackType);
		}

		::System::Void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET))(this, track);
		}

		::System::Void DeleteRecordedAnimation_1(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET))(this, clip);
		}
	};
}
