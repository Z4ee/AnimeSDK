#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_GETPOOLED_1_OFFSET UNITYSDK_OFFSET(0x197B2A70)
#define UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x197B2A60)
#define UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_MAKEFROMPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x197B28A0)
#define UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x197B2A80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseDownEvent_TypeDefinitionIndex = 25032;

	class MouseDownEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseDownEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseDownEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseDownEvent*(*)(::UnityEngine::UIElements::IPointerEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_MAKEFROMPOINTEREVENT_OFFSET))(pointerEvent);
		}

		static ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerDownEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseDownEvent*(*)(::UnityEngine::UIElements::PointerDownEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_GETPOOLED_OFFSET))(pointerEvent);
		}

		static ::UnityEngine::UIElements::MouseDownEvent* GetPooled_1(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseDownEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEDOWNEVENT_GETPOOLED_1_OFFSET))(pointerEvent);
		}
	};
}
