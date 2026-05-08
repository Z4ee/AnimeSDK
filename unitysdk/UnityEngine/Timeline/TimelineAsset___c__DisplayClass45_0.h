#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C532DA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS45_0__GETOUTPUTTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C532DB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset___c__DisplayClass45_0_TypeDefinitionIndex = 30723;

	class TimelineAsset___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::String* trackName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOutputTrack_b__0(::UnityEngine::Timeline::TrackAsset* track)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS45_0__GETOUTPUTTRACK_B__0_OFFSET))(this, track);
		}
	};
}
