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

#define UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3C1D90)
#define UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1B3C3150)
#define UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET UNITYSDK_OFFSET(0x1B3C2A40)
#define UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B3C2850)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1B3C21F0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET UNITYSDK_OFFSET(0x1B3C2130)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1B3C2190)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B3C1C60)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDRENCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C1D50)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C2260)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C21E0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1B3C2EF0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B3C2270)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C1D70)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1D80)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C2240)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C2120)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B3C1BD0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C2250)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C2180)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B3C1D40)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3C1CC0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B3C2630)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3C2840)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3C24E0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3C2320)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B3C2580)
#define UNITYENGINE_UI_LAYOUTGROUP_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B3C2590)
#define UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B3C3110)
#define UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3C3140)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET UNITYSDK_OFFSET(0x1B3C2D10)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1B3C2B40)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_1_OFFSET UNITYSDK_OFFSET(0x1B3C2CE0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1B3C2B10)
#define UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1B3C2330)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET UNITYSDK_OFFSET(0x1B3C2AA0)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B3C1C70)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B3C1BE0)
#define UNITYENGINE_UI_LAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C2280)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutGroup_TypeDefinitionIndex = 5938;

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

		::System::Void set_padding(::UnityEngine::RectOffset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET))(this, a1);
		}

		::UnityEngine::TextAnchor get_childAlignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET))(this);
		}

		::System::Void set_childAlignment(::UnityEngine::TextAnchor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET))(this, a1);
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

		::System::Single GetTotalMinSize(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET))(this, a1);
		}

		::System::Single GetTotalPreferredSize(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET))(this, a1);
		}

		::System::Single GetTotalFlexibleSize(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET))(this, a1);
		}

		::System::Single GetStartOffset(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Single GetAlignmentOnAxis(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET))(this, a1);
		}

		::System::Void SetLayoutInputForAxis(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetChildAlongAxis(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetChildAlongAxis_1(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetChildAlongAxisWithScale_1(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_1_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET))(this, a1);
		}
	};
}
