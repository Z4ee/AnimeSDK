#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class EventTriggerMarker; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupBehavior; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CD3E0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS23_0__PROCESSFRAME_B__2_OFFSET UNITYSDK_OFFSET(0x1E6CD3F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior___c__DisplayClass23_0_TypeDefinitionIndex = 32345;

	class ImgSplitScreenGroupBehavior___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::ImgSplitScreenGroupBehavior* __4__this; // 0x10
		::System::Double time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessFrame_b__2(::UnityEngine::Timeline::EventTriggerMarker* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::EventTriggerMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS23_0__PROCESSFRAME_B__2_OFFSET))(this, e);
		}
	};
}
