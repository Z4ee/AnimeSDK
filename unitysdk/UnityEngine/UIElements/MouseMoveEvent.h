#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine::UIElements { class PointerMoveEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1B35E6C0)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35E700)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseMoveEvent_TypeDefinitionIndex = 6216;

	class MouseMoveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseMoveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* a1)
		{
			return ((::UnityEngine::UIElements::MouseMoveEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET))(a1);
		}
	};
}
