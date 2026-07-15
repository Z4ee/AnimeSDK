#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BANodeHash_TypeDefinitionIndex = 4779;

	struct alignas(4) BANodeHash
	{
		::System::Int32 hash; // 0x10
		::System::Byte nodeType; // 0x14
		::System::SByte nodeIndex; // 0x15
		::System::UInt16 paramOffset; // 0x16
	};
}
