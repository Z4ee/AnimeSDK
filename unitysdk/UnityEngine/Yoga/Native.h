#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"

namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET UNITYSDK_OFFSET(0x18AE6040)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x18AE61A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET UNITYSDK_OFFSET(0x18AE6170)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET UNITYSDK_OFFSET(0x18AE6180)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET UNITYSDK_OFFSET(0x18AE6190)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET UNITYSDK_OFFSET(0x18AE5ED0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 5832;

	class Native : public ::System::Object
	{
	public:
		static ::System::Void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET))(node, width, widthMode, height, heightMode, returnValueAddress);
		}

		static ::System::Void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET))(node, width, height, returnValueAddress);
		}

		static ::System::Single YGNodeLayoutGetLeft(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetTop(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetWidth(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetHeight(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET))(node);
		}
	};
}
