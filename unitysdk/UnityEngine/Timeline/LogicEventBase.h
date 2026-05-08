#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ComicEventBase.h"

#define UNITYENGINE_TIMELINE_LOGICEVENTBASE_TAGSSHOWIF_OFFSET UNITYSDK_OFFSET(0x1C289D10)
#define UNITYENGINE_TIMELINE_LOGICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2890D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int LogicEventBase_TypeDefinitionIndex = 30785;

	class LogicEventBase : public ::UnityEngine::Timeline::ComicEventBase
	{
	public:
		::System::Double delayTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_LOGICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean TagsShowIf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_LOGICEVENTBASE_TAGSSHOWIF_OFFSET))(this);
		}
	};
}
