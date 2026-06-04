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

#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1B244FB0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B245350)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET UNITYSDK_OFFSET(0x1B246900)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET UNITYSDK_OFFSET(0x1B243830)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1B245A20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B245610)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACKANDMOVEBEFORE_OFFSET UNITYSDK_OFFSET(0x1B245B10)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x1B245B60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0x1B246BD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1B246ED0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1B247640)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET UNITYSDK_OFFSET(0x1B247000)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B237D90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET UNITYSDK_OFFSET(0x1B244E60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET UNITYSDK_OFFSET(0x1B244E20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET UNITYSDK_OFFSET(0x1B244400)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET UNITYSDK_OFFSET(0x1B244DD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B244D00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_BINDINGDATA_OFFSET UNITYSDK_OFFSET(0x1B245330)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B243F30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B243EB0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B243810)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B243800)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1B243D70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET UNITYSDK_OFFSET(0x1B244E80)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET UNITYSDK_OFFSET(0x1B245310)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B243ED0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B244510)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2449A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B245320)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B245410)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x1B2460A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B244C50)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0x1B245420)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_BINDINGDATA_OFFSET UNITYSDK_OFFSET(0x1B245340)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B243EC0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x1B243EA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B245940)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B245930)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1B244540)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1B2449D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1B2437F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B247880)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x1B245950)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_TypeDefinitionIndex = 35851;

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

		::System::Void set_fixedDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineAsset_DurationMode get_durationMode()
		{
			return ((::UnityEngine::Timeline::TimelineAsset_DurationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET))(this);
		}

		::System::Void set_durationMode(::UnityEngine::Timeline::TimelineAsset_DurationMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset_DurationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET))(this, a1);
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

		static ::System::Single GetValidFramerate(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET))(a1);
		}

		::UnityEngine::Timeline::TrackAsset* GetRootTrack(::System::Int32 a1)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetRootTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetOutputTrack(::System::Int32 a1)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET))(this, a1);
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

		::System::Void set_bindingData(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_BINDINGDATA_OFFSET))(this, a1);
		}

		::System::Void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET))(this, a1);
		}

		::System::Void RemoveTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
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

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void CreateMarkerTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrackAndMoveBefore(::System::Type* a1, ::UnityEngine::Timeline::TrackAsset* a2, ::System::String* a3, ::UnityEngine::Timeline::TrackAsset* a4)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACKANDMOVEBEFORE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET))(this);
		}

		::System::Double CalculateDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEDURATION_OFFSET))(this);
		}

		static ::System::Void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* a1, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET))(a1, a2);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrack(::System::Type* a1, ::UnityEngine::Timeline::TrackAsset* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DeleteClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET))(this, a1);
		}

		::System::Boolean DeleteTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET))(this, a1);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TrackAsset* AllocateTrack(::UnityEngine::Timeline::TrackAsset* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET))(this, a1);
		}

		::System::Void DeleteRecordedAnimation_1(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET))(this, a1);
		}
	};
}
