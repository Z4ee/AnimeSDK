#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaEdge.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"

namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D015A00)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET UNITYSDK_OFFSET(0x1D0159F0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D0159D0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET UNITYSDK_OFFSET(0x1D0159E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET UNITYSDK_OFFSET(0x1D015BA0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0159B0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET UNITYSDK_OFFSET(0x1D0159A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D015D00)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET UNITYSDK_OFFSET(0x1D015CD0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET UNITYSDK_OFFSET(0x1D015D10)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET UNITYSDK_OFFSET(0x1D015CE0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET UNITYSDK_OFFSET(0x1D015CF0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET UNITYSDK_OFFSET(0x1D015A30)
#define UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x1D015990)
#define UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0x1D015A20)
#define UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0x1D015A10)
#define UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D0159C0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 28037;

	class Native : public ::System::Object
	{
	public:
		static ::System::IntPtr YGNodeNewWithConfig(::System::IntPtr config)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET))(config);
		}

		static ::System::Void YGNodeFree(::System::IntPtr ygNode)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET))(ygNode);
		}

		static ::System::Void YGNodeFreeInternal(::System::IntPtr ygNode)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET))(ygNode);
		}

		static ::System::Void YGSetManagedObject(::System::IntPtr ygNode, ::UnityEngine::Yoga::YogaNode* node)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Yoga::YogaNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET))(ygNode, node);
		}

		static ::System::IntPtr YGConfigGetDefault()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET))();
		}

		static ::System::IntPtr YGConfigNew()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET))();
		}

		static ::System::Void YGConfigFree(::System::IntPtr config)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET))(config);
		}

		static ::System::Void YGConfigFreeInternal(::System::IntPtr config)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET))(config);
		}

		static ::System::Void YGNodeSetMeasureFunc(::System::IntPtr node)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET))(node);
		}

		static ::System::Void YGNodeRemoveMeasureFunc(::System::IntPtr node)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET))(node);
		}

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

		static ::System::Single YGNodeLayoutGetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge)
		{
			return ((::System::Single(*)(::System::IntPtr, ::UnityEngine::Yoga::YogaEdge))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET))(node, edge);
		}
	};
}
