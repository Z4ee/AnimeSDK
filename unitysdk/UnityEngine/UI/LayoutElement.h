#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class CaculateNodeData; }

#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B39940)
#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18B39950)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39E10)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39D20)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x18B397F0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B39F00)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39550)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x18B396A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39A50)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39960)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39C30)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39B40)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B394F0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B39410)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18B3A2D0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B3A260)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B3A110)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B3A030)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x18B3A180)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x18B3A1F0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18B3A0A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x18B398D0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39E20)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39D30)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x18B39800)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B39F10)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39A60)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39970)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B39C40)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B39B50)
#define UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3A010)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutElement_TypeDefinitionIndex = 5648;

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

		::System::Void set_ignoreLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET))(this, value);
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

		::System::Void set_minWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET))(this, value);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Void set_minHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET))(this, value);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Void set_preferredWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Void set_preferredHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET))(this, value);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Void set_flexibleWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET))(this, value);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Void set_flexibleHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void set_layoutPriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET))(this, value);
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
