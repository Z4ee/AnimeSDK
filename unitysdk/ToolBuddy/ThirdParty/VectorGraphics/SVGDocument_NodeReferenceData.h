#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_NodeReferenceData_TypeDefinitionIndex = 31751;

	struct alignas(8) SVGDocument_NodeReferenceData
	{
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node; // 0x10
		::UnityEngine::Rect viewport; // 0x18
		::System::String* id; // 0x28
	};
}
