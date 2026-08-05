#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET UNITYSDK_OFFSET(0x1CFF5770)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventsHelper_TypeDefinitionIndex = 28149;

	class PointerEventsHelper : public ::System::Object
	{
	public:
		static ::System::Void SendOverOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer, ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, ::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET))(previousTopElementUnderPointer, currentTopElementUnderPointer, triggerEvent, position, pointerId);
		}
	};
}
