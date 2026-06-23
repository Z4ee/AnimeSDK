#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils_SceneNodeWorldTransform_TypeDefinitionIndex = 31152;

	struct alignas(8) VectorUtils_SceneNodeWorldTransform
	{
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* Node; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* Parent; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D WorldTransform; // 0x20
		::System::Single WorldOpacity; // 0x38
	};
}
