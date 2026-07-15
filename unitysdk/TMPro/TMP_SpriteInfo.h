#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteInfo_TypeDefinitionIndex = 41882;

	struct alignas(4) TMP_SpriteInfo
	{
		::System::Int32 spriteIndex; // 0x10
		::System::Int32 characterIndex; // 0x14
		::System::Int32 vertexIndex; // 0x18
	};
}
