#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SpriteElement_TypeDefinitionIndex = 5972;

	struct alignas(4) SpriteElement
	{
		::System::Int32 instanceID; // 0x10
		::System::Boolean packed; // 0x14
		::System::Boolean holdingRef; // 0x15
		::UnityEngine::Vector2 size; // 0x18
	};
}
