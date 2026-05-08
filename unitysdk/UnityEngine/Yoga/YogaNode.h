#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace System { class WeakReference; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Yoga { class BaselineFunction; }
namespace UnityEngine::Yoga { class MeasureFunction; }
namespace UnityEngine::Yoga { class YogaConfig; }

#define UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x197C7A80)
#define UNITYENGINE_YOGA_YOGANODE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x197C7DF0)
#define UNITYENGINE_YOGA_YOGANODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197C7E70)
#define UNITYENGINE_YOGA_YOGANODE_GET_ISBASELINEDEFINED_OFFSET UNITYSDK_OFFSET(0x197C7E60)
#define UNITYENGINE_YOGA_YOGANODE_GET_ISMEASUREDEFINED_OFFSET UNITYSDK_OFFSET(0x197C5110)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0x197C2360)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0x197C5A00)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGLEFT_OFFSET UNITYSDK_OFFSET(0x197C59B0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0x197C59E0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGTOP_OFFSET UNITYSDK_OFFSET(0x197C59C0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0x197C2350)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET UNITYSDK_OFFSET(0x197C2330)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET UNITYSDK_OFFSET(0x197C2340)
#define UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET UNITYSDK_OFFSET(0x197C7930)
#define UNITYENGINE_YOGA_YOGANODE_SETMEASUREFUNCTION_OFFSET UNITYSDK_OFFSET(0x197C5200)
#define UNITYENGINE_YOGA_YOGANODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197C8060)
#define UNITYENGINE_YOGA_YOGANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x197C44F0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaNode_TypeDefinitionIndex = 24933;

	class YogaNode : public ::System::Object
	{
	public:
		::System::IntPtr _ygNode; // 0x10
		::UnityEngine::Yoga::YogaConfig* _config; // 0x18
		::System::WeakReference* _parent; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* _children; // 0x28
		::UnityEngine::Yoga::MeasureFunction* _measureFunction; // 0x30
		::UnityEngine::Yoga::BaselineFunction* _baselineFunction; // 0x38
		::System::Object* _data; // 0x40

		::System::Void _ctor(::UnityEngine::Yoga::YogaConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Yoga::YogaConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE__CTOR_OFFSET))(this, config);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_IsMeasureDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_ISMEASUREDEFINED_OFFSET))(this);
		}

		::System::Boolean get_IsBaselineDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_ISBASELINEDEFINED_OFFSET))(this);
		}

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

		::System::Void SetMeasureFunction(::UnityEngine::Yoga::MeasureFunction* measureFunction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Yoga::MeasureFunction*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SETMEASUREFUNCTION_OFFSET))(this, measureFunction);
		}

		static ::UnityEngine::Yoga::YogaSize MeasureInternal(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET))(node, width, widthMode, height, heightMode);
		}

		static ::System::Single BaselineInternal(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height)
		{
			return ((::System::Single(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET))(node, width, height);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Yoga::YogaNode*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Yoga::YogaNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Single get_LayoutPaddingLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGLEFT_OFFSET))(this);
		}

		::System::Single get_LayoutPaddingTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGTOP_OFFSET))(this);
		}

		::System::Single get_LayoutPaddingRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGRIGHT_OFFSET))(this);
		}

		::System::Single get_LayoutPaddingBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGBOTTOM_OFFSET))(this);
		}
	};
}
