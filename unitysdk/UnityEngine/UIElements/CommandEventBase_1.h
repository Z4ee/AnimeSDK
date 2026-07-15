#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace System { class String; }
namespace UnityEngine { class Event; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CommandEventBase_1_TypeDefinitionIndex = 6177;

	template <typename T>
	class CommandEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::System::String* m_CommandName; // 0x0
	};
}
