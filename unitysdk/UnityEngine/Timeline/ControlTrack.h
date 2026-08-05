#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define UNITYENGINE_TIMELINE_CONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB870)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlTrack_TypeDefinitionIndex = 32988;

	class ControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLTRACK__CTOR_OFFSET))(this);
		}
	};
}
