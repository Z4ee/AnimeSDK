#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class GradientFill; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_PostponedStopData_TypeDefinitionIndex = 28478;

	struct alignas(8) SVGDocument_PostponedStopData
	{
		::ToolBuddy::ThirdParty::VectorGraphics::GradientFill* fill; // 0x10
	};
}
