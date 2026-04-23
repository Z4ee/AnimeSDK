#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace UnityEngine::Yoga { class BaselineFunction; }
namespace UnityEngine::Yoga { class MeasureFunction; }

#define UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5215C0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A51E3E0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0x1A51E3D0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET UNITYSDK_OFFSET(0x1A51E3B0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET UNITYSDK_OFFSET(0x1A51E3C0)
#define UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A521470)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaNode_TypeDefinitionIndex = 5845;

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

		static ::UnityEngine::Yoga::YogaSize MeasureInternal(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET))(node, width, widthMode, height, heightMode);
		}

		static ::System::Single BaselineInternal(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height)
		{
			return ((::System::Single(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET))(node, width, height);
		}
	};
}
