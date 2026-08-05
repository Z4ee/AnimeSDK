#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter_FitMode.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_CONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1F9F9590)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0x1F9F8FF0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F9F9200)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0x1F9F9160)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1F9F9670)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9F9480)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9F9410)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F9F9540)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F9F9090)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1F9F9720)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1F9F9870)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0x1F9F9000)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0x1F9F9170)
#define UNITYENGINE_UI_CONTENTSIZEFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F93C0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9F99C0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9F9A50)
#define UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F9F9AE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ContentSizeFitter_TypeDefinitionIndex = 19240;

	class ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::ContentSizeFitter_FitMode m_HorizontalFit; // 0x18
		::UnityEngine::UI::ContentSizeFitter_FitMode m_VerticalFit; // 0x1C
		::UnityEngine::RectTransform* m_Rect; // 0x20
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::ContentSizeFitter_FitMode get_horizontalFit()
		{
			return ((::UnityEngine::UI::ContentSizeFitter_FitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET))(this);
		}

		::System::Void set_horizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::ContentSizeFitter_FitMode get_verticalFit()
		{
			return ((::UnityEngine::UI::ContentSizeFitter_FitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET))(this);
		}

		::System::Void set_verticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Single GetSizeAlongAxis(::System::Int32 axis, ::UnityEngine::UI::ContentSizeFitter_FitMode fitMode)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET))(this, axis, fitMode);
		}

		::System::Void HandleSelfFittingAlongAxis(::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET))(this, axis);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
