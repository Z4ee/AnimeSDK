#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E831330)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_UIButtonExEvent_TypeDefinitionIndex = 85041;

	class UIButtonEx_UIButtonExEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEXEVENT__CTOR_OFFSET))(this);
		}
	};
}
