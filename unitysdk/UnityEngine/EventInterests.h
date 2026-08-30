#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EventType.h"

#define UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET UNITYSDK_OFFSET(0x14E870)
#define UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define UNITYENGINE_EVENTINTERESTS_WANTSEVENT_OFFSET UNITYSDK_OFFSET(0x3BC8060)

namespace UnityEngine
{
	inline static constexpr unsigned int EventInterests_TypeDefinitionIndex = 5157;

	struct alignas(1) EventInterests
	{
		::System::Boolean _wantsMouseMove_k__BackingField; // 0x10
		::System::Boolean _wantsMouseEnterLeaveWindow_k__BackingField; // 0x11

		::System::Boolean get_wantsMouseMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEMOVE_OFFSET))(this);
		}

		::System::Boolean get_wantsMouseEnterLeaveWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET))(this);
		}

		::System::Boolean WantsEvent(::UnityEngine::EventType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventType))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_WANTSEVENT_OFFSET))(this, a1);
		}
	};
}
