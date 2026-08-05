#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1F818CD0)
#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1F818D10)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F819020)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818F90)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1F818B30)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F8190B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F818DE0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818D50)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F818F00)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818E70)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_SUPERIGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1F818CC0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F819400)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F8193B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F819260)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F8191A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F8192D0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F819340)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F819210)
#define UNITYENGINE_UI_LAYOUTELEMENT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F818BB0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F819030)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818FA0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1F818B40)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F8190C0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F818DF0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818D60)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F818F10)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1F818E80)
#define UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F819130)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F819450)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F8194E0)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F819570)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F819600)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F819690)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F819720)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8197B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutElement_TypeDefinitionIndex = 19254;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ignoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET))(this);
		}

		::System::Void set_ignoreLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET))(this, value);
		}

		::System::Boolean get_superIgnoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_GET_SUPERIGNORELAYOUT_OFFSET))(this);
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

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
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

		::System::Void __base_OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
