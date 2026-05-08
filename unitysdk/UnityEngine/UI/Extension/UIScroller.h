#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Extension/UIScroller_Direction.h"
#include "unitysdk/UnityEngine/UI/Extension/UIScroller_MovementType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIScroller_OnCompleted; }
namespace UnityEngine::UI::Extension { class UIScroller_OnValueChanged; }

#define UNITYENGINE_UI_EXTENSION_UISCROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D5BBF0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18D5E1C0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18D5E200)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATEOFFSET_OFFSET UNITYSDK_OFFSET(0x18D5C2C0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ENSURELAYOUTHASREBUILT_OFFSET UNITYSDK_OFFSET(0x18D5BFC0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x18D5E380)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x18D5E330)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18D5D870)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18D5E290)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18D5E260)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18D5E2A0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18D5E270)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18D5E240)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_CONTENT_OFFSET UNITYSDK_OFFSET(0x18D5B2A0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_DRAGGING_OFFSET UNITYSDK_OFFSET(0x18D5B2E0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18D5B2C0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18D5D860)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18D5E280)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18D5E250)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x18D5B300)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18D5BBB0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18D5BE00)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D5CBC0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18D5BB70)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18D5C490)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D5E980)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18D5BD20)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18D5C6E0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18D5BCB0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18D5C680)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x18D5C420)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18D5D800)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18D5E0D0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18D5C050)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_REBUILD_OFFSET UNITYSDK_OFFSET(0x18D5B520)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_RUBBERDELTA_OFFSET UNITYSDK_OFFSET(0x18D5C9C0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETCONTENTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x18D5CA70)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETDIRTYCACHING_OFFSET UNITYSDK_OFFSET(0x18D5E8E0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x18D5E120)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18D5E2B0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18D5E2F0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18D5DB80)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_CONTENT_OFFSET UNITYSDK_OFFSET(0x18D5B2B0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_DRAGGING_OFFSET UNITYSDK_OFFSET(0x18D5B2F0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18D5B2D0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x18D5DB20)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x18D5B380)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18D5E9F0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18D5B580)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_UPDATEPREVDATA_OFFSET UNITYSDK_OFFSET(0x18D5B9A0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5B440)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D5EA40)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18D5EAD0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D5EB60)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18D5EBF0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18D5EC80)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18D5ED10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIScroller_TypeDefinitionIndex = 68553;

	class UIScroller : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UIScroller_OnValueChanged* onValueChanged; // 0x18
		::UnityEngine::UI::Extension::UIScroller_OnCompleted* onCompleted; // 0x20
		::UnityEngine::UI::Extension::UIScroller_Direction m_Direction; // 0x28
		::UnityEngine::UI::Extension::UIScroller_MovementType m_MovementType; // 0x2C
		::System::Single m_Elasticity; // 0x30
		::System::Boolean m_Inertia; // 0x34
		::System::Single m_DecelerationRate; // 0x38
		::System::Single m_ScrollSensitivity; // 0x3C
		::System::Boolean m_ScrollerDirty; // 0x40
		::System::Boolean m_DragActive; // 0x41
		::System::Boolean m_canScroll; // 0x42
		::UnityEngine::RectTransform* _m_Content_k__BackingField; // 0x48
		::UnityEngine::RectTransform* _m_RectTransform_k__BackingField; // 0x50
		::System::Boolean _m_Dragging_k__BackingField; // 0x58
		::UnityEngine::Vector2 m_Velocity; // 0x5C
		::UnityEngine::Vector2 m_PointerStartLocalCursor; // 0x64
		::UnityEngine::Vector2 m_ContentStartPosition; // 0x6C
		::UnityEngine::Bounds m_ContentBounds; // 0x74
		::UnityEngine::Bounds m_ViewBounds; // 0x8C
		::UnityEngine::Vector2 m_PrevPosition; // 0xA4
		::UnityEngine::Bounds m_PrevContentBounds; // 0xAC
		::UnityEngine::Bounds m_PrevViewBounds; // 0xC4
		::System::Boolean m_HasRebuiltLayout; // 0xDC
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_m_Content()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_CONTENT_OFFSET))(this);
		}

		::System::Void set_m_Content(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_CONTENT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_m_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_m_RectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_RECTTRANSFORM_OFFSET))(this, value);
		}

		::System::Boolean get_m_Dragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_M_DRAGGING_OFFSET))(this);
		}

		::System::Void set_m_Dragging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_M_DRAGGING_OFFSET))(this, value);
		}

		::System::Single get_velocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_VELOCITY_OFFSET))(this, value);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_REBUILD_OFFSET))(this, executing);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ISACTIVE_OFFSET))(this);
		}

		::System::Void EnsureLayoutHasRebuilt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ENSURELAYOUTHASREBUILT_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONSCROLL_OFFSET))(this, data);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void SetContentAnchoredPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETCONTENTANCHOREDPOSITION_OFFSET))(this, position);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnPositionChanged(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONPOSITIONCHANGED_OFFSET))(this, val);
		}

		::System::Void UpdatePrevData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_UPDATEPREVDATA_OFFSET))(this);
		}

		::System::Single get_normalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_NORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void set_normalizedPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SET_NORMALIZEDPOSITION_OFFSET))(this, value);
		}

		::System::Single GetNormalizedPosition(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GETNORMALIZEDPOSITION_OFFSET))(this, axis);
		}

		::System::Void SetNormalizedPosition(::System::Single value, ::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETNORMALIZEDPOSITION_OFFSET))(this, value, axis);
		}

		static ::System::Single RubberDelta(::System::Single overStretching, ::System::Single viewSize)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_RUBBERDELTA_OFFSET))(overStretching, viewSize);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GETCOLROW_OFFSET))(this);
		}

		::System::Void UpdateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_UPDATEBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Bounds GetBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_GETBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Vector2 CalculateOffset(::UnityEngine::Vector2 delta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_CALCULATEOFFSET_OFFSET))(this, delta);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETDIRTY_OFFSET))(this);
		}

		::System::Void SetDirtyCaching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_SETDIRTYCACHING_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
