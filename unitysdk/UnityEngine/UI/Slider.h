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

#define UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7C690)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1BC7DF00)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1BC7DD50)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1BC7DDE0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1BC7DE70)
#define UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1BC7C850)
#define UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1BC7B320)
#define UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1BC79A50)
#define UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1BC7B250)
#define UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B480)
#define UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B3D0)
#define UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B7B0)
#define UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BC7B970)
#define UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7C800)
#define UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1BC7B990)
#define UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B5D0)
#define UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1BC7B530)
#define UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BC7BB20)
#define UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BC7BAE0)
#define UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1BC7D0B0)
#define UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BC7BCA0)
#define UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC7BBD0)
#define UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1BC7D650)
#define UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC7BB60)
#define UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1BC7DF90)
#define UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1BC7D7B0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BC7D1A0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BC7D5C0)
#define UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC7C990)
#define UNITYENGINE_UI_SLIDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1BC7BA90)
#define UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1BC7DFF0)
#define UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1BC7B740)
#define UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1BC7B330)
#define UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET UNITYSDK_OFFSET(0x1BC79A60)
#define UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1BC7B260)
#define UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B490)
#define UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B3E0)
#define UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B8D0)
#define UNITYENGINE_UI_SLIDER_SET_OFFSET UNITYSDK_OFFSET(0x1BC7C8A0)
#define UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BC7B980)
#define UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC7B6D0)
#define UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0x1BC7B540)
#define UNITYENGINE_UI_SLIDER_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BC7E340)
#define UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1BC79B20)
#define UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1BC7CA50)
#define UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1BC7A560)
#define UNITYENGINE_UI_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BC7BC20)
#define UNITYENGINE_UI_SLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7BA00)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1BC7E390)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1BC7E3A0)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1BC7E3B0)
#define UNITYENGINE_UI_SLIDER___BASE_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1BC7E3C0)
#define UNITYENGINE_UI_SLIDER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BC7E3D0)
#define UNITYENGINE_UI_SLIDER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC7E3E0)
#define UNITYENGINE_UI_SLIDER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC7E3F0)
#define UNITYENGINE_UI_SLIDER___BASE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1BC7E400)
#define UNITYENGINE_UI_SLIDER___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BC7E410)
#define UNITYENGINE_UI_SLIDER___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BC7E420)
#define UNITYENGINE_UI_SLIDER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC7E430)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 8445;

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
