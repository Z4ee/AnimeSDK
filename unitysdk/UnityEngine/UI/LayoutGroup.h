#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E4DD720)
#define UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4DFC40)
#define UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET UNITYSDK_OFFSET(0x1E4DE790)
#define UNITYENGINE_UI_LAYOUTGROUP_GETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1E4DF5E0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1E4DE100)
#define UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1E4DE540)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DDEF0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET UNITYSDK_OFFSET(0x1E4DDCD0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1E4DDDE0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E4DD4C0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4DE080)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4DDE90)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1E4DF940)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E4DE0F0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4DDFA0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4DDC70)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1E4DD2E0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_LEFT_OFFSET UNITYSDK_OFFSET(0x1E4DD380)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1E4DCFF0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_RIGHT_OFFSET UNITYSDK_OFFSET(0x1E4DD420)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_TOP_OFFSET UNITYSDK_OFFSET(0x1E4DD0B0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4DE010)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4DDD80)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E4DD710)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E4DD550)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4DE4F0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E4DE300)
#define UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E4DE290)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4DE3C0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4DE480)
#define UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E4DFB60)
#define UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4DFBF0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET UNITYSDK_OFFSET(0x1E4DF080)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1E4DEAB0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_1_OFFSET UNITYSDK_OFFSET(0x1E4DEEB0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1E4DE920)
#define UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4DD150)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET UNITYSDK_OFFSET(0x1E4DE820)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E4DD4D0)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1E4DD300)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_LEFT_OFFSET UNITYSDK_OFFSET(0x1E4DD3A0)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1E4DD000)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_RIGHT_OFFSET UNITYSDK_OFFSET(0x1E4DD440)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_TOP_OFFSET UNITYSDK_OFFSET(0x1E4DD0D0)
#define UNITYENGINE_UI_LAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DE150)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4DFCC0)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E4DFD50)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E4DFDE0)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4DFE70)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4DFF00)
#define UNITYENGINE_UI_LAYOUTGROUP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E4DFF90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutGroup_TypeDefinitionIndex = 18913;

	class LayoutGroup : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectOffset* m_Padding; // 0x18
		::UnityEngine::TextAnchor m_ChildAlignment; // 0x20
		::UnityEngine::RectTransform* m_Rect; // 0x28
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x30
		::UnityEngine::Vector2 m_TotalMinSize; // 0x34
		::UnityEngine::Vector2 m_TotalPreferredSize; // 0x3C
		::UnityEngine::Vector2 m_TotalFlexibleSize; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* m_RectChildren; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET))(this, value);
		}

		::System::Int32 get_padding_top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_TOP_OFFSET))(this);
		}

		::System::Void set_padding_top(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_TOP_OFFSET))(this, value);
		}

		::System::Int32 get_padding_bottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_BOTTOM_OFFSET))(this);
		}

		::System::Void set_padding_bottom(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_BOTTOM_OFFSET))(this, value);
		}

		::System::Int32 get_padding_left()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_LEFT_OFFSET))(this);
		}

		::System::Void set_padding_left(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_LEFT_OFFSET))(this, value);
		}

		::System::Int32 get_padding_right()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_RIGHT_OFFSET))(this);
		}

		::System::Void set_padding_right(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_RIGHT_OFFSET))(this, value);
		}

		::UnityEngine::TextAnchor get_childAlignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET))(this);
		}

		::System::Void set_childAlignment(::UnityEngine::TextAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* get_rectChildren()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETCOLROW_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Single GetTotalMinSize(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET))(this, axis);
		}

		::System::Single GetTotalPreferredSize(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET))(this, axis);
		}

		::System::Single GetTotalFlexibleSize(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET))(this, axis);
		}

		::System::Single GetStartOffset(::System::Int32 axis, ::System::Single requiredSpaceWithoutPadding)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET))(this, axis, requiredSpaceWithoutPadding);
		}

		::System::Single GetAlignmentOnAxis(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET))(this, axis);
		}

		::System::Void SetLayoutInputForAxis(::System::Single totalMin, ::System::Single totalPreferred, ::System::Single totalFlexible, ::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET))(this, totalMin, totalPreferred, totalFlexible, axis);
		}

		::System::Void SetChildAlongAxis(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Single pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET))(this, rect, axis, pos);
		}

		::System::Void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Single pos, ::System::Single scaleFactor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET))(this, rect, axis, pos, scaleFactor);
		}

		::System::Void SetChildAlongAxis_1(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Single pos, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_1_OFFSET))(this, rect, axis, pos, size);
		}

		::System::Void SetChildAlongAxisWithScale_1(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Nullable_1<::System::Single> pos, ::System::Nullable_1<::System::Single> size, ::System::Single scaleFactor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET))(this, rect, axis, pos, size, scaleFactor);
		}

		::System::Single GetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Single scaleFactor)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETCHILDALONGAXISWITHSCALE_OFFSET))(this, rect, axis, scaleFactor);
		}

		::System::Boolean get_isRootLayoutGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET))(this, rectTransform);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
