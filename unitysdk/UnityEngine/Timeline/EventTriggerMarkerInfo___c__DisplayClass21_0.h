#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class EventTriggerMarker; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9040)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS21_0__SETREF_B__0_OFFSET UNITYSDK_OFFSET(0x1E5A9050)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c__DisplayClass21_0_TypeDefinitionIndex = 32319;

	class EventTriggerMarkerInfo___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::EventTriggerMarker* m; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetRef_b__0(::UnityEngine::Timeline::ComicEventBase* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS21_0__SETREF_B__0_OFFSET))(this, e);
		}
	};
}
