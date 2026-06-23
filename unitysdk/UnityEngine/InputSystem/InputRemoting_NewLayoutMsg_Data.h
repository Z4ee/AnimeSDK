#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewLayoutMsg_Data_TypeDefinitionIndex = 31653;

	struct alignas(8) InputRemoting_NewLayoutMsg_Data
	{
		::System::String* name; // 0x10
		::System::String* layoutJson; // 0x18
		::System::Boolean isOverride; // 0x20
	};
}
