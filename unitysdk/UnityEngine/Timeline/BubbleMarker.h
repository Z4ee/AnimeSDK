#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class BubbleInfo; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define UNITYENGINE_TIMELINE_BUBBLEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E5652F0)
#define UNITYENGINE_TIMELINE_BUBBLEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E565310)
#define UNITYENGINE_TIMELINE_BUBBLEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1E565300)
#define UNITYENGINE_TIMELINE_BUBBLEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E565320)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubbleMarker_TypeDefinitionIndex = 32302;

	class BubbleMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::Timeline::BubbleInfo* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEMARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEMARKER_GETDATA_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
