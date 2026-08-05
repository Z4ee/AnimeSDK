#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine::UIElements { class PointerMoveEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D001B90)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D001BD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseMoveEvent_TypeDefinitionIndex = 28139;

	class MouseMoveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseMoveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent)
		{
			return ((::UnityEngine::UIElements::MouseMoveEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET))(pointerEvent);
		}
	};
}
