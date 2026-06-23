#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

#define UNITYENGINE_TIMELINE_SIGNALTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CDAB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalTrack_TypeDefinitionIndex = 32375;

	class SignalTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALTRACK__CTOR_OFFSET))(this);
		}
	};
}
