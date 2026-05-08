#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_PatternData_TypeDefinitionIndex = 28474;

	struct alignas(4) SVGDocument_PatternData
	{
		::System::Boolean WorldRelative; // 0x10
		::System::Boolean ContentWorldRelative; // 0x11
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D PatternTransform; // 0x14
	};
}
