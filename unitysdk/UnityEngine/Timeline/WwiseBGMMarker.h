#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class WwiseBGMInfo; }

#define UNITYENGINE_TIMELINE_WWISEBGMMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E867600)
#define UNITYENGINE_TIMELINE_WWISEBGMMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E867610)
#define UNITYENGINE_TIMELINE_WWISEBGMMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1E8675F0)
#define UNITYENGINE_TIMELINE_WWISEBGMMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E867620)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseBGMMarker_TypeDefinitionIndex = 32447;

	class WwiseBGMMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::Timeline::WwiseBGMInfo* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEBGMMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEBGMMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEBGMMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEBGMMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
