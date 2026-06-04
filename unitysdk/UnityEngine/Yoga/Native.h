#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"

namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET UNITYSDK_OFFSET(0x1B36D130)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B36D2B0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET UNITYSDK_OFFSET(0x1B36D280)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET UNITYSDK_OFFSET(0x1B36D290)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET UNITYSDK_OFFSET(0x1B36D2A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET UNITYSDK_OFFSET(0x1B36CFA0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 6121;

	class Native : public ::System::Object
	{
	public:
		static ::System::Void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::UnityEngine::Yoga::YogaMeasureMode a3, ::System::Single a4, ::UnityEngine::Yoga::YogaMeasureMode a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::System::Single a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single YGNodeLayoutGetLeft(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET))(a1);
		}

		static ::System::Single YGNodeLayoutGetTop(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET))(a1);
		}

		static ::System::Single YGNodeLayoutGetWidth(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET))(a1);
		}

		static ::System::Single YGNodeLayoutGetHeight(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET))(a1);
		}
	};
}
