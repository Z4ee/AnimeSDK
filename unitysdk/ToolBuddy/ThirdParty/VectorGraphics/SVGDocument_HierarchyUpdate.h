#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_HierarchyUpdate_TypeDefinitionIndex = 31739;

	struct alignas(8) SVGDocument_HierarchyUpdate
	{
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* Parent; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* NewNode; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* ReplaceNode; // 0x20
	};
}
