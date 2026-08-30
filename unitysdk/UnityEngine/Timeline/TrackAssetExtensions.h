#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_GETGROUP_OFFSET UNITYSDK_OFFSET(0x1ECD61D0)
#define UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_SETGROUP_OFFSET UNITYSDK_OFFSET(0x1ECDFE20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAssetExtensions_TypeDefinitionIndex = 37540;

	class TrackAssetExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::GroupTrack* GetGroup(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::UnityEngine::Timeline::GroupTrack*(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_GETGROUP_OFFSET))(a1);
		}

		static ::System::Void SetGroup(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::Timeline::GroupTrack* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSETEXTENSIONS_SETGROUP_OFFSET))(a1, a2);
		}
	};
}
