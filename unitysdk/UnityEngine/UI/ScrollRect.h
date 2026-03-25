#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_AlignDirection.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_LayoutType.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_MovementType.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_ReboundState.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_ScrollbarVisibility.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect_ReboundEvent; }
namespace UnityEngine::UI { class ScrollRect_ScrollRectEvent; }
namespace UnityEngine::UI { class Scrollbar; }
namespace UnityEngine::UI { class TouchFilter; }

#define UNITYENGINE_UI_SCROLLRECT_ADJUSTBOUNDS_OFFSET UNITYSDK_OFFSET(0x18B60500)
#define UNITYENGINE_UI_SCROLLRECT_AUTOSETPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5F030)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B5F200)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18B5F210)
#define UNITYENGINE_UI_SCROLLRECT_CALCULATEOFFSET_OFFSET UNITYSDK_OFFSET(0x18B5CA60)
#define UNITYENGINE_UI_SCROLLRECT_CANAXISSCROLL_OFFSET UNITYSDK_OFFSET(0x18B61F00)
#define UNITYENGINE_UI_SCROLLRECT_CANSCROLL_OFFSET UNITYSDK_OFFSET(0x18B5D2C0)
#define UNITYENGINE_UI_SCROLLRECT_ENSURELAYOUTHASREBUILT_OFFSET UNITYSDK_OFFSET(0x18B5C590)
#define UNITYENGINE_UI_SCROLLRECT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x18B5FDC0)
#define UNITYENGINE_UI_SCROLLRECT_GET_CONTENTLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x18B61A50)
#define UNITYENGINE_UI_SCROLLRECT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x18B5ABC0)
#define UNITYENGINE_UI_SCROLLRECT_GET_DECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0x18B5AC80)
#define UNITYENGINE_UI_SCROLLRECT_GET_DRAGGING_OFFSET UNITYSDK_OFFSET(0x18B5B220)
#define UNITYENGINE_UI_SCROLLRECT_GET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0x18B5AC40)
#define UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B5F270)
#define UNITYENGINE_UI_SCROLLRECT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B5F240)
#define UNITYENGINE_UI_SCROLLRECT_GET_FORBIDDRAG_OFFSET UNITYSDK_OFFSET(0x18B61970)
#define UNITYENGINE_UI_SCROLLRECT_GET_FORCEREVERSEALIGN_OFFSET UNITYSDK_OFFSET(0x18B62020)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5E890)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x18B5B060)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B5B020)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x18B5ADC0)
#define UNITYENGINE_UI_SCROLLRECT_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B5ABE0)
#define UNITYENGINE_UI_SCROLLRECT_GET_HSCROLLINGNEEDED_OFFSET UNITYSDK_OFFSET(0x18B5F160)
#define UNITYENGINE_UI_SCROLLRECT_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x18B5AC60)
#define UNITYENGINE_UI_SCROLLRECT_GET_ISHORIZONTALCANNOTSCROLL_OFFSET UNITYSDK_OFFSET(0x18B61A20)
#define UNITYENGINE_UI_SCROLLRECT_GET_ISINLINEDECELERATION_OFFSET UNITYSDK_OFFSET(0x18B617D0)
#define UNITYENGINE_UI_SCROLLRECT_GET_ISVERTICALCANNOTSCROLL_OFFSET UNITYSDK_OFFSET(0x18B619F0)
#define UNITYENGINE_UI_SCROLLRECT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B5F2A0)
#define UNITYENGINE_UI_SCROLLRECT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B5F280)
#define UNITYENGINE_UI_SCROLLRECT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x18B5F290)
#define UNITYENGINE_UI_SCROLLRECT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B5F250)
#define UNITYENGINE_UI_SCROLLRECT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18B5F220)
#define UNITYENGINE_UI_SCROLLRECT_GET_MOVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18B5AC20)
#define UNITYENGINE_UI_SCROLLRECT_GET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5E500)
#define UNITYENGINE_UI_SCROLLRECT_GET_NOTFULLAUTOCENTER_OFFSET UNITYSDK_OFFSET(0x18B61990)
#define UNITYENGINE_UI_SCROLLRECT_GET_NOTFULLCANSCROLL_OFFSET UNITYSDK_OFFSET(0x18B619C0)
#define UNITYENGINE_UI_SCROLLRECT_GET_ONREBOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x18B5E780)
#define UNITYENGINE_UI_SCROLLRECT_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18B5B180)
#define UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B5F260)
#define UNITYENGINE_UI_SCROLLRECT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B5F230)
#define UNITYENGINE_UI_SCROLLRECT_GET_REBOUNDEVENTENABLE_OFFSET UNITYSDK_OFFSET(0x18B62050)
#define UNITYENGINE_UI_SCROLLRECT_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B5B240)
#define UNITYENGINE_UI_SCROLLRECT_GET_REVERSEHORIZONTALSCROLL_OFFSET UNITYSDK_OFFSET(0x18B62000)
#define UNITYENGINE_UI_SCROLLRECT_GET_SCROLLING_OFFSET UNITYSDK_OFFSET(0x18B5B230)
#define UNITYENGINE_UI_SCROLLRECT_GET_SCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x18B5ACA0)
#define UNITYENGINE_UI_SCROLLRECT_GET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x18B617E0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x18B5B200)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5E980)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x18B5B160)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B5B040)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x18B5AEF0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x18B5AC00)
#define UNITYENGINE_UI_SCROLLRECT_GET_VIEWPORT_OFFSET UNITYSDK_OFFSET(0x18B5ACC0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VIEWRECT_OFFSET UNITYSDK_OFFSET(0x18B5B1A0)
#define UNITYENGINE_UI_SCROLLRECT_GET_VSCROLLINGNEEDED_OFFSET UNITYSDK_OFFSET(0x18B5F1B0)
#define UNITYENGINE_UI_SCROLLRECT_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B5C260)
#define UNITYENGINE_UI_SCROLLRECT_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x18B61800)
#define UNITYENGINE_UI_SCROLLRECT_INTERNALCALCULATEOFFSET_OFFSET UNITYSDK_OFFSET(0x18B60920)
#define UNITYENGINE_UI_SCROLLRECT_INTERNALGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x18B60600)
#define UNITYENGINE_UI_SCROLLRECT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18B5C550)
#define UNITYENGINE_UI_SCROLLRECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18B5D560)
#define UNITYENGINE_UI_SCROLLRECT_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B5C250)
#define UNITYENGINE_UI_SCROLLRECT_MANUALSTOPDRAGGING_OFFSET UNITYSDK_OFFSET(0x18B5C630)
#define UNITYENGINE_UI_SCROLLRECT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18B5CB00)
#define UNITYENGINE_UI_SCROLLRECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B5C370)
#define UNITYENGINE_UI_SCROLLRECT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18B5CD50)
#define UNITYENGINE_UI_SCROLLRECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B5C270)
#define UNITYENGINE_UI_SCROLLRECT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18B5CD10)
#define UNITYENGINE_UI_SCROLLRECT_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x18B5CAD0)
#define UNITYENGINE_UI_SCROLLRECT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18B5F010)
#define UNITYENGINE_UI_SCROLLRECT_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18B5C650)
#define UNITYENGINE_UI_SCROLLRECT_REBUILD_OFFSET UNITYSDK_OFFSET(0x18B5B3C0)
#define UNITYENGINE_UI_SCROLLRECT_REGISTERSCROLLCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B5C640)
#define UNITYENGINE_UI_SCROLLRECT_RUBBERDELTA_OFFSET UNITYSDK_OFFSET(0x18B5D3B0)
#define UNITYENGINE_UI_SCROLLRECT_SCROLLTOTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x18B60D80)
#define UNITYENGINE_UI_SCROLLRECT_SCROLLTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B60D60)
#define UNITYENGINE_UI_SCROLLRECT_SETANCHOREDPOSITIONWITHANIM_OFFSET UNITYSDK_OFFSET(0x18B61670)
#define UNITYENGINE_UI_SCROLLRECT_SETCONTENTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5D410)
#define UNITYENGINE_UI_SCROLLRECT_SETDIRTYCACHING_OFFSET UNITYSDK_OFFSET(0x18B5ACE0)
#define UNITYENGINE_UI_SCROLLRECT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x18B5B080)
#define UNITYENGINE_UI_SCROLLRECT_SETHORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EAF0)
#define UNITYENGINE_UI_SCROLLRECT_SETHORIZONTALSCROLLPERCENT_OFFSET UNITYSDK_OFFSET(0x18B61A80)
#define UNITYENGINE_UI_SCROLLRECT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B5F2B0)
#define UNITYENGINE_UI_SCROLLRECT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18B5FF00)
#define UNITYENGINE_UI_SCROLLRECT_SETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EB30)
#define UNITYENGINE_UI_SCROLLRECT_SETSCROLLPERCENT_OFFSET UNITYSDK_OFFSET(0x18B61A90)
#define UNITYENGINE_UI_SCROLLRECT_SETVERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EB10)
#define UNITYENGINE_UI_SCROLLRECT_SETVERTICALSCROLLPERCENT_OFFSET UNITYSDK_OFFSET(0x18B61EF0)
#define UNITYENGINE_UI_SCROLLRECT_SET_CONTENTLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x18B61A60)
#define UNITYENGINE_UI_SCROLLRECT_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x18B5ABD0)
#define UNITYENGINE_UI_SCROLLRECT_SET_DECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0x18B5AC90)
#define UNITYENGINE_UI_SCROLLRECT_SET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0x18B5AC50)
#define UNITYENGINE_UI_SCROLLRECT_SET_FORBIDDRAG_OFFSET UNITYSDK_OFFSET(0x18B61980)
#define UNITYENGINE_UI_SCROLLRECT_SET_FORCEREVERSEALIGN_OFFSET UNITYSDK_OFFSET(0x18B62030)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EAB0)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x18B5B070)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B5B030)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x18B5ADD0)
#define UNITYENGINE_UI_SCROLLRECT_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B5ABF0)
#define UNITYENGINE_UI_SCROLLRECT_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x18B5AC70)
#define UNITYENGINE_UI_SCROLLRECT_SET_MOVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18B5AC30)
#define UNITYENGINE_UI_SCROLLRECT_SET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EA60)
#define UNITYENGINE_UI_SCROLLRECT_SET_NOTFULLAUTOCENTER_OFFSET UNITYSDK_OFFSET(0x18B619A0)
#define UNITYENGINE_UI_SCROLLRECT_SET_NOTFULLCANSCROLL_OFFSET UNITYSDK_OFFSET(0x18B619D0)
#define UNITYENGINE_UI_SCROLLRECT_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18B5B190)
#define UNITYENGINE_UI_SCROLLRECT_SET_REBOUNDEVENTENABLE_OFFSET UNITYSDK_OFFSET(0x18B62060)
#define UNITYENGINE_UI_SCROLLRECT_SET_REVERSEHORIZONTALSCROLL_OFFSET UNITYSDK_OFFSET(0x18B62010)
#define UNITYENGINE_UI_SCROLLRECT_SET_SCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x18B5ACB0)
#define UNITYENGINE_UI_SCROLLRECT_SET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x18B617F0)
#define UNITYENGINE_UI_SCROLLRECT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x18B5B210)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B5EAD0)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARSPACING_OFFSET UNITYSDK_OFFSET(0x18B5B170)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B5B050)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x18B5AF00)
#define UNITYENGINE_UI_SCROLLRECT_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x18B5AC10)
#define UNITYENGINE_UI_SCROLLRECT_SET_VIEWPORT_OFFSET UNITYSDK_OFFSET(0x18B5ACD0)
#define UNITYENGINE_UI_SCROLLRECT_STOPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x18B5C620)
#define UNITYENGINE_UI_SCROLLRECT_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B620D0)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18B5B760)
#define UNITYENGINE_UI_SCROLLRECT_UPDATECACHEDDATA_OFFSET UNITYSDK_OFFSET(0x18B5B480)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEONESCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B60440)
#define UNITYENGINE_UI_SCROLLRECT_UPDATEPREVDATA_OFFSET UNITYSDK_OFFSET(0x18B5C1D0)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARLAYOUT_OFFSET UNITYSDK_OFFSET(0x18B60080)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARS_OFFSET UNITYSDK_OFFSET(0x18B5BD00)
#define UNITYENGINE_UI_SCROLLRECT_UPDATESCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18B5E6B0)
#define UNITYENGINE_UI_SCROLLRECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B620C0)
#define UNITYENGINE_UI_SCROLLRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5B2D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_TypeDefinitionIndex = 5692;

	class ScrollRect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>* StaticGet_UseRaw()
		{
			return (::System::ValueTuple_2<::System::Boolean, ::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(ScrollRect_TypeDefinitionIndex)->GetStaticField(0x39A0);
		}
		::UnityEngine::RectTransform* m_Content; // 0x18
		::System::Boolean m_Horizontal; // 0x20
		::System::Boolean m_Vertical; // 0x21
		::UnityEngine::UI::ScrollRect_MovementType m_MovementType; // 0x24
		::System::Single m_Elasticity; // 0x28
		::System::Boolean m_Inertia; // 0x2C
		::System::Single m_DecelerationRate; // 0x30
		::System::Single m_ScrollSensitivity; // 0x34
		::UnityEngine::RectTransform* m_Viewport; // 0x38
		::UnityEngine::UI::Scrollbar* m_HorizontalScrollbar; // 0x40
		::UnityEngine::UI::Scrollbar* m_VerticalScrollbar; // 0x48
		::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_HorizontalScrollbarVisibility; // 0x50
		::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_VerticalScrollbarVisibility; // 0x54
		::System::Single m_HorizontalScrollbarSpacing; // 0x58
		::System::Single m_VerticalScrollbarSpacing; // 0x5C
		::UnityEngine::UI::ScrollRect_ScrollRectEvent* m_OnValueChanged; // 0x60
		::UnityEngine::Vector2 m_PointerStartLocalCursor; // 0x68
		::UnityEngine::Vector2 m_ContentStartPosition; // 0x70
		::UnityEngine::RectTransform* m_ViewRect; // 0x78
		::UnityEngine::Bounds m_ContentBounds; // 0x80
		::UnityEngine::Bounds m_ViewBounds; // 0x98
		::UnityEngine::Vector2 m_Velocity; // 0xB0
		::System::Boolean m_Dragging; // 0xB8
		::System::Boolean m_Scrolling; // 0xB9
		::UnityEngine::Vector2 m_PrevPosition; // 0xBC
		::UnityEngine::Bounds m_PrevContentBounds; // 0xC4
		::UnityEngine::Bounds m_PrevViewBounds; // 0xDC
		::System::Boolean m_HasRebuiltLayout; // 0xF4
		::System::Boolean m_HSliderExpand; // 0xF5
		::System::Boolean m_VSliderExpand; // 0xF6
		::System::Single m_HSliderHeight; // 0xF8
		::System::Single m_VSliderWidth; // 0xFC
		::UnityEngine::RectTransform* m_Rect; // 0x100
		::UnityEngine::RectTransform* m_HorizontalScrollbarRect; // 0x108
		::UnityEngine::RectTransform* m_VerticalScrollbarRect; // 0x110
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x118
		::System::Action_1<::UnityEngine::Vector2>* _ScrollCallback; // 0x120
		::UnityEngine::UI::TouchFilter* touchFilter; // 0x128
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0x130
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0x138
		::System::Single lineDeceleration; // 0x140
		::System::Boolean inLineDeceleration; // 0x144
		::System::Single uniformMovementTimer; // 0x148
		::System::Boolean inUniformSpeedMovement; // 0x14C
		::System::Boolean m_shareDrag; // 0x14D
		::System::Boolean m_forbidDrad; // 0x14E
		::System::Boolean m_notFullAutoCenter; // 0x14F
		::System::Boolean m_notFullCanScroll; // 0x150
		::UnityEngine::UI::ScrollRect_LayoutType m_contentLayoutType; // 0x154
		::UnityEngine::Bounds rawContentBounds; // 0x158
		::System::Boolean m_reverseHorizontalScroll; // 0x170
		::System::Boolean m_responseMultiTouch; // 0x171
		::System::Boolean m_forceReverseAlign; // 0x172
		::UnityEngine::UI::ScrollRect_ReboundState ReboundProcessState; // 0x174
		::System::Boolean reboundEventEnable; // 0x178
		::UnityEngine::UI::ScrollRect_ReboundEvent* onReboundEvent; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT__CCTOR_OFFSET))();
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

		::System::Boolean get_Dragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_DRAGGING_OFFSET))(this);
		}

		::System::Boolean get_Scrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_SCROLLING_OFFSET))(this);
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

		::System::Void ManualStopDragging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_MANUALSTOPDRAGGING_OFFSET))(this);
		}

		::System::Void RegisterScrollCallback(::System::Action_1<::UnityEngine::Vector2>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_REGISTERSCROLLCALLBACK_OFFSET))(this, callback);
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

		::System::Void SetContentAnchoredPosition(::UnityEngine::Vector2 position, ::System::Boolean useRawV, ::System::Boolean useRawH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETCONTENTANCHOREDPOSITION_OFFSET))(this, position, useRawV, useRawH);
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

		static ::System::Single RubberDelta(::System::Single overStretching, ::System::Single viewSize)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_RUBBERDELTA_OFFSET))(overStretching, viewSize);
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

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_MAXWIDTH_OFFSET))(this);
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

		static ::System::Void AdjustBounds(::UnityEngine::Bounds& viewBounds, ::UnityEngine::Vector2& contentPivot, ::UnityEngine::Vector3& contentSize, ::UnityEngine::Vector3& contentPos, ::UnityEngine::UI::ScrollRect* rect)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_ADJUSTBOUNDS_OFFSET))(viewBounds, contentPivot, contentSize, contentPos, rect);
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

		static ::UnityEngine::Vector2 InternalCalculateOffset(::UnityEngine::Bounds& viewBounds, ::UnityEngine::Bounds& contentBounds, ::System::Boolean horizontal, ::System::Boolean vertical, ::UnityEngine::UI::ScrollRect_MovementType movementType, ::UnityEngine::Vector2& delta, ::UnityEngine::UI::ScrollRect* scrollRect)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Bounds&, ::UnityEngine::Bounds&, ::System::Boolean, ::System::Boolean, ::UnityEngine::UI::ScrollRect_MovementType, ::UnityEngine::Vector2&, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_INTERNALCALCULATEOFFSET_OFFSET))(viewBounds, contentBounds, horizontal, vertical, movementType, delta, scrollRect);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETDIRTY_OFFSET))(this);
		}

		::System::Void SetDirtyCaching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETDIRTYCACHING_OFFSET))(this);
		}

		::System::Void ScrollToTransform(::UnityEngine::RectTransform* child, ::System::Single offset, ::System::Boolean topInRect, ::UnityEngine::UI::ScrollRect_AlignDirection direction, ::System::Boolean ignoreMoveIfInView, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Boolean, ::UnityEngine::UI::ScrollRect_AlignDirection, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SCROLLTOTRANSFORM_OFFSET))(this, child, offset, topInRect, direction, ignoreMoveIfInView, time);
		}

		::System::Void ScrollToTransform_1(::UnityEngine::RectTransform* child, ::UnityEngine::Vector2 offset, ::System::Boolean topInRect, ::UnityEngine::UI::ScrollRect_AlignDirection direction, ::System::Boolean ignoreMoveIfInView, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Boolean, ::UnityEngine::UI::ScrollRect_AlignDirection, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SCROLLTOTRANSFORM_1_OFFSET))(this, child, offset, topInRect, direction, ignoreMoveIfInView, time);
		}

		::System::Boolean get_IsInLineDeceleration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ISINLINEDECELERATION_OFFSET))(this);
		}

		::System::Void SetAnchoredPositionWithAnim(::UnityEngine::Vector2 endPos, ::System::Single time, ::System::Boolean needUniformSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETANCHOREDPOSITIONWITHANIM_OFFSET))(this, endPos, time, needUniformSpeed);
		}

		::System::Boolean get_ShareDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_SHAREDRAG_OFFSET))(this);
		}

		::System::Void set_ShareDrag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_SHAREDRAG_OFFSET))(this, value);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_IGNOREHANDLER_OFFSET))(this, eventData);
		}

		::System::Boolean get_ForbidDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_FORBIDDRAG_OFFSET))(this);
		}

		::System::Void set_ForbidDrag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_FORBIDDRAG_OFFSET))(this, value);
		}

		::System::Boolean get_NotFullAutoCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_NOTFULLAUTOCENTER_OFFSET))(this);
		}

		::System::Void set_NotFullAutoCenter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_NOTFULLAUTOCENTER_OFFSET))(this, value);
		}

		::System::Boolean get_NotFullCanScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_NOTFULLCANSCROLL_OFFSET))(this);
		}

		::System::Void set_NotFullCanScroll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_NOTFULLCANSCROLL_OFFSET))(this, value);
		}

		::System::Boolean get_IsVerticalCanNotScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ISVERTICALCANNOTSCROLL_OFFSET))(this);
		}

		::System::Boolean get_IsHorizontalCanNotScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ISHORIZONTALCANNOTSCROLL_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect_LayoutType get_ContentLayoutType()
		{
			return ((::UnityEngine::UI::ScrollRect_LayoutType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_CONTENTLAYOUTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentLayoutType(::UnityEngine::UI::ScrollRect_LayoutType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect_LayoutType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_CONTENTLAYOUTTYPE_OFFSET))(this, value);
		}

		::System::Void AutoSetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_AUTOSETPOSITION_OFFSET))(this);
		}

		::System::Void SetHorizontalScrollPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETHORIZONTALSCROLLPERCENT_OFFSET))(this, value);
		}

		::System::Void SetVerticalScrollPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETVERTICALSCROLLPERCENT_OFFSET))(this, value);
		}

		::System::Void SetScrollPercent(::System::Single value, ::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SETSCROLLPERCENT_OFFSET))(this, value, axis);
		}

		::System::Boolean CanScroll(::System::Boolean forceUpdateBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CANSCROLL_OFFSET))(this, forceUpdateBounds);
		}

		::System::Boolean CanAxisScroll(::System::Int32 axis, ::System::Boolean forceUpdateBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_CANAXISSCROLL_OFFSET))(this, axis, forceUpdateBounds);
		}

		::System::Boolean get_ReverseHorizontalScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_REVERSEHORIZONTALSCROLL_OFFSET))(this);
		}

		::System::Void set_ReverseHorizontalScroll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_REVERSEHORIZONTALSCROLL_OFFSET))(this, value);
		}

		::System::Boolean get_ForceReverseAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_FORCEREVERSEALIGN_OFFSET))(this);
		}

		::System::Void set_ForceReverseAlign(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_FORCEREVERSEALIGN_OFFSET))(this, value);
		}

		::UnityEngine::UI::ScrollRect_ReboundEvent* get_OnReboundEvent()
		{
			return ((::UnityEngine::UI::ScrollRect_ReboundEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_ONREBOUNDEVENT_OFFSET))(this);
		}

		::System::Boolean get_ReboundEventEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_GET_REBOUNDEVENTENABLE_OFFSET))(this);
		}

		::System::Void set_ReboundEventEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SET_REBOUNDEVENTENABLE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
