#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SCROLLRECTEXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D58A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ScrollRectEx_ScrollRectExEvent_TypeDefinitionIndex = 86532;

	class ScrollRectEx_ScrollRectExEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SCROLLRECTEXEVENT__CTOR_OFFSET))(this);
		}
	};
}
