#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_Resources_TypeDefinitionIndex = 5867;

	struct alignas(8) DefaultControls_Resources
	{
		::UnityEngine::Sprite* standard; // 0x10
		::UnityEngine::Sprite* background; // 0x18
		::UnityEngine::Sprite* inputField; // 0x20
		::UnityEngine::Sprite* knob; // 0x28
		::UnityEngine::Sprite* checkmark; // 0x30
		::UnityEngine::Sprite* dropdown; // 0x38
		::UnityEngine::Sprite* mask; // 0x40
	};
}
