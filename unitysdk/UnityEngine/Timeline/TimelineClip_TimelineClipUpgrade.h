#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TIMELINECLIP_TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1BF754E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_TimelineClipUpgrade_TypeDefinitionIndex = 37489;

	class TimelineClip_TimelineClipUpgrade : public ::System::Object
	{
	public:
		static ::System::Void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET))(a1);
		}
	};
}
