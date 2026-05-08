#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine::Timeline { class EventTriggerMarkerInfo; }
namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_DRAWASEPARATIONLINE_OFFSET UNITYSDK_OFFSET(0x1B7ADD70)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B7ADE40)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1B7ADE60)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__FRAME_OFFSET UNITYSDK_OFFSET(0x1B7ADDE0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__JUSTDRAWASEPARATIONLINE_OFFSET UNITYSDK_OFFSET(0x1B7ADD50)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__TIME_OFFSET UNITYSDK_OFFSET(0x1B7ADD80)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1B7ADE50)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B7ADE70)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__FRAME_OFFSET UNITYSDK_OFFSET(0x1B7ADDF0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__JUSTDRAWASEPARATIONLINE_OFFSET UNITYSDK_OFFSET(0x1B7ADD60)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__TIME_OFFSET UNITYSDK_OFFSET(0x1B7ADD90)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ADE90)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarker_TypeDefinitionIndex = 30762;

	class EventTriggerMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean __justDrawASeparationLine_k__BackingField; // 0x28
		::UnityEngine::Timeline::EventTriggerMarkerInfo* eventTriggerMarkerInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER__CTOR_OFFSET))(this);
		}

		::System::Boolean get__justDrawASeparationLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__JUSTDRAWASEPARATIONLINE_OFFSET))(this);
		}

		::System::Void set__justDrawASeparationLine(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__JUSTDRAWASEPARATIONLINE_OFFSET))(this, value);
		}

		::System::Boolean DrawASeparationLine(::System::Boolean value, ::UnityEngine::GUIContent* label, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>* callNextDrawer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::GUIContent*, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_DRAWASEPARATIONLINE_OFFSET))(this, value, label, callNextDrawer);
		}

		::System::Double get__time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__TIME_OFFSET))(this);
		}

		::System::Void set__time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__TIME_OFFSET))(this, value);
		}

		::System::Double get__frame()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET__FRAME_OFFSET))(this);
		}

		::System::Void set__frame(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_SET__FRAME_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GETDATA_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void OnInitialize(::UnityEngine::Timeline::TrackAsset* aPent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKER_ONINITIALIZE_OFFSET))(this, aPent);
		}
	};
}
