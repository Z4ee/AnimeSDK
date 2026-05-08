#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_GETGROUP_OFFSET UNITYSDK_OFFSET(0x1C4498C0)
#define UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_SETGROUP_OFFSET UNITYSDK_OFFSET(0x1C449A20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAssetExtensions_TypeDefinitionIndex = 30830;

	class TrackAssetExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::GroupTrack* GetGroup(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::UnityEngine::Timeline::GroupTrack*(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_GETGROUP_OFFSET))(asset);
		}

		static ::System::Void SetGroup(::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::Timeline::GroupTrack* group)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_SETGROUP_OFFSET))(asset, group);
		}
	};
}
