#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1960)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS12_0__TRAVERSEEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1DFB1970)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c__DisplayClass12_0_TypeDefinitionIndex = 32316;

	class EventTriggerMarkerInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Timeline::ComicEventBase*>* cb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _TraverseEvents_b__0(::UnityEngine::Timeline::ComicEventBase* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS12_0__TRAVERSEEVENTS_B__0_OFFSET))(this, x);
		}
	};
}
