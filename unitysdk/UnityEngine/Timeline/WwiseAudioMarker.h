#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class WwiseAudioInfo; }

#define UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DD5D850)
#define UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1DD5D860)
#define UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1DD5D840)
#define UNITYENGINE_TIMELINE_WWISEAUDIOMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5D870)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseAudioMarker_TypeDefinitionIndex = 32444;

	class WwiseAudioMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::Timeline::WwiseAudioInfo* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
