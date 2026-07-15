#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace UnityEngine::Yoga { class BaselineFunction; }
namespace UnityEngine::Yoga { class MeasureFunction; }

#define UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA4C120)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BA499F0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0x1BA499E0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET UNITYSDK_OFFSET(0x1BA499C0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET UNITYSDK_OFFSET(0x1BA499D0)
#define UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA4BFB0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaNode_TypeDefinitionIndex = 6127;

	class YogaNode : public ::System::Object
	{
	public:
		::System::IntPtr _ygNode; // 0x10
		::UnityEngine::Yoga::MeasureFunction* _measureFunction; // 0x18
		::UnityEngine::Yoga::BaselineFunction* _baselineFunction; // 0x20

		::System::Single get_LayoutX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET))(this);
		}

		::System::Single get_LayoutY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET))(this);
		}

		::System::Single get_LayoutWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET))(this);
		}

		::System::Single get_LayoutHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET))(this);
		}

		static ::UnityEngine::Yoga::YogaSize MeasureInternal(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::UnityEngine::Yoga::YogaMeasureMode a3, ::System::Single a4, ::UnityEngine::Yoga::YogaMeasureMode a5)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single BaselineInternal(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET))(a1, a2, a3);
		}
	};
}
