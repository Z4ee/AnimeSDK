#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class ComicShakeEvent; }
namespace UnityEngine::Timeline { class KeyEventBase; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO_INITTIMELINEASSETCTX_OFFSET UNITYSDK_OFFSET(0x1C4483D0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO_ONCAMERASHAKEEVENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C4483B0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4483E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerZoneInfo_TypeDefinitionIndex = 30770;

	class EventTriggerZoneInfo : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::TimelineAsset* tlAsset; // 0x10
		::System::Boolean isStart; // 0x18
		::UnityEngine::Timeline::KeyEventBase* keyEvent; // 0x20
		::UnityEngine::Timeline::ComicEventBase* zoneEventBase; // 0x28
		::UnityEngine::Timeline::ComicShakeEvent* cameraShakeEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO__CTOR_OFFSET))(this);
		}

		::System::Void OnCameraShakeEventChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO_ONCAMERASHAKEEVENTCHANGED_OFFSET))(this);
		}

		::System::Void InitTimelineAssetCtx(::UnityEngine::Timeline::TimelineAsset* tlAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERZONEINFO_INITTIMELINEASSETCTX_OFFSET))(this, tlAsset);
		}
	};
}
