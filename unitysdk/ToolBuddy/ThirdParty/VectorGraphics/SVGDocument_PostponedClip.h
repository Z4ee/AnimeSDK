#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_PostponedClip_TypeDefinitionIndex = 31753;

	struct alignas(8) SVGDocument_PostponedClip
	{
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node; // 0x10
	};
}
