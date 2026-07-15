#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SDFSectorCoord_TypeDefinitionIndex = 4251;

	struct alignas(4) SDFSectorCoord
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 clipmapLevel; // 0x1C
	};
}
