#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_MaskData_TypeDefinitionIndex = 31749;

	struct alignas(1) SVGDocument_MaskData
	{
		::System::Boolean WorldRelative; // 0x10
		::System::Boolean ContentWorldRelative; // 0x11
	};
}
