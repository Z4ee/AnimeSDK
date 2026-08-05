#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

#define UNITYENGINE_TIMELINE_TIMETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AC9E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeTrack_TypeDefinitionIndex = 33060;

	class TimeTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMETRACK__CTOR_OFFSET))(this);
		}
	};
}
