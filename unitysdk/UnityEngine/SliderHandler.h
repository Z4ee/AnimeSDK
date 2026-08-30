#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EventType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Event; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class SliderState; }

#define UNITYENGINE_SLIDERHANDLER_CLAMPEDCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x3BACF80)
#define UNITYENGINE_SLIDERHANDLER_CLAMP_OFFSET UNITYSDK_OFFSET(0x3BACDD0)
#define UNITYENGINE_SLIDERHANDLER_CURRENTEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x3BACC50)
#define UNITYENGINE_SLIDERHANDLER_CURRENTEVENT_OFFSET UNITYSDK_OFFSET(0x3BACDB0)
#define UNITYENGINE_SLIDERHANDLER_CURRENTSCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x3BACC90)
#define UNITYENGINE_SLIDERHANDLER_HANDLE_OFFSET UNITYSDK_OFFSET(0x3BACBC0)
#define UNITYENGINE_SLIDERHANDLER_HORIZONTALTHUMBRECT_OFFSET UNITYSDK_OFFSET(0x3BACF60)
#define UNITYENGINE_SLIDERHANDLER_ISEMPTYSLIDER_OFFSET UNITYSDK_OFFSET(0x3BACCA0)
#define UNITYENGINE_SLIDERHANDLER_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x3BAD050)
#define UNITYENGINE_SLIDERHANDLER_MINVALUE_OFFSET UNITYSDK_OFFSET(0x3BAD060)
#define UNITYENGINE_SLIDERHANDLER_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x3BACFB0)
#define UNITYENGINE_SLIDERHANDLER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x3BACBD0)
#define UNITYENGINE_SLIDERHANDLER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x3BACBE0)
#define UNITYENGINE_SLIDERHANDLER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x3BACBF0)
#define UNITYENGINE_SLIDERHANDLER_ONREPAINT_OFFSET UNITYSDK_OFFSET(0x3BACC40)
#define UNITYENGINE_SLIDERHANDLER_PAGEMOVEMENTVALUE_OFFSET UNITYSDK_OFFSET(0x3BACD30)
#define UNITYENGINE_SLIDERHANDLER_PAGEUPMOVEMENTBOUND_OFFSET UNITYSDK_OFFSET(0x3BACD40)
#define UNITYENGINE_SLIDERHANDLER_SLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x3BACF10)
#define UNITYENGINE_SLIDERHANDLER_STARTDRAGGINGWITHVALUE_OFFSET UNITYSDK_OFFSET(0x3BACE50)
#define UNITYENGINE_SLIDERHANDLER_SUPPORTSPAGEMOVEMENTS_OFFSET UNITYSDK_OFFSET(0x3BACCC0)
#define UNITYENGINE_SLIDERHANDLER_THUMBEXTRECT_OFFSET UNITYSDK_OFFSET(0x3BACF20)
#define UNITYENGINE_SLIDERHANDLER_THUMBRECT_OFFSET UNITYSDK_OFFSET(0x3BACE00)
#define UNITYENGINE_SLIDERHANDLER_THUMBSELECTIONRECT_OFFSET UNITYSDK_OFFSET(0x3BACE00)
#define UNITYENGINE_SLIDERHANDLER_THUMBSIZE_OFFSET UNITYSDK_OFFSET(0x3BAD040)
#define UNITYENGINE_SLIDERHANDLER_VALUEFORCURRENTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x3BACDC0)
#define UNITYENGINE_SLIDERHANDLER_VALUESPERPIXEL_OFFSET UNITYSDK_OFFSET(0x3BAD030)
#define UNITYENGINE_SLIDERHANDLER_VERTICALTHUMBRECT_OFFSET UNITYSDK_OFFSET(0x3BACF40)
#define UNITYENGINE_SLIDERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BACB70)

namespace UnityEngine
{
	inline static constexpr unsigned int SliderHandler_TypeDefinitionIndex = 5190;

	struct alignas(8) SliderHandler
	{
		::UnityEngine::Rect position; // 0x10
		::System::Single currentValue; // 0x20
		::System::Single size; // 0x24
		::System::Single start; // 0x28
		::System::Single end; // 0x2C
		::UnityEngine::GUIStyle* slider; // 0x30
		::UnityEngine::GUIStyle* thumb; // 0x38
		::UnityEngine::GUIStyle* thumbExtent; // 0x40
		::System::Boolean horiz; // 0x48
		::System::Int32 id; // 0x4C

		::System::Void _ctor(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::GUIStyle* a10)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Single Handle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_HANDLE_OFFSET))(this);
		}

		::System::Single OnMouseDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_ONMOUSEDOWN_OFFSET))(this);
		}

		::System::Single OnMouseDrag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_ONMOUSEDRAG_OFFSET))(this);
		}

		::System::Single OnMouseUp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_ONMOUSEUP_OFFSET))(this);
		}

		::System::Single OnRepaint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_ONREPAINT_OFFSET))(this);
		}

		::UnityEngine::EventType CurrentEventType()
		{
			return ((::UnityEngine::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_CURRENTEVENTTYPE_OFFSET))(this);
		}

		::System::Int32 CurrentScrollTroughSide()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_CURRENTSCROLLTROUGHSIDE_OFFSET))(this);
		}

		::System::Boolean IsEmptySlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_ISEMPTYSLIDER_OFFSET))(this);
		}

		::System::Boolean SupportsPageMovements()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_SUPPORTSPAGEMOVEMENTS_OFFSET))(this);
		}

		::System::Single PageMovementValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_PAGEMOVEMENTVALUE_OFFSET))(this);
		}

		::System::Single PageUpMovementBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_PAGEUPMOVEMENTBOUND_OFFSET))(this);
		}

		::UnityEngine::Event* CurrentEvent()
		{
			return ((::UnityEngine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_CURRENTEVENT_OFFSET))(this);
		}

		::System::Single ValueForCurrentMousePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_VALUEFORCURRENTMOUSEPOSITION_OFFSET))(this);
		}

		::System::Single Clamp(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_CLAMP_OFFSET))(this, a1);
		}

		::UnityEngine::Rect ThumbSelectionRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_THUMBSELECTIONRECT_OFFSET))(this);
		}

		::System::Void StartDraggingWithValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_STARTDRAGGINGWITHVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::SliderState* SliderState()
		{
			return ((::UnityEngine::SliderState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_SLIDERSTATE_OFFSET))(this);
		}

		::UnityEngine::Rect ThumbExtRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_THUMBEXTRECT_OFFSET))(this);
		}

		::UnityEngine::Rect ThumbRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_THUMBRECT_OFFSET))(this);
		}

		::UnityEngine::Rect VerticalThumbRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_VERTICALTHUMBRECT_OFFSET))(this);
		}

		::UnityEngine::Rect HorizontalThumbRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_HORIZONTALTHUMBRECT_OFFSET))(this);
		}

		::System::Single ClampedCurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_CLAMPEDCURRENTVALUE_OFFSET))(this);
		}

		::System::Single MousePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Single ValuesPerPixel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_VALUESPERPIXEL_OFFSET))(this);
		}

		::System::Single ThumbSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_THUMBSIZE_OFFSET))(this);
		}

		::System::Single MaxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_MAXVALUE_OFFSET))(this);
		}

		::System::Single MinValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERHANDLER_MINVALUE_OFFSET))(this);
		}
	};
}
