#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E4B2F50)
#define UNITYENGINE_UI_LAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E4B2F90)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B32A0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B3210)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1E4B2DB0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E4B3330)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B3060)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B2FD0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B3180)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B30F0)
#define UNITYENGINE_UI_LAYOUTELEMENT_GET_SUPERIGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1E4B2F40)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B3680)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4B3630)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E4B34E0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E4B3420)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B3550)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B35C0)
#define UNITYENGINE_UI_LAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B3490)
#define UNITYENGINE_UI_LAYOUTELEMENT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4B2E30)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B32B0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B3220)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1E4B2DC0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E4B3340)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B3070)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B2FE0)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B3190)
#define UNITYENGINE_UI_LAYOUTELEMENT_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B3100)
#define UNITYENGINE_UI_LAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B33B0)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B36D0)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4B3760)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E4B37F0)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E4B3880)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B3910)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B39A0)
#define UNITYENGINE_UI_LAYOUTELEMENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B3A30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutElement_TypeDefinitionIndex = 18912;

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
