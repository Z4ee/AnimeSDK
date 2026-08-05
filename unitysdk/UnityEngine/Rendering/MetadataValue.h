#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MetadataValue_TypeDefinitionIndex = 6222;

	struct alignas(4) MetadataValue
	{
		::System::Int32 NameID; // 0x10
		::System::UInt32 Value; // 0x14
	};
}
