#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1ECC42D0)
#define UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1ECC42F0)
#define UNITYENGINE_TIMELINE_MARKER_ONDRAGGING_OFFSET UNITYSDK_OFFSET(0x1ECC4490)
#define UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ECC4470)
#define UNITYENGINE_TIMELINE_MARKER_ONSTOPDRAG_OFFSET UNITYSDK_OFFSET(0x1ECC4480)
#define UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1ECC42E0)
#define UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1ECC4300)
#define UNITYENGINE_TIMELINE_MARKER_UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ECC4350)
#define UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC44A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Marker_TypeDefinitionIndex = 37531;

	class Marker : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Double m_Time; // 0x18
		::UnityEngine::Timeline::TrackAsset* _parent_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_parent()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET))(this, a1);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET))(this, a1);
		}

		::System::Void UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnInitialize(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnStopDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONSTOPDRAG_OFFSET))(this);
		}

		::System::Void OnDragging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONDRAGGING_OFFSET))(this);
		}
	};
}
