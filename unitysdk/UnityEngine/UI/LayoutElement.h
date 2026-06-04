#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class CaculateNodeData; }

#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3C1420)
#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3C1430)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C1710)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1680)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1B3C12B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B3C17A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C1010)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1160)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C14D0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1440)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C15F0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1560)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3C0FB0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3C0ED0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3C1B60)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3C1AF0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3C19A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3C18C0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B3C1A10)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B3C1A80)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3C1930)
#define UNITYENGINE_UI_LAYOUTELEMENT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1B3C13B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C1720)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1690)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1B3C12C0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B3C17B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C14E0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1450)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C1600)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C1570)
#define UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C18A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutElement_TypeDefinitionIndex = 5937;

	class LayoutElement : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean m_IgnoreLayout; // 0x18
		::System::Single m_MinWidth; // 0x1C
		::System::Single m_MinHeight; // 0x20
		::System::Single m_PreferredWidth; // 0x24
		::System::Single m_PreferredHeight; // 0x28
		::System::Single m_FlexibleWidth; // 0x2C
		::System::Single m_FlexibleHeight; // 0x30
		::System::Int32 m_LayoutPriority; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* mMaxNodesWidth; // 0x38
		::UnityEngine::UI::CaculateNodeData* mMaxNodeRootWidth; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* mMaxNodesHeight; // 0x48
		::UnityEngine::UI::CaculateNodeData* mMaxNodeRootHeight; // 0x50
		::UnityEngine::RectTransform* Parent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Boolean get_ignoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET))(this);
		}

		::System::Void set_ignoreLayout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET))(this, a1);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Void set_minWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Void set_minHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Void set_preferredWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Void set_preferredHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Void set_flexibleWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Void set_flexibleHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void set_layoutPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SETDIRTY_OFFSET))(this);
		}
	};
}
