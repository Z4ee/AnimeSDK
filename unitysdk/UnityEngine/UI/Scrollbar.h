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

#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_1_OFFSET UNITYSDK_OFFSET(0x1B3EAC10)
#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET UNITYSDK_OFFSET(0x1B3EAC70)
#define UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EA7C0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1B3EB3F0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1B3EB390)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1B3EB3B0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1B3EB3D0)
#define UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x1B3EA390)
#define UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3E9A50)
#define UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1B3E96B0)
#define UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1B3EA0D0)
#define UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3EA1A0)
#define UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0x1B3EA3A0)
#define UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B3EA0C0)
#define UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0x1B3EA1C0)
#define UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3E9C80)
#define UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3EA210)
#define UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3EA200)
#define UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EA850)
#define UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EA8B0)
#define UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3EA330)
#define UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EAAA0)
#define UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3EA220)
#define UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EBA90)
#define UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1B3EAEB0)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3EAB20)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1B3EAD10)
#define UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B3EA360)
#define UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B3EA1F0)
#define UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3EBAB0)
#define UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B3E9FA0)
#define UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3E9A60)
#define UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0x1B3E96C0)
#define UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0x1B3EA0E0)
#define UNITYENGINE_UI_SCROLLBAR_SET_OFFSET UNITYSDK_OFFSET(0x1B3E9D70)
#define UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3EA1B0)
#define UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B3E5E00)
#define UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3E5F30)
#define UNITYENGINE_UI_SCROLLBAR_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3EBC70)
#define UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1B3E9750)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x1B3EA3B0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0x1B3E9820)
#define UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3EA340)
#define UNITYENGINE_UI_SCROLLBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E9B10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_TypeDefinitionIndex = 5989;

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

		::System::Void set_handleRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Scrollbar_Direction get_direction()
		{
			return ((::UnityEngine::UI::Scrollbar_Direction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::UI::Scrollbar_Direction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void SetValueWithoutNotify(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET))(this, a1);
		}

		::System::Single get_size()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_numberOfSteps()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET))(this);
		}

		::System::Void set_numberOfSteps(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Scrollbar_ScrollEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Scrollbar_ScrollEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_ScrollEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Single get_stepSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET))(this, a1);
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

		::System::Void Set(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_OFFSET))(this, a1, a2);
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

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET))(this, a1);
		}

		::System::Void DoUpdateDrag(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* ClickRepeat_1(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET))(this, a1);
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

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void SetDirection(::UnityEngine::UI::Scrollbar_Direction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Scrollbar_Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
