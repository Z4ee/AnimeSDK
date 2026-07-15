#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAVariantKey_TypeDefinitionIndex = 4770;

	struct alignas(8) BAVariantKey
	{
		::System::String* keyStr; // 0x10
		::System::UInt32 internalkey; // 0x18
	};
}
