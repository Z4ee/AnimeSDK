#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IPointerEvent; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventBase_1_TypeDefinitionIndex = 6218;

	template <typename T>
	class MouseEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::UnityEngine::EventModifiers _modifiers_k__BackingField; // 0x0
		::UnityEngine::Vector2 _mousePosition_k__BackingField; // 0x0
		::UnityEngine::Vector2 _localMousePosition_k__BackingField; // 0x0
		::UnityEngine::Vector2 _mouseDelta_k__BackingField; // 0x0
		::System::Int32 _clickCount_k__BackingField; // 0x0
		::System::Int32 _button_k__BackingField; // 0x0
		::System::Int32 _pressedButtons_k__BackingField; // 0x0
		::System::Boolean _UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField; // 0x0
		::System::Boolean _UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField; // 0x0
		::UnityEngine::UIElements::IPointerEvent* _UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField; // 0x0
	};
}
