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
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class MarkerTrack; }
namespace UnityEngine::Timeline { class TimelineAsset_EditorSettings; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A3F0240)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3F05E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET UNITYSDK_OFFSET(0x1A3F1B90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET UNITYSDK_OFFSET(0x1A3EEB20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F0D30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3F0850)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACKANDMOVEBEFORE_OFFSET UNITYSDK_OFFSET(0x1A3F0E20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x1A3F0E70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0x1A3F1E00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1A3F2100)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1A3F2990)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET UNITYSDK_OFFSET(0x1A3F2230)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A3E36A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET UNITYSDK_OFFSET(0x1A3F0120)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F00D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET UNITYSDK_OFFSET(0x1A3EF780)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F0090)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1A3EFFC0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_BINDINGDATA_OFFSET UNITYSDK_OFFSET(0x1A3F05C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A3EF220)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3EF1A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3EEB00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A3EEAF0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1A3EF060)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET UNITYSDK_OFFSET(0x1A3F0140)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F05A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1A3EF1C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3EF870)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3EFD00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A3F05B0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A3F0660)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x1A3F1380)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A3EFEF0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0x1A3F0670)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_BINDINGDATA_OFFSET UNITYSDK_OFFSET(0x1A3F05D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3EF1B0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1A3EF190)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F0C60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F0C50)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1A3EF8A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1A3EFD30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1A3EEAE0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F2B40)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x1A3F0C70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_TypeDefinitionIndex = 35551;

	class TimelineAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		// static const ::System::Int32 k_LatestVersion = 0x0; // 0x0
		::System::Int32 m_Version; // 0x18
		::UnityEngine::ScriptableObject* m_BindingData; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Tracks; // 0x28
		::System::Double m_FixedDuration; // 0x30
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* m_CacheOutputTracks; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheRootTracks; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheFlattenedTracks; // 0x48
		::UnityEngine::Timeline::TimelineAsset_EditorSettings* m_EditorSettings; // 0x50
		::UnityEngine::Timeline::TimelineAsset_DurationMode m_DurationMode; // 0x58
		::UnityEngine::Timeline::MarkerTrack* m_MarkerTrack; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET))(this);
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET))(this);
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

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetOutputTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET))(this);
		}

		::System::Void UpdateRootTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET))(this);
		}

		::System::Void UpdateOutputTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET))(this);
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

		::UnityEngine::ScriptableObject* get_bindingData()
		{
			return ((::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_BINDINGDATA_OFFSET))(this);
		}

		::System::Void set_bindingData(::UnityEngine::ScriptableObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_BINDINGDATA_OFFSET))(this, value);
		}

		::System::Void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET))(this, track);
		}

		::System::Void RemoveTrack(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET))(this, track);
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

		::System::Void CreateMarkerTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrackAndMoveBefore(::System::Type* type, ::UnityEngine::Timeline::TrackAsset* parent, ::System::String* name, ::UnityEngine::Timeline::TrackAsset* insertBefore)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACKANDMOVEBEFORE_OFFSET))(this, type, parent, name, insertBefore);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET))(this);
		}

		::System::Double CalculateDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET))(this);
		}

		static ::System::Void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* track, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*& allTracks)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET))(track, allTracks);
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
