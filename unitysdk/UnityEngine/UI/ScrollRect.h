#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_MovementType.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_ScrollbarVisibility.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect_ScrollRectEvent; }
namespace UnityEngine::UI { class Scrollbar; }

#define UNITYENGINE_UI_SCROLLRECT_ADDSCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x1DFB9710)
#define UNITYENGINE_UI_SCROLLRECT_ADJUSTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DFBCA70)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DFBB590)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DFBB5D0)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1DFBD090)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DFB8F40)
#define UNITYENGINE_UI_SCROLLRECT_ENSURELAYOUTHASREBUILT_OFFSET UNITYSDK_OFFSET(0x1DFB8B40)
#define UNITYENGINE_UI_SCROLLRECT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DFBBE40)
#define UNITYENGINE_UI_SCROLLRECT_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1DFBC810)
#define UNITYENGINE_UI_SCROLLRECT_GETSCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x1DFB9780)
#define UNITYENGINE_UI_SCROLLRECT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1DFB5A00)
#define UNITYENGINE_UI_SCROLLRECT_GET_DECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0x1DFB5AC0)
#define UNITYENGINE_UI_SCROLLRECT_GET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0x1DFB5A80)
#define UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DFBB660)
#define UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1DFBB630)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAA40)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x1DFB6330)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFB6270)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1DFB5C10)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DFB5A20)
#define UNITYENGINE_UI_SCROLLRECT_GET_HSCROLLINGNEEDED_OFFSET UNITYSDK_OFFSET(0x1DFBB490)
#define UNITYENGINE_UI_SCROLLRECT_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1DFB5AA0)
#define UNITYENGINE_UI_SCROLLRECT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DFBB670)
#define UNITYENGINE_UI_SCROLLRECT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DFBB640)
#define UNITYENGINE_UI_SCROLLRECT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DFBB610)
#define UNITYENGINE_UI_SCROLLRECT_GET_MOVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DFB5A60)
#define UNITYENGINE_UI_SCROLLRECT_GET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBA8D0)
#define UNITYENGINE_UI_SCROLLRECT_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1DFB64B0)
#define UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DFBB650)
#define UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1DFBB620)
#define UNITYENGINE_UI_SCROLLRECT_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DFB6760)
#define UNITYENGINE_UI_SCROLLRECT_GET_SCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1DFB5AE0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1DFB6740)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAB60)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x1DFB6440)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFB62D0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1DFB5F40)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1DFB5A40)
#define UNITYENGINE_UI_SCROLLRECT_GET_VIEWPORT_OFFSET UNITYSDK_OFFSET(0x1DFB5B00)
#define UNITYENGINE_UI_SCROLLRECT_GET_VIEWRECT_OFFSET UNITYSDK_OFFSET(0x1DFB64D0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VSCROLLINGNEEDED_OFFSET UNITYSDK_OFFSET(0x1DFBB510)
#define UNITYENGINE_UI_SCROLLRECT_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DFB8260)
#define UNITYENGINE_UI_SCROLLRECT_INTERNALCALCULATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DFBCEF0)
#define UNITYENGINE_UI_SCROLLRECT_INTERNALGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DFBCB50)
#define UNITYENGINE_UI_SCROLLRECT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1DFB89A0)
#define UNITYENGINE_UI_SCROLLRECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1DFB9930)
#define UNITYENGINE_UI_SCROLLRECT_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DFB8220)
#define UNITYENGINE_UI_SCROLLRECT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1DFB9030)
#define UNITYENGINE_UI_SCROLLRECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DFB85E0)
#define UNITYENGINE_UI_SCROLLRECT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1DFB92A0)
#define UNITYENGINE_UI_SCROLLRECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DFB82A0)
#define UNITYENGINE_UI_SCROLLRECT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1DFB9240)
#define UNITYENGINE_UI_SCROLLRECT_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1DFB8FC0)
#define UNITYENGINE_UI_SCROLLRECT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1DFBB440)
#define UNITYENGINE_UI_SCROLLRECT_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1DFB8C20)
#define UNITYENGINE_UI_SCROLLRECT_REBUILD_OFFSET UNITYSDK_OFFSET(0x1DFB6A40)
#define UNITYENGINE_UI_SCROLLRECT_RUBBERDELTA_OFFSET UNITYSDK_OFFSET(0x1DFB9650)
#define UNITYENGINE_UI_SCROLLRECT_SETCONTENTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFB97C0)
#define UNITYENGINE_UI_SCROLLRECT_SETDIRTYCACHING_OFFSET UNITYSDK_OFFSET(0x1DFB5B60)
#define UNITYENGINE_UI_SCROLLRECT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1DFB63A0)
#define UNITYENGINE_UI_SCROLLRECT_SETHORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAE00)
#define UNITYENGINE_UI_SCROLLRECT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DFBB680)
#define UNITYENGINE_UI_SCROLLRECT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DFBC070)
#define UNITYENGINE_UI_SCROLLRECT_SETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAEE0)
#define UNITYENGINE_UI_SCROLLRECT_SETVERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAE70)
#define UNITYENGINE_UI_SCROLLRECT_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1DFB5A10)
#define UNITYENGINE_UI_SCROLLRECT_SET_DECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0x1DFB5AD0)
#define UNITYENGINE_UI_SCROLLRECT_SET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0x1DFB5A90)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAD20)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x1DFB6340)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFB6280)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1DFB5C20)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DFB5A30)
#define UNITYENGINE_UI_SCROLLRECT_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1DFB5AB0)
#define UNITYENGINE_UI_SCROLLRECT_SET_MOVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DFB5A70)
#define UNITYENGINE_UI_SCROLLRECT_SET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAC80)
#define UNITYENGINE_UI_SCROLLRECT_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1DFB64C0)
#define UNITYENGINE_UI_SCROLLRECT_SET_SCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1DFB5AF0)
#define UNITYENGINE_UI_SCROLLRECT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1DFB6750)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DFBAD90)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x1DFB6450)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFB62E0)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1DFB5F50)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1DFB5A50)
#define UNITYENGINE_UI_SCROLLRECT_SET_VIEWPORT_OFFSET UNITYSDK_OFFSET(0x1DFB5B10)
#define UNITYENGINE_UI_SCROLLRECT_STOPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1DFB8BD0)
#define UNITYENGINE_UI_SCROLLRECT_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DFBD110)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DFB7470)
#define UNITYENGINE_UI_SCROLLRECT_UPDATECACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1DFB6AD0)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEONESCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFBC860)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEPREVDATA_OFFSET UNITYSDK_OFFSET(0x1DFB8050)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARLAYOUT_OFFSET UNITYSDK_OFFSET(0x1DFBC1D0)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARS_OFFSET UNITYSDK_OFFSET(0x1DFB7B80)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DFBA910)
#define UNITYENGINE_UI_SCROLLRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6930)
#define UNITYENGINE_UI_SCROLLRECT___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1DFBD160)
#define UNITYENGINE_UI_SCROLLRECT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DFBD1F0)
#define UNITYENGINE_UI_SCROLLRECT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DFBD280)
#define UNITYENGINE_UI_SCROLLRECT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1DFBD310)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_TypeDefinitionIndex = 18937;

	class ScrollRect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* m_Content; // 0x18
		::System::Boolean m_Horizontal; // 0x20
		::System::Boolean m_Vertical; // 0x21
		::UnityEngine::UI::ScrollRect_MovementType m_MovementType; // 0x24
		::System::Single m_Elasticity; // 0x28
		::System::Single RubberDeltaValue; // 0x2C
		::System::Boolean m_Inertia; // 0x30
		::System::Single m_DecelerationRate; // 0x34
		::System::Single m_ScrollSensitivity; // 0x38
		::UnityEngine::RectTransform* m_Viewport; // 0x40
		::UnityEngine::UI::Scrollbar* m_HorizontalScrollbar; // 0x48
		::UnityEngine::UI::Scrollbar* m_VerticalScrollbar; // 0x50
		::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_HorizontalScrollbarVisibility; // 0x58
		::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_VerticalScrollbarVisibility; // 0x5C
		::System::Single m_HorizontalScrollbarSpacing; // 0x60
		::System::Single m_VerticalScrollbarSpacing; // 0x64
		::UnityEngine::UI::ScrollRect_ScrollRectEvent* m_OnValueChanged; // 0x68
		::UnityEngine::Vector2 m_PointerStartLocalCursor; // 0x70
		::UnityEngine::Vector2 m_ContentStartPosition; // 0x78
		::UnityEngine::RectTransform* m_ViewRect; // 0x80
		::UnityEngine::Bounds m_ContentBounds; // 0x88
		::UnityEngine::Bounds m_ViewBounds; // 0xA0
		::UnityEngine::Vector2 m_Velocity; // 0xB8
		::System::Boolean m_Dragging; // 0xC0
		::System::Boolean m_Scrolling; // 0xC1
		::UnityEngine::Vector2 m_PrevPosition; // 0xC4
		::UnityEngine::Bounds m_PrevContentBounds; // 0xCC
		::UnityEngine::Bounds m_PrevViewBounds; // 0xE4
		::System::Boolean m_HasRebuiltLayout; // 0xFC
		::System::Boolean m_HSliderExpand; // 0xFD
		::System::Boolean m_VSliderExpand; // 0xFE
		::System::Single m_HSliderHeight; // 0x100
		::System::Single m_VSliderWidth; // 0x104
		::UnityEngine::RectTransform* m_Rect; // 0x108
		::UnityEngine::RectTransform* m_HorizontalScrollbarRect; // 0x110
		::UnityEngine::RectTransform* m_VerticalScrollbarRect; // 0x118
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x120
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_content()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_content(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_CONTENT_OFFSET))(this, value);
		}

		::System::Boolean get_horizontal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Void set_horizontal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTAL_OFFSET))(this, value);
		}

		::System::Boolean get_vertical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VERTICAL_OFFSET))(this);
		}

		::System::Void set_vertical(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VERTICAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::ScrollRect_MovementType get_movementType()
		{
			return ((::UnityEngine::UI::ScrollRect_MovementType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_MOVEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_movementType(::UnityEngine::UI::ScrollRect_MovementType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect_MovementType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_MOVEMENTTYPE_OFFSET))(this, value);
		}

		::System::Single get_elasticity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ELASTICITY_OFFSET))(this);
		}

		::System::Void set_elasticity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_ELASTICITY_OFFSET))(this, value);
		}

		::System::Boolean get_inertia()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_INERTIA_OFFSET))(this);
		}

		::System::Void set_inertia(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_INERTIA_OFFSET))(this, value);
		}

		::System::Single get_decelerationRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_DECELERATIONRATE_OFFSET))(this);
		}

		::System::Void set_decelerationRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_DECELERATIONRATE_OFFSET))(this, value);
		}

		::System::Single get_scrollSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_SCROLLSENSITIVITY_OFFSET))(this);
		}

		::System::Void set_scrollSensitivity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_SCROLLSENSITIVITY_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_viewport()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VIEWPORT_OFFSET))(this);
		}

		::System::Void set_viewport(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VIEWPORT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Scrollbar* get_horizontalScrollbar()
		{
			return ((::UnityEngine::UI::Scrollbar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbar(::UnityEngine::UI::Scrollbar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBAR_OFFSET))(this, value);
		}

		::UnityEngine::UI::Scrollbar* get_verticalScrollbar()
		{
			return ((::UnityEngine::UI::Scrollbar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBAR_OFFSET))(this, value);
		}

		::UnityEngine::UI::ScrollRect_ScrollbarVisibility get_horizontalScrollbarVisibility()
		{
			return ((::UnityEngine::UI::ScrollRect_ScrollbarVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARVISIBILITY_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARVISIBILITY_OFFSET))(this, value);
		}

		::UnityEngine::UI::ScrollRect_ScrollbarVisibility get_verticalScrollbarVisibility()
		{
			return ((::UnityEngine::UI::ScrollRect_ScrollbarVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARVISIBILITY_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarVisibility(::UnityEngine::UI::ScrollRect_ScrollbarVisibility value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARVISIBILITY_OFFSET))(this, value);
		}

		::System::Single get_horizontalScrollbarSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARSPACING_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARSPACING_OFFSET))(this, value);
		}

		::System::Single get_verticalScrollbarSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARSPACING_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARSPACING_OFFSET))(this, value);
		}

		::UnityEngine::UI::ScrollRect_ScrollRectEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::ScrollRect_ScrollRectEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::ScrollRect_ScrollRectEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect_ScrollRectEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_viewRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VIEWRECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_velocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_REBUILD_OFFSET))(this, executing);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void UpdateCachedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATECACHEDDATA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ISACTIVE_OFFSET))(this);
		}

		::System::Void EnsureLayoutHasRebuilt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ENSURELAYOUTHASREBUILT_OFFSET))(this);
		}

		::System::Void StopMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_STOPMOVEMENT_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONSCROLL_OFFSET))(this, data);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void AddScrollOffset(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ADDSCROLLOFFSET_OFFSET))(this, offset);
		}

		::UnityEngine::Vector2 GetScrollOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GETSCROLLOFFSET_OFFSET))(this);
		}

		::System::Void SetContentAnchoredPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETCONTENTANCHOREDPOSITION_OFFSET))(this, position);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdatePrevData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATEPREVDATA_OFFSET))(this);
		}

		::System::Void UpdateScrollbars(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARS_OFFSET))(this, offset);
		}

		::UnityEngine::Vector2 get_normalizedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_NORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void set_normalizedPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_NORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Single get_horizontalNormalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALNORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void set_horizontalNormalizedPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALNORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Single get_verticalNormalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VERTICALNORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void set_verticalNormalizedPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_VERTICALNORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Void SetHorizontalNormalizedPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETHORIZONTALNORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Void SetVerticalNormalizedPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETVERTICALNORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Void SetNormalizedPosition(::System::Single value, ::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETNORMALIZEDPOSITION_OFFSET))(this, value, axis);
		}

		::System::Single RubberDelta(::System::Single overStretching, ::System::Single viewSize)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_RUBBERDELTA_OFFSET))(this, overStretching, viewSize);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Boolean get_hScrollingNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_HSCROLLINGNEEDED_OFFSET))(this);
		}

		::System::Boolean get_vScrollingNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_VSCROLLINGNEEDED_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GETCOLROW_OFFSET))(this);
		}

		::System::Void UpdateScrollbarVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARVISIBILITY_OFFSET))(this);
		}

		static ::System::Void UpdateOneScrollbarVisibility(::System::Boolean xScrollingNeeded, ::System::Boolean xAxisEnabled, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility scrollbarVisibility, ::UnityEngine::UI::Scrollbar* scrollbar)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::UI::ScrollRect_ScrollbarVisibility, ::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATEONESCROLLBARVISIBILITY_OFFSET))(xScrollingNeeded, xAxisEnabled, scrollbarVisibility, scrollbar);
		}

		::System::Void UpdateScrollbarLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARLAYOUT_OFFSET))(this);
		}

		::System::Void UpdateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UPDATEBOUNDS_OFFSET))(this);
		}

		static ::System::Void AdjustBounds(::UnityEngine::Bounds& viewBounds, ::UnityEngine::Vector2& contentPivot, ::UnityEngine::Vector3& contentSize, ::UnityEngine::Vector3& contentPos)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ADJUSTBOUNDS_OFFSET))(viewBounds, contentPivot, contentSize, contentPos);
		}

		::UnityEngine::Bounds GetBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GETBOUNDS_OFFSET))(this);
		}

		static ::UnityEngine::Bounds InternalGetBounds(::Il2CppArray<::UnityEngine::Vector3>* corners, ::UnityEngine::Matrix4x4& viewWorldToLocalMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_INTERNALGETBOUNDS_OFFSET))(corners, viewWorldToLocalMatrix);
		}

		::UnityEngine::Vector2 CalculateOffset(::UnityEngine::Vector2 delta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CALCULATEOFFSET_OFFSET))(this, delta);
		}

		::UnityEngine::Vector2 CalculateOffset_1(::UnityEngine::Vector2 delta, ::UnityEngine::UI::ScrollRect_MovementType movementType)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::UI::ScrollRect_MovementType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CALCULATEOFFSET_1_OFFSET))(this, delta, movementType);
		}

		static ::UnityEngine::Vector2 InternalCalculateOffset(::UnityEngine::Bounds& viewBounds, ::UnityEngine::Bounds& contentBounds, ::System::Boolean horizontal, ::System::Boolean vertical, ::UnityEngine::UI::ScrollRect_MovementType movementType, ::UnityEngine::Vector2& delta)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Bounds&, ::UnityEngine::Bounds&, ::System::Boolean, ::System::Boolean, ::UnityEngine::UI::ScrollRect_MovementType, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_INTERNALCALCULATEOFFSET_OFFSET))(viewBounds, contentBounds, horizontal, vertical, movementType, delta);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETDIRTY_OFFSET))(this);
		}

		::System::Void SetDirtyCaching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETDIRTYCACHING_OFFSET))(this);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
