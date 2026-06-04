#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"
#include "unitysdk/UnityEngine/UI/Slider_Axis.h"
#include "unitysdk/UnityEngine/UI/Slider_Direction.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider_SliderEvent; }
namespace UnityEngine::UI { class TouchFilter; }

#define UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1B3F01A0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1B3F1430)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1B3F13D0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1B3F13F0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1B3F1410)
#define UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1B3F0290)
#define UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3EF690)
#define UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1B3EECC0)
#define UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1B3EF5F0)
#define UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF7B0)
#define UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF750)
#define UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF9F0)
#define UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3EFB10)
#define UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1B3F0280)
#define UNITYENGINE_UI_SLIDER_GET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F1630)
#define UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1B3EFB30)
#define UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF8F0)
#define UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1B3EF810)
#define UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3EFD20)
#define UNITYENGINE_UI_SLIDER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3F1650)
#define UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3EFD10)
#define UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F0B90)
#define UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3EFDD0)
#define UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3EFD70)
#define UNITYENGINE_UI_SLIDER_ONDRAGMOVED_OFFSET UNITYSDK_OFFSET(0x1B3F0440)
#define UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F1140)
#define UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3EFD30)
#define UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F1450)
#define UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1B3F11D0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3F0E90)
#define UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1B3F0BF0)
#define UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B3F0410)
#define UNITYENGINE_UI_SLIDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B3EFD00)
#define UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3F1470)
#define UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B3EF9D0)
#define UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3EF6A0)
#define UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1B3EECD0)
#define UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1B3EF600)
#define UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF7C0)
#define UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF760)
#define UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EFAC0)
#define UNITYENGINE_UI_SLIDER_SET_OFFSET UNITYSDK_OFFSET(0x1B3F02A0)
#define UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3EFB20)
#define UNITYENGINE_UI_SLIDER_SET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F1640)
#define UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3EF9B0)
#define UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1B3EF820)
#define UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3F1760)
#define UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1B3EED60)
#define UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1B3F0450)
#define UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1B3EF0B0)
#define UNITYENGINE_UI_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3EFD80)
#define UNITYENGINE_UI_SLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3EFB60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 5999;

	class Slider : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::RectTransform* m_FillRect; // 0x108
		::UnityEngine::RectTransform* m_HandleRect; // 0x110
		::UnityEngine::UI::Slider_Direction m_Direction; // 0x118
		::System::Single m_MinValue; // 0x11C
		::System::Single m_MaxValue; // 0x120
		::System::Boolean m_WholeNumbers; // 0x124
		::System::Single m_Value; // 0x128
		::UnityEngine::UI::Slider_SliderEvent* m_OnValueChanged; // 0x130
		::UnityEngine::UI::Image* m_FillImage; // 0x138
		::UnityEngine::Transform* m_FillTransform; // 0x140
		::UnityEngine::RectTransform* m_FillContainerRect; // 0x148
		::UnityEngine::Transform* m_HandleTransform; // 0x150
		::UnityEngine::RectTransform* m_HandleContainerRect; // 0x158
		::UnityEngine::Vector2 m_Offset; // 0x160
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x168
		::System::Boolean m_DelayedUpdateVisuals; // 0x169
		::UnityEngine::UI::TouchFilter* touchFilter; // 0x170
		::System::Boolean m_shareDrag; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_fillRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET))(this);
		}

		::System::Void set_fillRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_handleRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET))(this);
		}

		::System::Void set_handleRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Slider_Direction get_direction()
		{
			return ((::UnityEngine::UI::Slider_Direction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::UI::Slider_Direction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::Single get_minValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_minValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET))(this, a1);
		}

		::System::Single get_maxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_maxValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_wholeNumbers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET))(this);
		}

		::System::Void set_wholeNumbers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET))(this, a1);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void SetValueWithoutNotify(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET))(this, a1);
		}

		::System::Single get_normalizedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET))(this);
		}

		::System::Void set_normalizedValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Slider_SliderEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Slider_SliderEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Slider_SliderEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_SliderEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Single get_stepSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_REBUILD_OFFSET))(this, a1);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void UpdateCachedReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET))(this);
		}

		::System::Single ClampValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_OFFSET))(this, a1, a2);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDragMoved(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDRAGMOVED_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UI::Slider_Axis get_axis()
		{
			return ((::UnityEngine::UI::Slider_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET))(this);
		}

		::System::Boolean get_reverseValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET))(this);
		}

		::System::Void UpdateVisuals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET))(this);
		}

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET))(this);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void SetDirection(::UnityEngine::UI::Slider_Direction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ShareDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_SHAREDRAG_OFFSET))(this);
		}

		::System::Void set_ShareDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_SHAREDRAG_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
