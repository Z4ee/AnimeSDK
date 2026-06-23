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

#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_1_OFFSET UNITYSDK_OFFSET(0x1E61F230)
#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET UNITYSDK_OFFSET(0x1E61F2C0)
#define UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1E61E6F0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1E61FBC0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1E61FA10)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1E61FAA0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1E61FB30)
#define UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1E61E1A0)
#define UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1E61D7B0)
#define UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1E61CE40)
#define UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1E61DD40)
#define UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E61DDD0)
#define UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E61E1F0)
#define UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E61DC90)
#define UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1E61DDF0)
#define UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E61D8F0)
#define UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E61DEF0)
#define UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E61DEB0)
#define UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1E61E830)
#define UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1E61E920)
#define UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E61E030)
#define UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1E61ED90)
#define UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E61DF30)
#define UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1E61FC50)
#define UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1E61F400)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E61F000)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E61F3A0)
#define UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E61E0E0)
#define UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET UNITYSDK_OFFSET(0x1E61DE60)
#define UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E61FCB0)
#define UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1E61DB90)
#define UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1E61D7C0)
#define UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1E61CE50)
#define UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1E61DD50)
#define UNITYENGINE_UI_SCROLLBAR_SET_OFFSET UNITYSDK_OFFSET(0x1E61DA70)
#define UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E61DDE0)
#define UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E61DCA0)
#define UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E61DA10)
#define UNITYENGINE_UI_SCROLLBAR_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E620000)
#define UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E61CF10)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1E61E240)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1E61D220)
#define UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E61E080)
#define UNITYENGINE_UI_SCROLLBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61D860)
#define UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1E620050)
#define UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1E620060)
#define UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1E620070)
#define UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1E620080)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E620090)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6200A0)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1E6200B0)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E6200C0)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E6200D0)
#define UNITYENGINE_UI_SCROLLBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E6200E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_TypeDefinitionIndex = 18941;

	class Scrollbar : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::RectTransform* m_HandleRect; // 0xF8
		::UnityEngine::UI::Scrollbar_Direction m_Direction; // 0x100
		::System::Single m_Value; // 0x104
		::System::Single m_Size; // 0x108
		::System::Int32 m_NumberOfSteps; // 0x10C
		::UnityEngine::UI::Scrollbar_ScrollEvent* m_OnValueChanged; // 0x110
		::UnityEngine::RectTransform* m_ContainerRect; // 0x118
		::UnityEngine::Vector2 m_Offset; // 0x120
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x128
		::UnityEngine::Coroutine* m_PointerDownRepeat; // 0x130
		::System::Boolean isPointerDownAndNotDragging; // 0x138
		::System::Boolean m_DelayedUpdateVisuals; // 0x139

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

		::UnityEngine::UI::Selectable* __base_FindSelectableOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONDOWN_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONLEFT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONRIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* __base_FindSelectableOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_FINDSELECTABLEONUP_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnMove(::UnityEngine::EventSystems::AxisEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONMOVE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
