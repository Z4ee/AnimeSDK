#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CD640)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__HANDLESPLITANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1E6CD650)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__HANDLESPLITANIM_B__1_OFFSET UNITYSDK_OFFSET(0x1E6CD6F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior___c__DisplayClass24_0_TypeDefinitionIndex = 32347;

	class ImgSplitScreenGroupBehavior___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* tempNode; // 0x10
		::System::Double time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleSplitAnim_b__0(::UnityEngine::Timeline::TimelineClip* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__HANDLESPLITANIM_B__0_OFFSET))(this, x);
		}

		::System::Void _HandleSplitAnim_b__1(::UnityEngine::Timeline::TimelineClip* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__DISPLAYCLASS24_0__HANDLESPLITANIM_B__1_OFFSET))(this, c);
		}
	};
}
