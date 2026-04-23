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

#define UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A46F0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1A5A58C0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1A5A5860)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1A5A5880)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1A5A58A0)
#define UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1A5A47E0)
#define UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A5A3AC0)
#define UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1A5A3160)
#define UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1A5A3A20)
#define UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3C70)
#define UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3B80)
#define UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3F40)
#define UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A5A4060)
#define UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A47D0)
#define UNITYENGINE_UI_SLIDER_GET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A5AC0)
#define UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1A5A4080)
#define UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3E40)
#define UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1A5A3D60)
#define UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A5A4270)
#define UNITYENGINE_UI_SLIDER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5A5AE0)
#define UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A5A4260)
#define UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A5020)
#define UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A5A4320)
#define UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A5A42C0)
#define UNITYENGINE_UI_SLIDER_ONDRAGMOVED_OFFSET UNITYSDK_OFFSET(0x1A5A4990)
#define UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A55D0)
#define UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5A4280)
#define UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A58E0)
#define UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A5A5660)
#define UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A5A5320)
#define UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A5A5080)
#define UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A5A4960)
#define UNITYENGINE_UI_SLIDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A5A4250)
#define UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A5A5900)
#define UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A5A3F20)
#define UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A5A3AD0)
#define UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1A5A3170)
#define UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1A5A3A30)
#define UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3C80)
#define UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3B90)
#define UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1A5A4010)
#define UNITYENGINE_UI_SLIDER_SET_OFFSET UNITYSDK_OFFSET(0x1A5A47F0)
#define UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A5A4070)
#define UNITYENGINE_UI_SLIDER_SET_SHAREDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A5AD0)
#define UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A5A3F00)
#define UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1A5A3D70)
#define UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A5A5BA0)
#define UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A5A3200)
#define UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1A5A49A0)
#define UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1A5A3550)
#define UNITYENGINE_UI_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A5A42D0)
#define UNITYENGINE_UI_SLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A40B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 5722;

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

		::System::Void set_fillRect(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_handleRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET))(this);
		}

		::System::Void set_handleRect(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Slider_Direction get_direction()
		{
			return ((::UnityEngine::UI::Slider_Direction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::UI::Slider_Direction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Single get_minValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_minValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET))(this, value);
		}

		::System::Single get_maxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_maxValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_wholeNumbers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET))(this);
		}

		::System::Void set_wholeNumbers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET))(this, value);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetValueWithoutNotify(::System::Single input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET))(this, input);
		}

		::System::Single get_normalizedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET))(this);
		}

		::System::Void set_normalizedValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Slider_SliderEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Slider_SliderEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Slider_SliderEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_SliderEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Single get_stepSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_REBUILD_OFFSET))(this, executing);
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

		::System::Single ClampValue(::System::Single input)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET))(this, input);
		}

		::System::Void Set(::System::Single input, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_OFFSET))(this, input, sendCallback);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDragMoved(::System::Single oldValue, ::System::Single newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDRAGMOVED_OFFSET))(this, oldValue, newValue);
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

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Camera* cam, ::System::Boolean ignoreDirecCheck)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET))(this, eventData, cam, ignoreDirecCheck);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET))(this, eventData);
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

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void SetDirection(::UnityEngine::UI::Slider_Direction direction, ::System::Boolean includeRectLayouts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider_Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET))(this, direction, includeRectLayouts);
		}

		::System::Boolean get_ShareDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_SHAREDRAG_OFFSET))(this);
		}

		::System::Void set_ShareDrag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_SHAREDRAG_OFFSET))(this, value);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_IGNOREHANDLER_OFFSET))(this, eventData);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
