#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/FormatFlags.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormatFlag_TypeDefinitionIndex = 5039;

	struct alignas(4) TextFormatFlag
	{
		::System::Int32 startPosition; // 0x10
		::System::Int32 skipCharacters; // 0x14
		::UnityEngine::FormatFlags flags; // 0x18
	};
}
