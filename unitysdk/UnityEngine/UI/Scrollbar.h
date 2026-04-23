#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Scrollbar_Axis.h"
#include "unitysdk/UnityEngine/UI/Scrollbar_Direction.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Scrollbar_ScrollEvent; }

#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_1_OFFSET UNITYSDK_OFFSET(0x1A59EE80)
#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET UNITYSDK_OFFSET(0x1A59EEE0)
#define UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1A59EA40)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1A59F670)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1A59F610)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1A59F630)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1A59F650)
#define UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1A59E610)
#define UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A59DCD0)
#define UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1A59D930)
#define UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1A59E350)
#define UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A59E420)
#define UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1A59E620)
#define UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A59E340)
#define UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1A59E440)
#define UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A59DF00)
#define UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A59E490)
#define UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A59E480)
#define UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1A59EAC0)
#define UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1A59EB20)
#define UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A59E5B0)
#define UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A59ED10)
#define UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A59E4A0)
#define UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1A59FD10)
#define UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A59F120)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A59ED90)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A59EF80)
#define UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A59E5E0)
#define UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A59E470)
#define UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A59FD30)
#define UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A59E220)
#define UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A59DCE0)
#define UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1A59D940)
#define UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1A59E360)
#define UNITYENGINE_UI_SCROLLBAR_SET_OFFSET UNITYSDK_OFFSET(0x1A59DFF0)
#define UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A59E430)
#define UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A59A010)
#define UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A59A1C0)
#define UNITYENGINE_UI_SCROLLBAR_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A59FEF0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A59D9D0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1A59E630)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1A59DAA0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A59E5C0)
#define UNITYENGINE_UI_SCROLLBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59DD90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_TypeDefinitionIndex = 5712;

	class Scrollbar : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::RectTransform* m_HandleRect; // 0x108
		::UnityEngine::UI::Scrollbar_Direction m_Direction; // 0x110
		::System::Single m_Value; // 0x114
		::System::Single m_Size; // 0x118
		::System::Int32 m_NumberOfSteps; // 0x11C
		::UnityEngine::UI::Scrollbar_ScrollEvent* m_OnValueChanged; // 0x120
		::UnityEngine::RectTransform* m_ContainerRect; // 0x128
		::UnityEngine::Vector2 m_Offset; // 0x130
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x138
		::UnityEngine::Coroutine* m_PointerDownRepeat; // 0x140
		::System::Boolean isPointerDownAndNotDragging; // 0x148
		::System::Boolean m_DelayedUpdateVisuals; // 0x149

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_handleRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET))(this);
		}

		::System::Void set_handleRect(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Scrollbar_Direction get_direction()
		{
			return ((::UnityEngine::UI::Scrollbar_Direction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::UI::Scrollbar_Direction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetValueWithoutNotify(::System::Single input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET))(this, input);
		}

		::System::Single get_size()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET))(this, value);
		}

		::System::Int32 get_numberOfSteps()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET))(this);
		}

		::System::Void set_numberOfSteps(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET))(this, value);
		}

		::UnityEngine::UI::Scrollbar_ScrollEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Scrollbar_ScrollEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_ScrollEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Single get_stepSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET))(this, executing);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateCachedReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET))(this);
		}

		::System::Void Set(::System::Single input, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_OFFSET))(this, input, sendCallback);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::UnityEngine::UI::Scrollbar_Axis get_axis()
		{
			return ((::UnityEngine::UI::Scrollbar_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET))(this);
		}

		::System::Boolean get_reverseValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET))(this);
		}

		::System::Void UpdateVisuals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET))(this);
		}

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET))(this, eventData);
		}

		::System::Void DoUpdateDrag(::UnityEngine::Vector2 handleCorner, ::System::Single remainingSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET))(this, handleCorner, remainingSize);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET))(this, eventData);
		}

		::System::Collections::IEnumerator* ClickRepeat_1(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Camera* camera)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_1_OFFSET))(this, screenPosition, camera);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET))(this, eventData);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET))(this);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void SetDirection(::UnityEngine::UI::Scrollbar_Direction direction, ::System::Boolean includeRectLayouts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET))(this, direction, includeRectLayouts);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
