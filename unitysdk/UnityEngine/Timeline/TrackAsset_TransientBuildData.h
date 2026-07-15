#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TRACKASSET_TRANSIENTBUILDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x39EDB20)
#define UNITYENGINE_TIMELINE_TRACKASSET_TRANSIENTBUILDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3D2BA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_TransientBuildData_TypeDefinitionIndex = 36643;

	struct alignas(8) TrackAsset_TransientBuildData
	{
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* trackList; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* clipList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markerList; // 0x20

		static ::UnityEngine::Timeline::TrackAsset_TransientBuildData Create()
		{
			return ((::UnityEngine::Timeline::TrackAsset_TransientBuildData(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_TRANSIENTBUILDDATA_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_TRANSIENTBUILDDATA_CLEAR_OFFSET))(this);
		}
	};
}
