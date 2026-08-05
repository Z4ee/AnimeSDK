#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class PointerCancelEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_1_OFFSET UNITYSDK_OFFSET(0x1D001E80)
#define UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_2_OFFSET UNITYSDK_OFFSET(0x1D001E90)
#define UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D001E70)
#define UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_MAKEFROMPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x1D001C90)
#define UNITYENGINE_UIELEMENTS_MOUSEUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D001EA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseUpEvent_TypeDefinitionIndex = 28138;

	class MouseUpEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseUpEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEUPEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseUpEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseUpEvent*(*)(::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_MAKEFROMPOINTEREVENT_OFFSET))(pointerEvent);
		}

		static ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseUpEvent*(*)(::UnityEngine::UIElements::PointerUpEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_OFFSET))(pointerEvent);
		}

		static ::UnityEngine::UIElements::MouseUpEvent* GetPooled_1(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseUpEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_1_OFFSET))(pointerEvent);
		}

		static ::UnityEngine::UIElements::MouseUpEvent* GetPooled_2(::UnityEngine::UIElements::PointerCancelEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseUpEvent*(*)(::UnityEngine::UIElements::PointerCancelEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEUPEVENT_GETPOOLED_2_OFFSET))(pointerEvent);
		}
	};
}
