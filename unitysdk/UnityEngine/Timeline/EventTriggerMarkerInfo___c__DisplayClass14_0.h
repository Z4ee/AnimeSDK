#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C172670)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS14_0__TRAVERSEKEYS_B__0_OFFSET UNITYSDK_OFFSET(0x1C172680)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c__DisplayClass14_0_TypeDefinitionIndex = 30766;

	class EventTriggerMarkerInfo___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* cb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _TraverseKeys_b__0(::UnityEngine::Timeline::ComicEventBase* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS14_0__TRAVERSEKEYS_B__0_OFFSET))(this, x);
		}
	};
}
