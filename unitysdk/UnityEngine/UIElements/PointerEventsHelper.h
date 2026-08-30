#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET UNITYSDK_OFFSET(0x1EDE72F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventsHelper_TypeDefinitionIndex = 5964;

	class PointerEventsHelper : public ::System::Object
	{
	public:
		static ::System::Void SendOverOut(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::VisualElement* a2, ::UnityEngine::UIElements::IPointerEvent* a3, ::UnityEngine::Vector2 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
