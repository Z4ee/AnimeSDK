#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x22DF6D0)
#define UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x22DF8C0)
#define UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x22DF760)
#define UNITYENGINE_TIMELINE_MARKERLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x22DF7B0)
#define UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x22DF880)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET UNITYSDK_OFFSET(0x22DF640)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x22DF810)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22DF840)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET UNITYSDK_OFFSET(0x22DF640)
#define UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x22DF890)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x22DF750)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x22DF740)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x22DF8B0)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_TIMELINE_MARKERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x22DF660)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerList_TypeDefinitionIndex = 35591;

	struct alignas(8) MarkerList
	{
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Objects; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* m_Cache; // 0x18
		::System::Boolean m_CacheDirty; // 0x20
		::System::Boolean m_HasNotifications; // 0x21

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST__CTOR_OFFSET))(this, capacity);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* get_markers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::ScriptableObject* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET))(this, item);
		}

		::System::Boolean Remove(::UnityEngine::Timeline::IMarker* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET))(this, item);
		}

		::System::Boolean Remove_1(::UnityEngine::ScriptableObject* item, ::UnityEngine::Timeline::TimelineAsset* timelineAsset, ::UnityEngine::Playables::PlayableAsset* thingToDirty)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_1_OFFSET))(this, item, timelineAsset, thingToDirty);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::ScriptableObject* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CONTAINS_OFFSET))(this, item);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::Timeline::IMarker* get_Item(::System::Int32 idx)
		{
			return ((::UnityEngine::Timeline::IMarker*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET))(this, idx);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* GetRawMarkerList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET))(this);
		}

		::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* type, ::System::Double time, ::UnityEngine::Timeline::TrackAsset* owner)
		{
			return ((::UnityEngine::Timeline::IMarker*(*)(::PVOID, ::System::Type*, ::System::Double, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET))(this, type, time, owner);
		}

		::System::Boolean HasNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void BuildCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET))(this);
		}
	};
}
