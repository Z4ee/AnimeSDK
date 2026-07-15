#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine
{
	inline static constexpr unsigned int UICharInfo_TypeDefinitionIndex = 5034;

	struct alignas(4) UICharInfo
	{
		::UnityEngine::Vector2 cursorPos; // 0x10
		::System::Single charWidth; // 0x18
	};
}
