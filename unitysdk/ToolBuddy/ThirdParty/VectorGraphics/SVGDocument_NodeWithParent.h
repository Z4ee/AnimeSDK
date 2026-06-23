#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_NodeWithParent_TypeDefinitionIndex = 31131;

	struct alignas(8) SVGDocument_NodeWithParent
	{
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* parent; // 0x18
	};
}
