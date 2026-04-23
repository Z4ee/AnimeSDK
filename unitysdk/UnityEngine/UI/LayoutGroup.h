#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1A575D70)
#define UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1A577170)
#define UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET UNITYSDK_OFFSET(0x1A576A50)
#define UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A576860)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1A5761C0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET UNITYSDK_OFFSET(0x1A576100)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1A576160)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A575C30)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDRENCOUNT_OFFSET UNITYSDK_OFFSET(0x1A575D30)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A576230)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5761B0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1A576F00)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A576240)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A575D50)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1A575D60)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A576210)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5760F0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A575BA0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A576220)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A576150)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A575D20)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A575C90)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A576600)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A576850)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A5764B0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5762F0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A576550)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A576560)
#define UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A577130)
#define UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1A577160)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET UNITYSDK_OFFSET(0x1A576D20)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1A576B50)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_1_OFFSET UNITYSDK_OFFSET(0x1A576CF0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1A576B20)
#define UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1A576300)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET UNITYSDK_OFFSET(0x1A576AB0)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A575C40)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A575BB0)
#define UNITYENGINE_UI_LAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A576250)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutGroup_TypeDefinitionIndex = 5661;

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
		::System::Boolean m_IgnoreZeroScaleItem; // 0x58

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

		::System::Int32 get_ChildrenCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDRENCOUNT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MAXWIDTH_OFFSET))(this);
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

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDESTROY_OFFSET))(this);
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

		::System::Void SetChildAlongAxisWithScale_1(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Single pos, ::System::Single size, ::System::Single scaleFactor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET))(this, rect, axis, pos, size, scaleFactor);
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
	};
}
