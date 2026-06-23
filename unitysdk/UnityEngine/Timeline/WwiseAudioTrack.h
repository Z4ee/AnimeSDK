#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

#define UNITYENGINE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2E40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseAudioTrack_TypeDefinitionIndex = 32446;

	class WwiseAudioTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET))(this);
		}
	};
}
