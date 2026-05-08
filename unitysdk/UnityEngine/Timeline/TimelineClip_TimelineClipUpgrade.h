#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TIMELINECLIP_TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1C449880)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_TimelineClipUpgrade_TypeDefinitionIndex = 30713;

	class TimelineClip_TimelineClipUpgrade : public ::System::Object
	{
	public:
		static ::System::Void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET))(clip);
		}
	};
}
