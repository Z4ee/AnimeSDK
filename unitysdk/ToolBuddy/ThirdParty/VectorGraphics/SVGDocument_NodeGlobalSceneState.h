#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_NodeGlobalSceneState_TypeDefinitionIndex = 31743;

	struct alignas(4) SVGDocument_NodeGlobalSceneState
	{
		::UnityEngine::Vector2 ContainerSize; // 0x10
	};
}
