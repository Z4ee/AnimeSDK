#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET UNITYSDK_OFFSET(0x1EDE7670)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventsHelper_TypeDefinitionIndex = 5963;

	class MouseEventsHelper : public ::System::Object
	{
	public:
		static ::System::Void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::VisualElement* a2, ::UnityEngine::UIElements::IMouseEvent* a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET))(a1, a2, a3, a4);
		}
	};
}
