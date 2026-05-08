#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET UNITYSDK_OFFSET(0x197A77B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventsHelper_TypeDefinitionIndex = 25043;

	class MouseEventsHelper : public ::System::Object
	{
	public:
		static ::System::Void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET))(previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
		}
	};
}
