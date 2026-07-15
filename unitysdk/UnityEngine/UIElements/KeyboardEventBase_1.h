#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace UnityEngine { class Event; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardEventBase_1_TypeDefinitionIndex = 6210;

	template <typename T>
	class KeyboardEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::UnityEngine::EventModifiers _modifiers_k__BackingField; // 0x0
		::System::Char _character_k__BackingField; // 0x0
		::UnityEngine::KeyCode _keyCode_k__BackingField; // 0x0
	};
}
