#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/AspectRatioFitter_AspectMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_ASPECTRATIOFITTER_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0x1F43EEA0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GETSIZEDELTATOPRODUCESIZE_OFFSET UNITYSDK_OFFSET(0x1F43F060)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTMODE_OFFSET UNITYSDK_OFFSET(0x1F43E5C0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1F43E6E0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F43E7A0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F43EA60)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F43E9C0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F43EBA0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F43E690)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1F43F2D0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1F43F310)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTMODE_OFFSET UNITYSDK_OFFSET(0x1F43E5D0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1F43E6F0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATERECT_OFFSET UNITYSDK_OFFSET(0x1F43EBF0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F43EB20)
#define UNITYENGINE_UI_ASPECTRATIOFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43E960)
#define UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F43F350)
#define UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F43F3E0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F43F470)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AspectRatioFitter_TypeDefinitionIndex = 19234;

	class AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::AspectRatioFitter_AspectMode m_AspectMode; // 0x18
		::System::Single m_AspectRatio; // 0x1C
		::UnityEngine::RectTransform* m_Rect; // 0x20
		::System::Boolean m_DelayedSetDirty; // 0x28
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::AspectRatioFitter_AspectMode get_aspectMode()
		{
			return ((::UnityEngine::UI::AspectRatioFitter_AspectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTMODE_OFFSET))(this);
		}

		::System::Void set_aspectMode(::UnityEngine::UI::AspectRatioFitter_AspectMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter_AspectMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTMODE_OFFSET))(this, value);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTRATIO_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void UpdateRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATERECT_OFFSET))(this);
		}

		::System::Single GetSizeDeltaToProduceSize(::System::Single size, ::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GETSIZEDELTATOPRODUCESIZE_OFFSET))(this, size, axis);
		}

		::UnityEngine::Vector2 GetParentSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GETPARENTSIZE_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETDIRTY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
