#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int BezierSegment_TypeDefinitionIndex = 31782;

	struct alignas(4) BezierSegment
	{
		::UnityEngine::Vector2 P0; // 0x10
		::UnityEngine::Vector2 P1; // 0x18
		::UnityEngine::Vector2 P2; // 0x20
		::UnityEngine::Vector2 P3; // 0x28
	};
}
