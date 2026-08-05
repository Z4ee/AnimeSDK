#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class ProtectTimeInfo; }

#define UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F1A2200)
#define UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1F1A2210)
#define UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1F1A21F0)
#define UNITYENGINE_TIMELINE_PROTECTTIMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A2220)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ProtectTimeMarker_TypeDefinitionIndex = 33058;

	class ProtectTimeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::Timeline::ProtectTimeInfo* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROTECTTIMEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROTECTTIMEMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
