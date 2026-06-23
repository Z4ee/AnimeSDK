#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_ClipData_TypeDefinitionIndex = 31128;

	struct alignas(1) SVGDocument_ClipData
	{
		::System::Boolean WorldRelative; // 0x10
	};
}
