#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"
#include "unitysdk/UnityEngine/UI/Slider_Axis.h"
#include "unitysdk/UnityEngine/UI/Slider_Direction.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider_SliderEvent; }

#define UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1F38B0C0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1F38C910)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1F38C760)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1F38C7F0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1F38C880)
#define UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1F38B280)
#define UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1F389D50)
#define UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1F3887F0)
#define UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1F389C80)
#define UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1F389EB0)
#define UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1F389E00)
#define UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1F38A1E0)
#define UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1F38A3A0)
#define UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1F38B230)
#define UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1F38A3C0)
#define UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F38A000)
#define UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1F389F60)
#define UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F38A550)
#define UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F38A510)
#define UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1F38BAE0)
#define UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F38A6D0)
#define UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F38A600)
#define UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1F38C080)
#define UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F38A590)
#define UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1F38C9A0)
#define UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1F38C1E0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F38BBD0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F38BFF0)
#define UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F38B3C0)
#define UNITYENGINE_UI_SLIDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1F38A4C0)
#define UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F38CA00)
#define UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1F38A170)
#define UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1F389D60)
#define UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1F388800)
#define UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1F389C90)
#define UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1F389EC0)
#define UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1F389E10)
#define UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1F38A300)
#define UNITYENGINE_UI_SLIDER_SET_OFFSET UNITYSDK_OFFSET(0x1F38B2D0)
#define UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1F38A3B0)
#define UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F38A100)
#define UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1F389F70)
#define UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F38CD50)
#define UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F3888C0)
#define UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1F38B480)
#define UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1F389020)
#define UNITYENGINE_UI_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F38A650)
#define UNITYENGINE_UI_SLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F38A430)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1F38CDA0)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1F38CDB0)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1F38CDC0)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1F38CDD0)
#define UNITYENGINE_UI_SLIDER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F38CDE0)
#define UNITYENGINE_UI_SLIDER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F38CDF0)
#define UNITYENGINE_UI_SLIDER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F38CE00)
#define UNITYENGINE_UI_SLIDER___BASE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1F38CE10)
#define UNITYENGINE_UI_SLIDER___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F38CE20)
#define UNITYENGINE_UI_SLIDER___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F38CE30)
#define UNITYENGINE_UI_SLIDER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F38CE40)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 19297;

	class Slider : public ::UnityEngine::UI::Selectable
	{
	public:
		::System::Boolean EasyClamp; // 0xF8
		::UnityEngine::RectTransform* m_FillRect; // 0x100
		::UnityEngine::RectTransform* m_HandleRect; // 0x108
		::UnityEngine::UI::Slider_Direction m_Direction; // 0x110
		::System::Single m_MinValue; // 0x114
		::System::Single m_MaxValue; // 0x118
		::System::Boolean m_WholeNumbers; // 0x11C
		::System::Single m_Value; // 0x120
		::UnityEngine::UI::Slider_SliderEvent* m_OnValueChanged; // 0x128
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerUpHandle; // 0x130
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerDownHandle; // 0x138
		::UnityEngine::UI::Image* m_FillImage; // 0x140
		::UnityEngine::Transform* m_FillTransform; // 0x148
		::UnityEngine::RectTransform* m_FillContainerRect; // 0x150
		::UnityEngine::Transform* m_HandleTransform; // 0x158
		::UnityEngine::RectTransform* m_HandleContainerRect; // 0x160
		::UnityEngine::Vector2 m_Offset; // 0x168
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x170
		::System::Boolean m_DelayedUpdateVisuals; // 0x171

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

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET))(this, eventData, cam);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET))(this, eventData);
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

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONDOWN_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONLEFT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONRIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONUP_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnMove(::UnityEngine::EventSystems::AxisEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONMOVE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
